#include "global.h"
#include "gflib.h"
#include "constants/songs.h"
#include "easy_chat.h"
#include "task.h"
#include "link.h"
#include "link_rfu.h"
#include "util.h"
#include "script.h"
#include "event_data.h"
#include "battle_tower.h"
#include "new_game.h"
#include "wonder_news.h"
#include "mystery_gift_menu.h"

#include "mystery_gift.h"
#include "strings.h"

#define CALC_CRC(data) CalcCRC16WithTable((void *)&(data), sizeof(data))

#if FREE_MYSTERY_GIFT == FALSE
static bool32 ValidateWonderNews(const struct WonderNews * src);
#endif //FREE_MYSTERY_GIFT
static void ClearSavedWonderNews(void);
#if FREE_MYSTERY_GIFT == FALSE
static void ClearSavedWonderNewsMetadata(void);
static bool32 ValidateWonderCard(const struct WonderCard * src);
static void ClearSavedWonderCard(void);
static void ClearSavedWonderCardMetadata(void);
static void IncrementCardStatForNewTrainer(u32 eventId, u32 trainerId, u32 *idsList, s32 count);
static void ClearSavedTrainerIds(void);
#endif //FREE_MYSTERY_GIFT

static const u16 sReceivedGiftFlags[] = {
    FLAG_RECEIVED_AURORA_TICKET,
    FLAG_RECEIVED_MYSTIC_TICKET,
    FLAG_RECEIVED_OLD_SEA_MAP, // Not used until Emerald
    FLAG_WONDER_CARD_UNUSED_1,
    FLAG_WONDER_CARD_UNUSED_2,
    FLAG_WONDER_CARD_UNUSED_3,
    FLAG_WONDER_CARD_UNUSED_4,
    FLAG_WONDER_CARD_UNUSED_5,
    FLAG_WONDER_CARD_UNUSED_6,
    FLAG_WONDER_CARD_UNUSED_7,
    FLAG_WONDER_CARD_UNUSED_8,
    FLAG_WONDER_CARD_UNUSED_9,
    FLAG_WONDER_CARD_UNUSED_10,
    FLAG_WONDER_CARD_UNUSED_11,
    FLAG_WONDER_CARD_UNUSED_12,
    FLAG_WONDER_CARD_UNUSED_13,
    FLAG_WONDER_CARD_UNUSED_14,
    FLAG_WONDER_CARD_UNUSED_15,
    FLAG_WONDER_CARD_UNUSED_16,
    FLAG_WONDER_CARD_UNUSED_17
};

static EWRAM_DATA bool32 sStatsEnabled = FALSE;

void ClearMysteryGift(void)
{
#if FREE_MYSTERY_GIFT == FALSE
    CpuFill32(0, &gSaveBlock1Ptr->mysteryGift, sizeof(gSaveBlock1Ptr->mysteryGift));
    ClearSavedWonderNewsMetadata();
#endif //FREE_MYSTERY_GIFT
    InitQuestionnaireWords();
}

struct WonderNews * GetSavedWonderNews(void)
{
#if FREE_MYSTERY_GIFT == FALSE
    return &gSaveBlock1Ptr->mysteryGift.news;
#else
    return NULL;
#endif //FREE_MYSTERY_GIFT
}

struct WonderCard * GetSavedWonderCard(void)
{
#if FREE_MYSTERY_GIFT == FALSE
    return &gSaveBlock1Ptr->mysteryGift.card;
#else
    return NULL;
#endif //FREE_MYSTERY_GIFT
}

struct WonderCardMetadata * GetSavedWonderCardMetadata(void)
{
#if FREE_MYSTERY_GIFT == FALSE
    return &gSaveBlock1Ptr->mysteryGift.cardMetadata;
#else
    return NULL;
#endif //FREE_MYSTERY_GIFT
}

struct WonderNewsMetadata * GetSavedWonderNewsMetadata(void)
{
#if FREE_MYSTERY_GIFT == FALSE
    return &gSaveBlock1Ptr->mysteryGift.newsMetadata;
#else
    return NULL;
#endif //FREE_MYSTERY_GIFT
}

u16 * GetQuestionnaireWordsPtr(void)
{
#if FREE_MYSTERY_GIFT == FALSE
    return gSaveBlock1Ptr->mysteryGift.questionnaireWords;
#else
    return NULL;
#endif //FREE_MYSTERY_GIFT
}

// Equivalent to ClearSavedWonderCardAndRelated, but nothing else to clear
void ClearSavedWonderNewsAndRelated(void)
{
    ClearSavedWonderNews();
}

