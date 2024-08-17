#include "global.h"
#include "gflib.h"
#include "decompress.h"
#include "event_data.h"
#include "gba/flash_internal.h"
#include "m4a.h"
#include "save.h"
#include "strings.h"

struct HelpSystemVideoState
{
    /*0x00*/ MainCallback savedVblankCb;
    /*0x04*/ MainCallback savedHblankCb;
    /*0x08*/ u16 savedDispCnt;
    /*0x0a*/ u16 savedBg0Cnt;
    /*0x0c*/ u16 savedBg0Hofs;
    /*0x0e*/ u16 savedBg0Vofs;
    /*0x10*/ u16 savedBldCnt;
    /*0x12*/ u8 savedTextColor[3];
    /*0x15*/ u8 state;
};

bool32 sIsInSaveFailedScreen;

static EWRAM_DATA u16 sSaveType = SAVE_NORMAL;
static EWRAM_DATA u8 sSaveFailedScreenState = 0;
static EWRAM_DATA struct HelpSystemVideoState sVideoState = {0};
static EWRAM_DATA u8 (*sMapTilesBackup)[BG_CHAR_SIZE] = NULL;

static void BlankPalettes(void);
static void UpdateMapBufferWithText(void);
static void ClearMapBuffer(void);
static void PrintTextOnSaveFailedScreen(const u8 *a0);
static bool32 TryWipeDamagedSectors(void);
static bool32 WipeDamagedSectors(u32 damagedSectors);
// from help_system_util.c
static void DecompressAndRenderGlyph(u8 fontId, u16 glyph, struct Bitmap *srcBlit, struct Bitmap *destBlit, u8 *destBuffer, u8 x, u8 y, u8 width, u8 height);
static void HelpSystemRenderText(u8 fontId, u8 * dest, const u8 * src, u8 x, u8 y, u8 width, u8 height);
static void RestoreCallbacks(void);
static void RestoreGPURegs(void);
static void RestoreMapTextColors(void);
static void RestoreMapTiles(void);
static void SaveCallbacks(void);
static void SaveMapGPURegs(void);
static void SaveMapTextColors(void);
static void SaveMapTiles(void);

static const u16 sSaveFailedScreenPals[] = INCBIN_U16("graphics/interface/save_failed_screen.gbapal");

void SetNotInSaveFailedScreen(void)
{
    sIsInSaveFailedScreen = FALSE;
}

void DoSaveFailedScreen(u8 saveType)
{
    sSaveType = saveType;
    sIsInSaveFailedScreen = TRUE;
}

bool32 RunSaveFailedScreen(void)
{
    switch (sSaveFailedScreenState)
    {
    case 0:
        if (!sIsInSaveFailedScreen)
            return FALSE;
        m4aMPlayVolumeControl(&gMPlayInfo_BGM, TRACKS_ALL, 128);
        SaveCallbacks();
        sSaveFailedScreenState = 1;
        break;
    case 1:
        SaveMapTiles();
        SaveMapGPURegs();
        SaveMapTextColors();
        BlankPalettes();
        SetGpuReg(REG_OFFSET_DISPCNT, 0);
        sSaveFailedScreenState = 2;
        break;
    case 2:
        RequestDma3Fill(0, (void *)BG_CHAR_ADDR(3), BG_CHAR_SIZE, DMA3_16BIT);
        RequestDma3Copy(sSaveFailedScreenPals, (void *)PLTT, 0x20, DMA3_16BIT);
        sSaveFailedScreenState = 3;
        break;
    case 3:
        ClearMapBuffer();
        PrintTextOnSaveFailedScreen(gText_SaveFailedCheckingBackup);
        UpdateMapBufferWithText();
        sSaveFailedScreenState = 4;
        break;
    case 4:
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        SetGpuReg(REG_OFFSET_BG0HOFS, 0);
        SetGpuReg(REG_OFFSET_BG0VOFS, 0);
        SetGpuReg(REG_OFFSET_BG0CNT, BGCNT_PRIORITY(0) | BGCNT_CHARBASE(3) | BGCNT_SCREENBASE(31));
        SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_BG0_ON);
        sSaveFailedScreenState = 5;
        break;
    case 5:
        if (TryWipeDamagedSectors() == TRUE)
        {
            gSaveAttemptStatus = SAVE_STATUS_OK;
            PrintTextOnSaveFailedScreen(gText_SaveCompletePressA);
        }
        else
        {
            gSaveAttemptStatus = SAVE_STATUS_ERROR;
            PrintTextOnSaveFailedScreen(gText_BackupMemoryDamaged);
        }
        sSaveFailedScreenState = 6;
        break;
    case 6:
        if (JOY_NEW(A_BUTTON))
            sSaveFailedScreenState = 7;
        break;
    case 7:
        SetGpuReg(REG_OFFSET_DISPCNT, 0);
        RestoreMapTiles();
        BlankPalettes();
        sSaveFailedScreenState = 8;
        break;
    case 8:
        m4aMPlayVolumeControl(&gMPlayInfo_BGM, TRACKS_ALL, 256);
        RestoreMapTextColors();
        RestoreGPURegs();
        RestoreCallbacks();
        sIsInSaveFailedScreen = FALSE;
        sSaveFailedScreenState = 0;
        break;
    }
    return TRUE;
}

