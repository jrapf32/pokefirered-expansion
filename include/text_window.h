#ifndef GUARD_TEXT_WINDOW_H
#define GUARD_TEXT_WINDOW_H

#define WINDOW_FRAMES_COUNT 10

struct TilesPal
{
    const u8 *tiles;
    const u16 *pal;
};

const struct TilesPal *GetWindowFrameTilesPal(u8 id);
void LoadWindowGfx(u8 windowId, u8 frameType, u16 destOffset, u8 palOffset);
void rbox_fill_rectangle(u8 windowId);
const u16 *GetTextWindowPalette(u8 id);
const u16 *GetOverworldTextboxPalettePtr(void);
void LoadMessageBoxGfx(u8 windowId, u16 tileStart, u8 palette);
void LoadStdWindowGfx(u8 windowId, u16 tileStart, u8 palette);
void LoadUserWindowBorderGfx(u8 windowId, u16 tileStart, u8 palette);
void LoadUserWindowBorderGfx_(u8 windowId, u16 tileStart, u8 palette);
void LoadStdWindowGfxOnBg(u8 bgId, u16 tileStart, u8 palette);
void DrawTextBorderOuter(u8 windowId, u16 tileStart, u8 palette);
void DrawTextBorderInner(u8 windowId, u16 tileNum, u8 palNum);
void LoadSignBoxGfx(u8 windowId, u16 destOffset, u8 palIdx);
void LoadDexNavWindowGfx(u8 windowId, u16 destOffset, u8 palOffset);
void LoadStdWindowTiles(u8 windowId, u16 destOffset);

#endif // GUARD_TEXT_WINDOW_H