bool32 SaveWonderNews(const struct WonderNews * news)
{
#if FREE_MYSTERY_GIFT == FALSE
    if (!ValidateWonderNews(news))
        return FALSE;

    ClearSavedWonderNews();
    gSaveBlock1Ptr->mysteryGift.news = *news;
    gSaveBlock1Ptr->mysteryGift.newsCrc = CALC_CRC(gSaveBlock1Ptr->mysteryGift.news);
    return TRUE;
#else
    return FALSE;
#endif //FREE_MYSTERY_GIFT
}

bool32 ValidateSavedWonderNews(void)
{
#if FREE_MYSTERY_GIFT == FALSE
    if (CALC_CRC(gSaveBlock1Ptr->mysteryGift.news) != gSaveBlock1Ptr->mysteryGift.newsCrc)
        return FALSE;
    if (!ValidateWonderNews(&gSaveBlock1Ptr->mysteryGift.news))
        return FALSE;
    return TRUE;
#else
    return FALSE;
#endif //FREE_MYSTERY_GIFT
}

#if FREE_MYSTERY_GIFT == FALSE
static bool32 ValidateWonderNews(const struct WonderNews * news)
{
    if (news->id == 0)
        return FALSE;
    return TRUE;
}
#endif //FREE_MYSTERY_GIFT

bool32 IsSendingSavedWonderNewsAllowed(void)
{
#if FREE_MYSTERY_GIFT == FALSE
    const struct WonderNews * news = &gSaveBlock1Ptr->mysteryGift.news;
    if (news->sendType == SEND_TYPE_DISALLOWED)
        return FALSE;
    return TRUE;
#else
    return FALSE;
#endif //FREE_MYSTERY_GIFT
}

static void ClearSavedWonderNews(void)
{
#if FREE_MYSTERY_GIFT == FALSE
    CpuFill32(0, GetSavedWonderNews(), sizeof(gSaveBlock1Ptr->mysteryGift.news));
    gSaveBlock1Ptr->mysteryGift.newsCrc = 0;
#endif //FREE_MYSTERY_GIFT
}

#if FREE_MYSTERY_GIFT == FALSE
static void ClearSavedWonderNewsMetadata(void)
{
    CpuFill32(0, GetSavedWonderNewsMetadata(), sizeof(gSaveBlock1Ptr->mysteryGift.newsMetadata));
    WonderNews_Reset();
}
#endif //FREE_MYSTERY_GIFT

bool32 IsWonderNewsSameAsSaved(const u8 * news)
{
#if FREE_MYSTERY_GIFT == FALSE
    const u8 * savedNews = (const u8 *)&gSaveBlock1Ptr->mysteryGift.news;
    u32 i;
    if (!ValidateSavedWonderNews())
        return FALSE;

    for (i = 0; i < sizeof(gSaveBlock1Ptr->mysteryGift.news); i++)
    {
        if (savedNews[i] != news[i])
            return FALSE;
    }
    return TRUE;
#else
    return FALSE;
#endif //FREE_MYSTERY_GIFT
}

void ClearSavedWonderCardAndRelated(void)
{
#if FREE_MYSTERY_GIFT == FALSE
    ClearSavedWonderCard();
    ClearSavedWonderCardMetadata();
    ClearSavedTrainerIds();
    ClearRamScript();
    ClearMysteryGiftFlags();
    ClearMysteryGiftVars();
#endif //FREE_MYSTERY_GIFT
#if FREE_BATTLE_TOWER_E_READER == FALSE
    ClearEReaderTrainer(&gSaveBlock2Ptr->battleTower.ereaderTrainer);
#endif //FREE_BATTLE_TOWER_E_READER
}

bool32 SaveWonderCard(const struct WonderCard * card)
{
#if FREE_MYSTERY_GIFT == FALSE
    struct WonderCardMetadata * metadata;
    if (!ValidateWonderCard(card))
        return FALSE;

    ClearSavedWonderCardAndRelated();
    memcpy(&gSaveBlock1Ptr->mysteryGift.card, card, sizeof(struct WonderCard));
    gSaveBlock1Ptr->mysteryGift.cardCrc = CALC_CRC(gSaveBlock1Ptr->mysteryGift.card);
    metadata = &gSaveBlock1Ptr->mysteryGift.cardMetadata;
    metadata->iconSpecies = (&gSaveBlock1Ptr->mysteryGift.card)->iconSpecies;
    return TRUE;
#else
    return FALSE;
#endif //FREE_MYSTERY_GIFT
}