static void BlankPalettes(void)
{
    int i;
    for (i = 0; i < BG_PLTT_SIZE; i += sizeof(u16))
    {
        *((u16 *)(BG_PLTT + i)) = RGB_BLACK;
        *((u16 *)(OBJ_PLTT + i)) = RGB_BLACK;
    }
}

static void RequestDmaCopyFromScreenBuffer(void)
{
    RequestDma3Copy(gDecompressionBuffer + 0x3800, (void *)BG_SCREEN_ADDR(31), 0x500, DMA3_16BIT);
}

static void RequestDmaCopyFromCharBuffer(void)
{
    RequestDma3Copy(gDecompressionBuffer + 0x020, (void *)BG_CHAR_ADDR(3) + 0x20, 0x2300, DMA3_16BIT);
}

static void FillBgMapBufferRect(u16 baseBlock, u8 left, u8 top, u8 width, u8 height, u16 blockOffset)
{
    u16 i, j;

    for (i = top; i < top + height; i++)
    {
        for (j = left; j < left + width; j++)
        {
            *((u16 *)(gDecompressionBuffer + 0x3800 + 64 * i + 2 * j)) = baseBlock;
            baseBlock += blockOffset;
        }
    }
    RequestDmaCopyFromScreenBuffer();
}

static void UpdateMapBufferWithText(void)
{
    FillBgMapBufferRect(0x001, 1, 5, 28, 10, 0x001);
}

static void ClearMapBuffer(void)
{
    FillBgMapBufferRect(0x000, 0, 0, 30, 20, 0x000);
}

static void PrintTextOnSaveFailedScreen(const u8 *str)
{
    GenerateFontHalfRowLookupTable(TEXT_COLOR_DARK_GRAY, TEXT_COLOR_WHITE, TEXT_COLOR_LIGHT_GRAY);
    CpuFill16(PIXEL_FILL(1) | (PIXEL_FILL(1) << 8), gDecompressionBuffer + 0x20, 0x2300);
    HelpSystemRenderText(2, gDecompressionBuffer + 0x20, str, 2, 2, 28, 10);
    RequestDmaCopyFromCharBuffer();
}

static bool32 TryWipeDamagedSectors(void)
{
    int i = 0;
    for (i = 0; gDamagedSaveSectors != 0 && i < 3; i++)
    {
        if (WipeDamagedSectors(gDamagedSaveSectors))
            return FALSE;
        HandleSavingData(sSaveType);
    }
    if (gDamagedSaveSectors != 0)
        return FALSE;
    return TRUE;
}

static bool16 VerifySectorWipe(u32 sector)
{
    u16 sector0 = sector;
    u16 i;
    u32 *saveDataBuffer = (void *)&gSaveDataBuffer;
    ReadFlash(sector0, 0, saveDataBuffer, 0x1000);
    for (i = 0; i < 0x1000 / sizeof(u32); i++, saveDataBuffer++)
    {
        if (*saveDataBuffer != 0)
            return TRUE;
    }
    return FALSE;
}

static bool32 WipeSector(u32 sector)
{
    bool32 result;
    u16 i, j;

    i = 0;
    while (i < 130)
    {
        for (j = 0; j < 0x1000; j++)
        {
            ProgramFlashByte(sector, j, 0);
        }
        result = VerifySectorWipe(sector);
        i++;
        if (!result)
            break;
    }

    return result;
}

static bool32 WipeDamagedSectors(u32 damagedSectors)
{
    int i;
    for (i = 0; i < 32; i++)
    {
        if (damagedSectors & (1 << i))
        {
            if (!WipeSector(i))
            {
                damagedSectors &= ~(1 << i);
            }
        }
    }
    if (damagedSectors == 0)
        return FALSE;
    else
        return TRUE;
}

static void RestoreCallbacks(void)
{
    gMain.vblankCallback = sVideoState.savedVblankCb;
    gMain.hblankCallback = sVideoState.savedHblankCb;
}

