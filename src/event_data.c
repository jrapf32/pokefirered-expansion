#include "global.h"
#include "event_data.h"
#include "item_menu.h"



#define NUM_SPECIAL_FLAGS  (SPECIAL_FLAGS_END - SPECIAL_FLAGS_START + 1)
#define NUM_TEMP_FLAGS     (TEMP_FLAGS_END - TEMP_FLAGS_START + 1)
#define NUM_TEMP_VARS      (TEMP_VARS_END - TEMP_VARS_START + 1)

#define SPECIAL_FLAGS_SIZE (NUM_SPECIAL_FLAGS / 8)  // 8 flags per byte
#define TEMP_FLAGS_SIZE    (NUM_TEMP_FLAGS / 8)
#define DAILY_FLAGS_SIZE    (NUM_DAILY_FLAGS / 8)
#define TEMP_VARS_SIZE     (NUM_TEMP_VARS * 2)      // 1/2 var per byte

#define NUM_DAILY_FLAGS   (DAILY_FLAGS_END - DAILY_FLAGS_START + 1)

EWRAM_DATA u16 gSpecialVar_0x8000 = 0;
EWRAM_DATA u16 gSpecialVar_0x8001 = 0;
EWRAM_DATA u16 gSpecialVar_0x8002 = 0;
EWRAM_DATA u16 gSpecialVar_0x8003 = 0;
EWRAM_DATA u16 gSpecialVar_0x8004 = 0;
EWRAM_DATA u16 gSpecialVar_0x8005 = 0;
EWRAM_DATA u16 gSpecialVar_0x8006 = 0;
EWRAM_DATA u16 gSpecialVar_0x8007 = 0;
EWRAM_DATA u16 gSpecialVar_0x8008 = 0;
EWRAM_DATA u16 gSpecialVar_0x8009 = 0;
EWRAM_DATA u16 gSpecialVar_0x800A = 0;
EWRAM_DATA u16 gSpecialVar_0x800B = 0;
EWRAM_DATA u16 gSpecialVar_Result = 0;
EWRAM_DATA u16 gSpecialVar_LastTalked = 0;
EWRAM_DATA u16 gSpecialVar_Facing = 0;
EWRAM_DATA u16 gSpecialVar_MonBoxId = 0;
EWRAM_DATA u16 gSpecialVar_MonBoxPos = 0;
EWRAM_DATA u16 gSpecialVar_TextColor = 0;
EWRAM_DATA u16 gSpecialVar_PrevTextColor = 0;
EWRAM_DATA u16 gSpecialVar_0x8014 = 0;
EWRAM_DATA u8 sSpecialFlags[SPECIAL_FLAGS_SIZE] = {};

#if TESTING
#define TEST_FLAGS_SIZE     1
#define TEST_VARS_SIZE      8
EWRAM_DATA static u8 sTestFlags[TEST_FLAGS_SIZE] = {0};
EWRAM_DATA static u16 sTestVars[TEST_VARS_SIZE] = {0};
#endif // TESTING

COMMON_DATA u16 gLastQuestLogStoredFlagOrVarIdx = 0;

extern u16 *const gSpecialVars[];

const u16 gBadgeFlags[NUM_BADGES] =
{
    FLAG_BADGE01_GET,
    FLAG_BADGE02_GET,
    FLAG_BADGE03_GET,
    FLAG_BADGE04_GET,
    FLAG_BADGE05_GET,
    FLAG_BADGE06_GET,
    FLAG_BADGE07_GET,
    FLAG_BADGE08_GET,
};

void InitEventData(void)
{
    memset(gSaveBlock1Ptr->flags, 0, sizeof(gSaveBlock1Ptr->flags));
    memset(gSaveBlock1Ptr->vars, 0, sizeof(gSaveBlock1Ptr->vars));
    memset(sSpecialFlags, 0, sizeof(sSpecialFlags));
}

void ClearTempFieldEventData(void)
{
    memset(gSaveBlock1Ptr->flags + (TEMP_FLAGS_START / 8), 0, TEMP_FLAGS_SIZE);
    memset(gSaveBlock1Ptr->vars + ((TEMP_VARS_START - VARS_START) * 2), 0, TEMP_VARS_SIZE);
    FlagClear(FLAG_SYS_WHITE_FLUTE_ACTIVE);
    FlagClear(FLAG_SYS_BLACK_FLUTE_ACTIVE);
    FlagClear(FLAG_SYS_USE_STRENGTH);
    FlagClear(FLAG_SYS_SPECIAL_WILD_BATTLE);
    FlagClear(FLAG_SYS_INFORMED_OF_LOCAL_WIRELESS_PLAYER);
}