bool32 ValidateSavedWonderCard(void)
{
#if FREE_MYSTERY_GIFT == FALSE
    if (gSaveBlock1Ptr->mysteryGift.cardCrc != CALC_CRC(gSaveBlock1Ptr->mysteryGift.card))
        return FALSE;
    if (!ValidateWonderCard(&gSaveBlock1Ptr->mysteryGift.card))
        return FALSE;
    if (!ValidateRamScript())
        return FALSE;
    return TRUE;
#else
    return FALSE;
#endif //FREE_MYSTERY_GIFT
}

#if FREE_MYSTERY_GIFT == FALSE
static bool32 ValidateWonderCard(const struct WonderCard * card)
{
    if (card->flagId == 0)
        return FALSE;
    if (card->type >= CARD_TYPE_COUNT)
        return FALSE;
    if (!(card->sendType == SEND_TYPE_DISALLOWED
       || card->sendType == SEND_TYPE_ALLOWED
       || card->sendType == SEND_TYPE_ALLOWED_ALWAYS))
        return FALSE;
    if (card->bgType >= NUM_WONDER_BGS)
        return FALSE;
    if (card->maxStamps > MAX_STAMP_CARD_STAMPS)
        return FALSE;
    return TRUE;
}
#endif //FREE_MYSTERY_GIFT

bool32 IsSendingSavedWonderCardAllowed(void)
{
#if FREE_MYSTERY_GIFT == FALSE
    const struct WonderCard * card = &gSaveBlock1Ptr->mysteryGift.card;
    if (card->sendType == SEND_TYPE_DISALLOWED)
        return FALSE;
    return TRUE;
#else
    return FALSE;
#endif //FREE_MYSTERY_GIFT
}

#if FREE_MYSTERY_GIFT == FALSE
static void ClearSavedWonderCard(void)
{
    CpuFill32(0, &gSaveBlock1Ptr->mysteryGift.card, sizeof(gSaveBlock1Ptr->mysteryGift.card));
    gSaveBlock1Ptr->mysteryGift.cardCrc = 0;
}

static void ClearSavedWonderCardMetadata(void)
{
    CpuFill32(0, GetSavedWonderCardMetadata(), sizeof(gSaveBlock1Ptr->mysteryGift.cardMetadata));
    gSaveBlock1Ptr->mysteryGift.cardMetadataCrc = 0;
}
#endif //FREE_MYSTERY_GIFT

u16 GetWonderCardFlagId(void)
{
#if FREE_MYSTERY_GIFT == FALSE
    if (ValidateSavedWonderCard())
        return gSaveBlock1Ptr->mysteryGift.card.flagId;
#endif //FREE_MYSTERY_GIFT

    return 0;
}

void DisableWonderCardSending(struct WonderCard * card)
{
    if (card->sendType == SEND_TYPE_ALLOWED)
        card->sendType = SEND_TYPE_DISALLOWED;
}

static bool32 IsWonderCardFlagIDInValidRange(u16 flagId)
{
    if (flagId >= WONDER_CARD_FLAG_OFFSET && flagId < WONDER_CARD_FLAG_OFFSET + NUM_WONDER_CARD_FLAGS)
        return TRUE;
    return FALSE;
}

bool32 IsSavedWonderCardGiftNotReceived(void)
{
    u16 value = GetWonderCardFlagId();
    if (!IsWonderCardFlagIDInValidRange(value))
        return FALSE;

    // If flag is set, player has received gift from this card
    if (FlagGet(sReceivedGiftFlags[value - WONDER_CARD_FLAG_OFFSET]) == TRUE)
        return FALSE;
    return TRUE;
}

static s32 GetNumStampsInMetadata(const struct WonderCardMetadata * data, s32 size)
{
    s32 numStamps = 0;
    s32 i;
    for (i = 0; i < size; i++)
    {
        if (data->stampData[STAMP_ID][i] && data->stampData[STAMP_SPECIES][i])
            numStamps++;
    }
    return numStamps;
}

static bool32 IsStampInMetadata(const struct WonderCardMetadata * metadata, const u16 * stamp, s32 maxStamps)
{
    s32 i;
    for (i = 0; i < maxStamps; i++)
    {
        if (metadata->stampData[STAMP_ID][i] == stamp[STAMP_ID])
            return TRUE;
        if (metadata->stampData[STAMP_SPECIES][i] == stamp[STAMP_SPECIES])
            return TRUE;
    }
    return FALSE;
}