static void RestoreGPURegs(void)
{
    SetGpuReg(REG_OFFSET_BLDCNT, sVideoState.savedBldCnt);
    SetGpuReg(REG_OFFSET_BG0HOFS, sVideoState.savedBg0Hofs);
    SetGpuReg(REG_OFFSET_BG0VOFS, sVideoState.savedBg0Vofs);
    SetGpuReg(REG_OFFSET_BG0CNT, sVideoState.savedBg0Cnt);
    SetGpuReg(REG_OFFSET_DISPCNT, sVideoState.savedDispCnt);
}

static void RestoreMapTextColors(void)
{
    RestoreTextColors(
        &sVideoState.savedTextColor[0],
        &sVideoState.savedTextColor[1],
        &sVideoState.savedTextColor[2]
    );
}

static void RestoreMapTiles(void)
{
    RequestDma3Copy(sMapTilesBackup, (void *)BG_CHAR_ADDR(3), BG_CHAR_SIZE, DMA3_16BIT);
    Free(sMapTilesBackup);
}

static void SaveCallbacks(void)
{
    vu16 * dma;
    sVideoState.savedVblankCb = gMain.vblankCallback;
    sVideoState.savedHblankCb = gMain.hblankCallback;
    gMain.vblankCallback = NULL;
    gMain.hblankCallback = NULL;

    dma = (void *)REG_ADDR_DMA0;
    dma[5] &= ~(DMA_START_MASK | DMA_DREQ_ON | DMA_REPEAT);
    dma[5] &= ~DMA_ENABLE;
    dma[5];
}

static void SaveMapGPURegs(void)
{
    sVideoState.savedDispCnt = GetGpuReg(REG_OFFSET_DISPCNT);
    sVideoState.savedBg0Cnt = GetGpuReg(REG_OFFSET_BG0CNT);
    sVideoState.savedBg0Hofs = GetGpuReg(REG_OFFSET_BG0HOFS);
    sVideoState.savedBg0Vofs = GetGpuReg(REG_OFFSET_BG0VOFS);
    sVideoState.savedBldCnt = GetGpuReg(REG_OFFSET_BLDCNT);
}

static void SaveMapTiles(void)
{
    sMapTilesBackup = Alloc(BG_CHAR_SIZE);
    RequestDma3Copy((void *)BG_CHAR_ADDR(3), sMapTilesBackup, BG_CHAR_SIZE, DMA3_16BIT);
}

static void SaveMapTextColors(void)
{
    SaveTextColors(
        &sVideoState.savedTextColor[0],
        &sVideoState.savedTextColor[1],
        &sVideoState.savedTextColor[2]
    );
}

// remove this??
static void DecompressAndRenderGlyph(u8 fontId, u16 glyph, struct Bitmap *srcBlit, struct Bitmap *destBlit, u8 *destBuffer, u8 x, u8 y, u8 width, u8 height)
{
    if (fontId == FONT_SMALL)
        DecompressGlyph_Small(glyph, FALSE);
    else if (fontId == FONT_FEMALE)
        DecompressGlyph_Female(glyph, FALSE);
    else
        DecompressGlyph_Normal(glyph, FALSE);
    srcBlit->pixels = gGlyphInfo.pixels;
    srcBlit->width = 16;
    srcBlit->height = 16;
    destBlit->pixels = destBuffer;
    destBlit->width = width * 8;
    destBlit->height = height * 8;
    BlitBitmapRect4Bit(srcBlit, destBlit, 0, 0, x, y, gGlyphInfo.width, gGlyphInfo.height, 0);
}

