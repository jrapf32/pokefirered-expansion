#include "global.h"
#include "event_data.h"
#include "field_move.h"
#include "fldeff.h"
#include "pokemon.h"
#include "constants/field_move.h"
#include "constants/moves.h"
#include "constants/party_menu.h"

static bool32 FieldMove_IsUnlockedCut(void);
static bool32 FieldMove_IsUnlockedFly(void);
static bool32 FieldMove_IsUnlockedSurf(void);
static bool32 FieldMove_IsUnlockedStrength(void);
static bool32 FieldMove_IsUnlockedFlash(void);
static bool32 FieldMove_IsUnlockedRockSmash(void);
static bool32 FieldMove_IsUnlockedWaterfall(void);

static const u8 sText_ShareHp[] = _("Share HP.");

const struct FieldMoveInfo gFieldMovesInfo[FIELD_MOVE_COUNT] =
{
    [FIELD_MOVE_CUT] =
    {
        .defaultSpecies = SPECIES_FARFETCHD,
        .isUnlockedFunc = FieldMove_IsUnlockedCut,
        .moveId = MOVE_CUT,
        .partyMessageId = PARTY_MSG_NOTHING_TO_CUT,
        .description = COMPOUND_STRING("Cut a tree or grass."),
        .setUpFunc = FieldMove_SetUpCut,
    },
    [FIELD_MOVE_FLY] =
    {
        .defaultSpecies = SPECIES_PIDGEOT,
        .isUnlockedFunc = FieldMove_IsUnlockedFly,
        .moveId = MOVE_FLY,
        .partyMessageId = PARTY_MSG_CANT_USE_HERE,
        .description = COMPOUND_STRING("Fly to a known town."),
        .setUpFunc = FieldMove_SetUpFly,
    },
    [FIELD_MOVE_SURF] =
    {
        .defaultSpecies = SPECIES_LAPRAS,
        .isUnlockedFunc = FieldMove_IsUnlockedSurf,
        .moveId = MOVE_SURF,
        .partyMessageId = PARTY_MSG_CANT_SURF_HERE,
        .description = COMPOUND_STRING("Travel on water."),
        .setUpFunc = FieldMove_SetUpSurf,
    },
    [FIELD_MOVE_STRENGTH] =
    {
        .defaultSpecies = SPECIES_MACHAMP,
        .isUnlockedFunc = FieldMove_IsUnlockedStrength,
        .moveId = MOVE_STRENGTH,
        .partyMessageId = PARTY_MSG_CANT_USE_HERE,
        .description = COMPOUND_STRING("Move heavy boulders."),
        .setUpFunc = FieldMove_SetUpStrength,
    },
    [FIELD_MOVE_FLASH] =
    {
        .defaultSpecies = SPECIES_PIKACHU,
        .isUnlockedFunc = FieldMove_IsUnlockedFlash,
        .moveId = MOVE_FLASH,
        .partyMessageId = PARTY_MSG_CANT_USE_HERE,
        .description = COMPOUND_STRING("Light up darkness."),
        .setUpFunc = FieldMove_SetUpFlash,
    },
    [FIELD_MOVE_ROCK_SMASH] =
    {
        .defaultSpecies = SPECIES_MACHOP,
        .isUnlockedFunc = FieldMove_IsUnlockedRockSmash,
        .moveId = MOVE_ROCK_SMASH,
        .partyMessageId = PARTY_MSG_CANT_USE_HERE,
        .description = COMPOUND_STRING("Shatter a cracked rock."),
        .setUpFunc = FieldMove_SetUpRockSmash,
    },
    [FIELD_MOVE_WATERFALL] =
    {
        .defaultSpecies = SPECIES_GYARADOS,
        .isUnlockedFunc = FieldMove_IsUnlockedWaterfall,
        .moveId = MOVE_WATERFALL,
        .partyMessageId = PARTY_MSG_CANT_USE_HERE,
        .description = COMPOUND_STRING("Climb a waterfall."),
        .setUpFunc = FieldMove_SetUpWaterfall,
    },
    [FIELD_MOVE_WHIRLPOOL] =
    {
        .defaultSpecies = SPECIES_SHELLDER,
        .isUnlockedFunc = NULL,
        .moveId = MOVE_NONE,
        .partyMessageId = PARTY_MSG_CANT_USE_HERE,
        .description = COMPOUND_STRING("N/A"),
        .setUpFunc = NULL,
    },
    [FIELD_MOVE_DIVE] =
    {
        .defaultSpecies = SPECIES_SEEL,
        .isUnlockedFunc = NULL,
        .moveId = MOVE_NONE,
        .partyMessageId = PARTY_MSG_CANT_USE_HERE,
        .description = COMPOUND_STRING("N/A"),
        .setUpFunc = NULL,
    },
    [FIELD_MOVE_DEFOG] =
    {
        .defaultSpecies = SPECIES_BUTTERFREE,
        .isUnlockedFunc = NULL,
        .moveId = MOVE_NONE,
        .partyMessageId = PARTY_MSG_CANT_USE_HERE,
        .description = COMPOUND_STRING("N/A"),
        .setUpFunc = NULL,
    },
    [FIELD_MOVE_ROCK_CLIMB] =
    {
        .defaultSpecies = SPECIES_SANDSHREW,
        .isUnlockedFunc = NULL,
        .moveId = MOVE_NONE,
        .partyMessageId = PARTY_MSG_CANT_USE_HERE,
        .description = COMPOUND_STRING("N/A"),
        .setUpFunc = NULL,
    },
    [FIELD_MOVE_TELEPORT] =
    {
        .defaultSpecies = SPECIES_ABRA,
        .isUnlockedFunc = NULL,
        .moveId = MOVE_TELEPORT,
        .partyMessageId = PARTY_MSG_CANT_USE_HERE,
        .description = COMPOUND_STRING("Return to a healing spot."),
        .setUpFunc = FieldMove_SetUpTeleport,
    },
    [FIELD_MOVE_DIG] =
    {
        .defaultSpecies = SPECIES_DIGLETT,
        .isUnlockedFunc = NULL,
        .moveId = MOVE_DIG,
        .partyMessageId = PARTY_MSG_CANT_USE_HERE,
        .description = COMPOUND_STRING("Escape from here."),
        .setUpFunc = FieldMove_SetUpDig,
    },
    [FIELD_MOVE_MILK_DRINK] =
    {
        .defaultSpecies = SPECIES_MILTANK,
        .isUnlockedFunc = NULL,
        .moveId = MOVE_MILK_DRINK,
        .partyMessageId = PARTY_MSG_NOT_ENOUGH_HP,
        .description = sText_ShareHp,
        .setUpFunc = FieldMove_SetUpSoftBoiled,
    },
    [FIELD_MOVE_SOFT_BOILED] =
    {
        .defaultSpecies = SPECIES_CHANSEY,
        .isUnlockedFunc = NULL,
        .moveId = MOVE_SOFT_BOILED,
        .partyMessageId = PARTY_MSG_NOT_ENOUGH_HP,
        .description = sText_ShareHp,
        .setUpFunc = FieldMove_SetUpSoftBoiled,
    },
    [FIELD_MOVE_SWEET_SCENT] =
    {
        .defaultSpecies = SPECIES_ODDISH,
        .isUnlockedFunc = NULL,
        .moveId = MOVE_SWEET_SCENT,
        .partyMessageId = PARTY_MSG_CANT_USE_HERE,
        .description = COMPOUND_STRING("Lure wild POKéMON."),
        .setUpFunc = FieldMove_SetUpSweetScent,
    },
};