#if FREE_MYSTERY_GIFT == FALSE
static bool32 ValidateStamp(const u16 * stamp)
{
    if (stamp[STAMP_ID] == 0)
        return FALSE;
    if (stamp[STAMP_SPECIES] == SPECIES_NONE)
        return FALSE;
    if (stamp[STAMP_SPECIES] >= NUM_SPECIES)
        return FALSE;
    return TRUE;
}

static s32 GetNumStampsInSavedCard(void)
{
    struct WonderCard * card;
    if (!ValidateSavedWonderCard())
        return 0;
    card = &gSaveBlock1Ptr->mysteryGift.card;
    if (card->type != CARD_TYPE_STAMP)
        return 0;
    return GetNumStampsInMetadata(&gSaveBlock1Ptr->mysteryGift.cardMetadata, card->maxStamps);
}
#endif //FREE_MYSTERY_GIFT

bool32 MysteryGift_TrySaveStamp(const u16 * stamp)
{
#if FREE_MYSTERY_GIFT == FALSE
    struct WonderCard * card = &gSaveBlock1Ptr->mysteryGift.card;
    s32 maxStamps = card->maxStamps;
    s32 i;
    if (!ValidateStamp(stamp))
        return FALSE;
    if (IsStampInMetadata(&gSaveBlock1Ptr->mysteryGift.cardMetadata, stamp, maxStamps))
        return FALSE;
    for (i = 0; i < maxStamps; i++)
    {
        if (gSaveBlock1Ptr->mysteryGift.cardMetadata.stampData[STAMP_ID][i] == 0
         && gSaveBlock1Ptr->mysteryGift.cardMetadata.stampData[STAMP_SPECIES][i] == SPECIES_NONE)
        {
            gSaveBlock1Ptr->mysteryGift.cardMetadata.stampData[STAMP_ID][i] = stamp[STAMP_ID];
            gSaveBlock1Ptr->mysteryGift.cardMetadata.stampData[STAMP_SPECIES][i] = stamp[STAMP_SPECIES];
            return TRUE;
        }
    }
#endif //FREE_MYSTERY_GIFT

    return FALSE;
}

#define GAME_DATA_VALID_VAR 0x101

#if defined(FIRERED)
#define VERSION_CODE 1
#elif defined(LEAFGREEN)
#define VERSION_CODE 2
#endif

void MysteryGift_LoadLinkGameData(struct MysteryGiftLinkGameData * data)
{
#if FREE_MYSTERY_GIFT == FALSE
    s32 i;
    CpuFill32(0, data, sizeof(*data));
    // Magic
    data->unk_00 = GAME_DATA_VALID_VAR;
    data->unk_04 = 1;
    data->unk_08 = 1;
    data->unk_0C = 1;
    data->unk_10 = VERSION_CODE;

    // Check whether a card already exists
    if (ValidateSavedWonderCard())
    {
        // Populate fields
        data->flagId = GetSavedWonderCard()->flagId;
        data->cardMetadata = *GetSavedWonderCardMetadata();
        data->maxStamps = GetSavedWonderCard()->maxStamps;
    }
    else
    {
        data->flagId = 0;
    }

    for (i = 0; i < NUM_QUESTIONNAIRE_WORDS; i++)
        data->questionnaireWords[i] = gSaveBlock1Ptr->mysteryGift.questionnaireWords[i];

    CopyTrainerId(data->playerTrainerId, gSaveBlock2Ptr->playerTrainerId);
    StringCopy(data->playerName, gSaveBlock2Ptr->playerName);
    for (i = 0; i < EASY_CHAT_BATTLE_WORDS_COUNT; i++)
        data->easyChatProfile[i] = gSaveBlock1Ptr->easyChatProfile[i];

    memcpy(data->gameCode, RomHeaderGameCode, GAME_CODE_LENGTH);
    data->version = RomHeaderSoftwareVersion;
#endif //FREE_MYSTERY_GIFT
}

bool32 MysteryGift_ValidateLinkGameData(const struct MysteryGiftLinkGameData * data)
{
    if (data->unk_00 != GAME_DATA_VALID_VAR)
        return FALSE;
    if (!(data->unk_04 & 1))
        return FALSE;
    if (!(data->unk_08 & 1))
        return FALSE;
    if (!(data->unk_0C & 1))
        return FALSE;
    if (!(data->unk_10 & 0x0F))
        return FALSE;
    return TRUE;
}