// remove this???
static void HelpSystemRenderText(u8 fontId, u8 * dest, const u8 * src, u8 x, u8 y, u8 width, u8 height)
{
    // fontId -> sp+24
    // dest -> sp+28
    // src -> r9
    // x -> sp+34
    // y -> r10
    // width -> sp+2C
    // height -> sp+30
    struct Bitmap srcBlit;
    struct Bitmap destBlit;
    u8 orig_x = x;
    u8 i = 0;
    s32 clearPixels = 0;

    while (1)
    {
        u16 curChar = *src;
        src++;
        switch (curChar)
        {
        case EOS:
            return;
        case CHAR_NEWLINE:
            x = orig_x;
            y += gGlyphInfo.height + 1;
            break;
        case PLACEHOLDER_BEGIN:
            curChar = *src;
            src++;
            if (curChar == PLACEHOLDER_ID_PLAYER)
            {
                for (i = 0; i < 10; i++)
                {
                    if (gSaveBlock2Ptr->playerName[i] == EOS)
                    {
                        break;
                    }
                    DecompressAndRenderGlyph(fontId, gSaveBlock2Ptr->playerName[i], &srcBlit, &destBlit, dest, x, y, width, height);
                    // This is required to match a dummy [sp+#0x24] read here
                    if (fontId == FONT_SMALL)
                    {
                        x += gGlyphInfo.width;
                    }
                    else
                    {
                        x += gGlyphInfo.width + 0;
                    }
                }
            }
            else if (curChar == PLACEHOLDER_ID_STRING_VAR_1)
            {
                for (i = 0; ; i++)
                {
                    if (FlagGet(FLAG_SYS_NOT_SOMEONES_PC) == TRUE)
                    {
                        if (gString_Bill[i] == EOS)
                        {
                            break;
                        }
                        DecompressAndRenderGlyph(fontId, gString_Bill[i], &srcBlit, &destBlit, dest, x, y, width, height);
                    }
                    else
                    {
                        if (gString_Someone[i] == EOS)
                        {
                            break;
                        }
                        DecompressAndRenderGlyph(fontId, gString_Someone[i], &srcBlit, &destBlit, dest, x, y, width, height);
                    }
                    if (fontId == FONT_SMALL)
                    {
                        x += gGlyphInfo.width;
                    }
                    else
                    {
                        x += gGlyphInfo.width + 0;
                    }
                }
            }
            break;
        case CHAR_PROMPT_SCROLL:
        case CHAR_PROMPT_CLEAR:
            x = orig_x;
            y += gGlyphInfo.height + 1;
            break;
        case EXT_CTRL_CODE_BEGIN:
            curChar = *src;
            src++;
            switch (curChar)
            {
            case EXT_CTRL_CODE_COLOR_HIGHLIGHT_SHADOW:
                src++;
                //fallthrough
            case EXT_CTRL_CODE_PLAY_BGM:
            case EXT_CTRL_CODE_PLAY_SE:
                src++;
                //fallthrough
            case EXT_CTRL_CODE_COLOR:
            case EXT_CTRL_CODE_HIGHLIGHT:
            case EXT_CTRL_CODE_SHADOW:
            case EXT_CTRL_CODE_PALETTE:
            case EXT_CTRL_CODE_FONT:
            case EXT_CTRL_CODE_PAUSE:
            case EXT_CTRL_CODE_ESCAPE:
            case EXT_CTRL_CODE_SHIFT_RIGHT:
            case EXT_CTRL_CODE_SHIFT_DOWN:
                src++;
            case EXT_CTRL_CODE_RESET_FONT:
            case EXT_CTRL_CODE_PAUSE_UNTIL_PRESS:
            case EXT_CTRL_CODE_WAIT_SE:
            case EXT_CTRL_CODE_FILL_WINDOW:
                break;
            case EXT_CTRL_CODE_CLEAR:
            case EXT_CTRL_CODE_SKIP:
                src++;
                break;
            case EXT_CTRL_CODE_CLEAR_TO:
            {
                clearPixels = *src + orig_x - x;

                if (clearPixels > 0)
                {
                    destBlit.pixels = dest;
                    destBlit.width = width * 8;
                    destBlit.height = height * 8;
                    FillBitmapRect4Bit(&destBlit, x, y, clearPixels, GetFontAttribute(fontId, FONTATTR_MAX_LETTER_HEIGHT), 0);
                    x += clearPixels;
                }
                src++;
                break;
            }
            case EXT_CTRL_CODE_MIN_LETTER_SPACING:
                src++;
                break;
            case EXT_CTRL_CODE_JPN:
            case EXT_CTRL_CODE_ENG:
                break;
            }
            break;
        case CHAR_KEYPAD_ICON:
            curChar = *src;
            src++;
            srcBlit.pixels = (u8 *)&gKeypadIconTiles[0x20 * GetKeypadIconTileOffset(curChar)];
            srcBlit.width = 0x80;
            srcBlit.height = 0x80;
            destBlit.pixels = dest;
            destBlit.width = width * 8;
            destBlit.height = height * 8;
            BlitBitmapRect4Bit(&srcBlit, &destBlit, 0, 0, x, y, GetKeypadIconWidth(curChar), GetKeypadIconHeight(curChar), 0);
            x += GetKeypadIconWidth(curChar);
            break;
        case CHAR_EXTRA_SYMBOL:
            curChar = *src + 0x100;
            src++;
            //fallthrough
        default:
            if (curChar == CHAR_SPACE)
            {
                if (fontId == FONT_SMALL)
                {
                    x += 5;
                }
                else
                {
                    x += 4;
                }
            }
            else
            {
                DecompressAndRenderGlyph(fontId, curChar, &srcBlit, &destBlit, dest, x, y, width, height);
                if (fontId == FONT_SMALL)
                {
                    x += gGlyphInfo.width;
                }
                else
                {
                    x += gGlyphInfo.width + 0;
                }
            }
            break;
        }
    }
}