u16 FieldMove_GetDefaultSpecies(enum FieldMove fieldMove)
{
    if (fieldMove >= FIELD_MOVE_COUNT)
        return SPECIES_NONE;
    
    return SanitizeSpeciesId(gFieldMovesInfo[fieldMove].defaultSpecies);
}

bool32 FieldMove_IsUnlocked(enum FieldMove fieldMove)
{
    if (fieldMove >= FIELD_MOVE_COUNT)
        return FALSE;
    if (gFieldMovesInfo[fieldMove].isUnlockedFunc == NULL)
        return TRUE;

    return gFieldMovesInfo[fieldMove].isUnlockedFunc();
}

static bool32 FieldMove_IsUnlockedCut(void)
{
    return FlagGet(FLAG_BADGE02_GET);
}

static bool32 FieldMove_IsUnlockedFly(void)
{
    return FlagGet(FLAG_BADGE03_GET);
}

static bool32 FieldMove_IsUnlockedSurf(void)
{
    return FlagGet(FLAG_BADGE05_GET);
}

static bool32 FieldMove_IsUnlockedStrength(void)
{
    return FlagGet(FLAG_BADGE04_GET);
}

static bool32 FieldMove_IsUnlockedFlash(void)
{
    return FlagGet(FLAG_BADGE01_GET);
}

static bool32 FieldMove_IsUnlockedRockSmash(void)
{
    return FlagGet(FLAG_BADGE06_GET);
}

static bool32 FieldMove_IsUnlockedWaterfall(void)
{
    return FlagGet(FLAG_BADGE07_GET);
}