u32 MysteryGift_CompareCardFlags(const u16 * flagId, const struct MysteryGiftLinkGameData * data, const void *unused)
{
    // Has a Wonder Card already?
    if (data->flagId == 0)
        return 0;

    // Has this Wonder Card already?
    if (*flagId == data->flagId)
        return 1;

    // Player has a different Wonder Card
    return 2;
}

u32 MysteryGift_CheckStamps(const u16 * stamp, const struct MysteryGiftLinkGameData * data, const void *unused)
{
    s32 stampsMissing = data->maxStamps - GetNumStampsInMetadata(&data->cardMetadata, data->maxStamps);
    
    // Has full stamp card?
    if (stampsMissing == 0)
        return 1;

    // Already has stamp?
    if (IsStampInMetadata(&data->cardMetadata, stamp, data->maxStamps))
        return 3;

    // Only 1 empty stamp left?
    if (stampsMissing == 1)
        return 4;

    // This is a new stamp
    return 2;
}

bool32 MysteryGift_DoesQuestionnaireMatch(const struct MysteryGiftLinkGameData * data, const u16 * words)
{
    s32 i;
    for (i = 0; i < NUM_QUESTIONNAIRE_WORDS; i++)
    {
        if (data->questionnaireWords[i] != words[i])
            return FALSE;
    }
    return TRUE;
}

static s32 GetNumStampsInLinkData(const struct MysteryGiftLinkGameData * data)
{
    return GetNumStampsInMetadata(&data->cardMetadata, data->maxStamps);
}

u16 MysteryGift_GetCardStatFromLinkData(const struct MysteryGiftLinkGameData * data, u32 stat)
{
    switch (stat)
    {
    case CARD_STAT_BATTLES_WON:
        return data->cardMetadata.battlesWon;
    case CARD_STAT_BATTLES_LOST:
        return data->cardMetadata.battlesLost;
    case CARD_STAT_NUM_TRADES:
        return data->cardMetadata.numTrades;
    case CARD_STAT_NUM_STAMPS:
        return GetNumStampsInLinkData(data);
    case CARD_STAT_MAX_STAMPS:
        return data->maxStamps;
    default:
        AGB_ASSERT_EX(0, ABSPATH("mevent.c"), 825);
        return 0;
    }
}

#if FREE_MYSTERY_GIFT == FALSE
static void IncrementCardStat(u32 statType)
{
    struct WonderCard * card = &gSaveBlock1Ptr->mysteryGift.card;
    if (card->type == CARD_TYPE_LINK_STAT)
    {
        u16 * stat = NULL;
        switch (statType)
        {
        case CARD_STAT_BATTLES_WON:
            stat = &gSaveBlock1Ptr->mysteryGift.cardMetadata.battlesWon;
            break;
        case CARD_STAT_BATTLES_LOST:
            stat = &gSaveBlock1Ptr->mysteryGift.cardMetadata.battlesLost;
            break;
        case CARD_STAT_NUM_TRADES:
            stat = &gSaveBlock1Ptr->mysteryGift.cardMetadata.numTrades;
            break;
        case CARD_STAT_NUM_STAMPS:
        case CARD_STAT_MAX_STAMPS:
            break;
        }
        if (stat == NULL)
        {
             AGB_ASSERT_EX(0, ABSPATH("mevent.c"), 868);
        }
        else if (++(*stat) > MAX_WONDER_CARD_STAT)
        {
            *stat = MAX_WONDER_CARD_STAT;
        }
    }
}
#endif //FREE_MYSTERY_GIFT

u16 MysteryGift_GetCardStat(u32 stat)
{
#if FREE_MYSTERY_GIFT == FALSE
    switch (stat)
    {
    case CARD_STAT_BATTLES_WON:
    {
        struct WonderCard * card = &gSaveBlock1Ptr->mysteryGift.card;
        if (card->type == CARD_TYPE_LINK_STAT)
        {
            struct WonderCardMetadata * metadata = &gSaveBlock1Ptr->mysteryGift.cardMetadata;
            return metadata->battlesWon;
        }
        break;
    }
    case CARD_STAT_BATTLES_LOST:
    {
        struct WonderCard * card = &gSaveBlock1Ptr->mysteryGift.card;
        if (card->type == CARD_TYPE_LINK_STAT)
        {
            struct WonderCardMetadata * metadata = &gSaveBlock1Ptr->mysteryGift.cardMetadata;
            return metadata->battlesLost;
        }
        break;
    }
    case CARD_STAT_NUM_TRADES:
    {
        struct WonderCard * card = &gSaveBlock1Ptr->mysteryGift.card;
        if (card->type == CARD_TYPE_LINK_STAT)
        {
            struct WonderCardMetadata * metadata = &gSaveBlock1Ptr->mysteryGift.cardMetadata;
            return metadata->numTrades;
        }
        break;
    }
    case CARD_STAT_NUM_STAMPS:
    {
        struct WonderCard * card = &gSaveBlock1Ptr->mysteryGift.card;
        if (card->type == CARD_TYPE_STAMP)
            return GetNumStampsInSavedCard();
        break;
    }
    case CARD_STAT_MAX_STAMPS:
    {
        struct WonderCard * card = &gSaveBlock1Ptr->mysteryGift.card;
        if (card->type == CARD_TYPE_STAMP)
            return card->maxStamps;
        break;
    }
    }
#endif //FREE_MYSTERY_GIFT

    AGB_ASSERT_EX(0, ABSPATH("mevent.c"), 913);
    return 0;
}