void ClearDailyFlags(void)
{
    memset(gSaveBlock1Ptr->flags + (DAILY_FLAGS_START / 8), 0, DAILY_FLAGS_SIZE);
}

// The magic numbers used here (0xDA and 0x0302) correspond to those
// used in RSE for enabling the national Pokedex
void EnableNationalPokedex_RSE(void)
{
    // Note: the var, struct member, and flag are never used
    u16 *ptr = GetVarPointer(VAR_0x403C);
    gSaveBlock2Ptr->pokedex.unused = 0xDA;
    *ptr = 0x0302;
    FlagSet(FLAG_0x838);
}

void DisableNationalPokedex(void)
{
    u16 *nationalDexVar = GetVarPointer(VAR_NATIONAL_DEX);
    gSaveBlock2Ptr->pokedex.nationalMagic = 0;
    *nationalDexVar = 0;
    FlagClear(FLAG_SYS_NATIONAL_DEX);
}

void EnableNationalPokedex(void)
{
    u16 *nationalDexVar = GetVarPointer(VAR_NATIONAL_DEX);
    gSaveBlock2Ptr->pokedex.nationalMagic = 0xB9;
    *nationalDexVar = 0x6258;
    FlagSet(FLAG_SYS_NATIONAL_DEX);
}

bool32 IsNationalPokedexEnabled(void)
{
    if (gSaveBlock2Ptr->pokedex.nationalMagic == 0xB9
            && VarGet(VAR_NATIONAL_DEX) == 0x6258
            && FlagGet(FLAG_SYS_NATIONAL_DEX))
        return TRUE;

    return FALSE;
}

void DisableMysteryGift(void)
{
    FlagClear(FLAG_SYS_MYSTERY_GIFT_ENABLED);
}

void EnableMysteryGift(void)
{
    FlagSet(FLAG_SYS_MYSTERY_GIFT_ENABLED);
}

bool32 IsMysteryGiftEnabled(void)
{
    return FlagGet(FLAG_SYS_MYSTERY_GIFT_ENABLED);
}

void ClearMysteryGiftFlags(void)
{
    FlagClear(FLAG_MYSTERY_GIFT_DONE);
    FlagClear(FLAG_MYSTERY_GIFT_1);
    FlagClear(FLAG_MYSTERY_GIFT_2);
    FlagClear(FLAG_MYSTERY_GIFT_3);
    FlagClear(FLAG_MYSTERY_GIFT_4);
    FlagClear(FLAG_MYSTERY_GIFT_5);
    FlagClear(FLAG_MYSTERY_GIFT_6);
    FlagClear(FLAG_MYSTERY_GIFT_7);
    FlagClear(FLAG_MYSTERY_GIFT_8);
    FlagClear(FLAG_MYSTERY_GIFT_9);
    FlagClear(FLAG_MYSTERY_GIFT_10);
    FlagClear(FLAG_MYSTERY_GIFT_11);
    FlagClear(FLAG_MYSTERY_GIFT_12);
    FlagClear(FLAG_MYSTERY_GIFT_13);
    FlagClear(FLAG_MYSTERY_GIFT_14);
    FlagClear(FLAG_MYSTERY_GIFT_15);
}

void ClearMysteryGiftVars(void)
{
    VarSet(VAR_EVENT_PICHU_SLOT, 0);
    VarSet(VAR_MYSTERY_GIFT_1,  0);
    VarSet(VAR_MYSTERY_GIFT_2,  0);
    VarSet(VAR_MYSTERY_GIFT_3,  0);
    VarSet(VAR_MYSTERY_GIFT_4,  0);
    VarSet(VAR_MYSTERY_GIFT_5,  0);
    VarSet(VAR_MYSTERY_GIFT_6,  0);
    VarSet(VAR_MYSTERY_GIFT_7,  0);
    VarSet(VAR_ALTERING_CAVE_WILD_SET, 0);
}