void MysteryGift_DisableStats(void)
{
    sStatsEnabled = FALSE;
}

bool32 MysteryGift_TryEnableStatsByFlagId(u16 flagId)
{
    sStatsEnabled = FALSE;
    if (flagId == 0)
        return FALSE;

    if (!ValidateSavedWonderCard())
        return FALSE;

#if FREE_MYSTERY_GIFT == FALSE
    if (gSaveBlock1Ptr->mysteryGift.card.flagId != flagId)
        return FALSE;
#endif //FREE_MYSTERY_GIFT

    sStatsEnabled = TRUE;
    return TRUE;
}

void MysteryGift_TryIncrementStat(u32 stat, u32 trainerId)
{
#if FREE_MYSTERY_GIFT == FALSE
    if (sStatsEnabled)
    {
        switch (stat)
        {
        case CARD_STAT_NUM_TRADES:
            IncrementCardStatForNewTrainer(CARD_STAT_NUM_TRADES,
                                            trainerId,
                                            gSaveBlock1Ptr->mysteryGift.trainerIds[1],
                                            ARRAY_COUNT(gSaveBlock1Ptr->mysteryGift.trainerIds[1]));
            break;
        case CARD_STAT_BATTLES_WON:
            IncrementCardStatForNewTrainer(CARD_STAT_BATTLES_WON,
                                            trainerId,
                                            gSaveBlock1Ptr->mysteryGift.trainerIds[0],
                                            ARRAY_COUNT(gSaveBlock1Ptr->mysteryGift.trainerIds[0]));
            break;
        case CARD_STAT_BATTLES_LOST:
            IncrementCardStatForNewTrainer(CARD_STAT_BATTLES_LOST,
                                            trainerId,
                                            gSaveBlock1Ptr->mysteryGift.trainerIds[0],
                                            ARRAY_COUNT(gSaveBlock1Ptr->mysteryGift.trainerIds[0]));
            break;
        default:
             AGB_ASSERT_EX(0, ABSPATH("mevent.c"), 988);
             break;
        }
    }
#endif //FREE_MYSTERY_GIFT
}

#if FREE_MYSTERY_GIFT == FALSE
static void ClearSavedTrainerIds(void)
{
    CpuFill32(0, gSaveBlock1Ptr->mysteryGift.trainerIds, sizeof(gSaveBlock1Ptr->mysteryGift.trainerIds));
}

// Returns TRUE if it's a new trainer id, FALSE if an existing one.
// In either case the given trainerId is saved in element 0
static bool32 RecordTrainerId(u32 trainerId, u32 * trainerIds, s32 size)
{
    s32 i;
    s32 j;

    for (i = 0; i < size; i++)
    {
        if (trainerIds[i] == trainerId)
            break;
    }

    if (i == size)
    {
        // New trainer, shift array and insert new id at front
        for (j = size - 1; j > 0; j--)
            trainerIds[j] = trainerIds[j - 1];

        trainerIds[0] = trainerId;
        return TRUE;
    }
    else
    {
        // Existing trainer, shift back to old slot and move id to front
        for (j = i; j > 0; j--)
            trainerIds[j] = trainerIds[j - 1];

        trainerIds[0] = trainerId;
        return FALSE;
    }
}

static void IncrementCardStatForNewTrainer(u32 stat, u32 trainerId, u32 * trainerIds, s32 size)
{
    if (RecordTrainerId(trainerId, trainerIds, size))
        IncrementCardStat(stat);
}
#endif //FREE_MYSTERY_GIFT