void DisableResetRTC(void)
{
    VarSet(VAR_RESET_RTC_ENABLE, 0);
    FlagClear(FLAG_SYS_RESET_RTC_ENABLE);
}

void EnableResetRTC(void)
{
    VarSet(VAR_RESET_RTC_ENABLE, 0x0920);
    FlagSet(FLAG_SYS_RESET_RTC_ENABLE);
}

bool32 CanResetRTC(void)
{
    return TRUE;
    // if (!FlagGet(FLAG_SYS_RESET_RTC_ENABLE))
    //     return FALSE;
    // if (VarGet(VAR_RESET_RTC_ENABLE) != 0x0920)
    //     return FALSE;
    // return TRUE;
}

u16 *GetVarPointer(u16 id)
{
    u16 *ptr;
    if (id < VARS_START) {
        return NULL;
    }
#if TESTING
    else if (idx >= TESTING_VARS_START)
        return &sTestVars[idx - TESTING_VARS_START];
#endif // TESTING

    else if (id < SPECIAL_VARS_START)
        return &gSaveBlock1Ptr->vars[id - VARS_START];

    else
        return gSpecialVars[id - SPECIAL_VARS_START];
}

u16 VarGet(u16 idx)
{
    u16 *ptr = GetVarPointer(idx);
    if (ptr == NULL)
        return idx;
    return *ptr;
}

u16 VarGetIfExist(u16 id)
{
    u16 *ptr = GetVarPointer(id);
    if (!ptr)
        return 65535;
    return *ptr;
}

bool8 VarSet(u16 idx, u16 val)
{
    u16 *ptr = GetVarPointer(idx);
    if (ptr == NULL)
        return FALSE;
    *ptr = val;
    return TRUE;
}

u16 VarGetObjectEventGraphicsId(u8 idx)
{
    return VarGet(VAR_OBJ_GFX_ID_0 + idx);
}

u8 *GetFlagAddr(u16 idx)
{
    if (idx == 0)
        return NULL;
    if (idx < SPECIAL_FLAGS_START)
        return &gSaveBlock1Ptr->flags[idx / 8];
#if TESTING
    else if (idx >= TESTING_FLAGS_START)
        return &sTestFlags[(idx - TESTING_FLAGS_START) / 8];
#endif // TESTING
    return &sSpecialFlags[(idx - SPECIAL_FLAGS_START) / 8];
}

bool8 FlagSet(u16 idx)
{
    u8 *ptr = GetFlagAddr(idx);
    if (ptr != NULL)
        *ptr |= 1 << (idx & 7);
    return FALSE;
}

u8 FlagToggle(u16 id)
{
    u8 *ptr = GetFlagAddr(id);
    if (ptr)
        *ptr ^= 1 << (id & 7);
    return FALSE;
}

bool8 FlagClear(u16 idx)
{
    u8 *ptr = GetFlagAddr(idx);
    if (ptr != NULL)
        *ptr &= ~(1 << (idx & 7));
    return FALSE;
}

bool8 FlagGet(u16 idx)
{
    u8 *ptr = GetFlagAddr(idx);
    if (ptr == NULL)
        return FALSE;
    if (!(*ptr & 1 << (idx & 7)))
        return FALSE;
    return TRUE;
}

void ResetSpecialVars(void)
{
    gSpecialVar_0x8000 = 0;
    gSpecialVar_0x8001 = 0;
    gSpecialVar_0x8002 = 0;
    gSpecialVar_0x8003 = 0;
    gSpecialVar_0x8004 = 0;
    gSpecialVar_0x8005 = 0;
    gSpecialVar_0x8006 = 0;
    gSpecialVar_0x8007 = 0;
    gSpecialVar_0x8008 = 0;
    gSpecialVar_0x8009 = 0;
    gSpecialVar_0x800A = 0;
    gSpecialVar_0x800B = 0;
    gSpecialVar_Facing = 0;
    gSpecialVar_Result = 0;
    gSpecialVar_ItemId = 0;
    gSpecialVar_LastTalked = 0;
    gSpecialVar_MonBoxId = 0;
    gSpecialVar_MonBoxPos = 0;
    gSpecialVar_TextColor = 0;
    gSpecialVar_PrevTextColor = 0;
    gSpecialVar_0x8014 = 0;
}
