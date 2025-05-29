# 1 "data//maps/CeruleanCity_House4/scripts.pory"

# 2 "data//maps/CeruleanCity_House4/scripts.pory"
.set REWARD_TYPE, VAR_0x8004
# 3 "data//maps/CeruleanCity_House4/scripts.pory"
.set REWARD_ITEM, VAR_0x8008
# 4 "data//maps/CeruleanCity_House4/scripts.pory"
CeruleanCity_House4_MapScripts::
# 5 "data//maps/CeruleanCity_House4/scripts.pory"
	.byte 0
# 6 "data//maps/CeruleanCity_House4/scripts.pory"

# 7 "data//maps/CeruleanCity_House4/scripts.pory"
CeruleanCity_House4_EventScript_WonderNewsBerryMan::
# 8 "data//maps/CeruleanCity_House4/scripts.pory"
	
# 9 "data//maps/CeruleanCity_House4/scripts.pory"
	lock
# 10 "data//maps/CeruleanCity_House4/scripts.pory"
	specialvar REWARD_TYPE, WonderNews_GetRewardInfo
# 11 "data//maps/CeruleanCity_House4/scripts.pory"
	copyvar REWARD_ITEM, VAR_RESULT
# 12 "data//maps/CeruleanCity_House4/scripts.pory"
	goto_if_eq REWARD_TYPE, NEWS_REWARD_NONE,       CeruleanCity_House4_EventScript_NoNews
# 13 "data//maps/CeruleanCity_House4/scripts.pory"
	goto_if_eq REWARD_TYPE, NEWS_REWARD_RECV_SMALL, CeruleanCity_House4_EventScript_Reward_RecvSmall
# 14 "data//maps/CeruleanCity_House4/scripts.pory"
	goto_if_eq REWARD_TYPE, NEWS_REWARD_RECV_BIG,   CeruleanCity_House4_EventScript_Reward_RecvBig
# 15 "data//maps/CeruleanCity_House4/scripts.pory"
	goto_if_eq REWARD_TYPE, NEWS_REWARD_WAITING,    CeruleanCity_House4_EventScript_Waiting
# 16 "data//maps/CeruleanCity_House4/scripts.pory"
	goto_if_eq REWARD_TYPE, NEWS_REWARD_SENT_SMALL, CeruleanCity_House4_EventScript_Reward_SentSmall
# 17 "data//maps/CeruleanCity_House4/scripts.pory"
	goto_if_eq REWARD_TYPE, NEWS_REWARD_SENT_BIG,   CeruleanCity_House4_EventScript_Reward_SentBig
# 18 "data//maps/CeruleanCity_House4/scripts.pory"
	goto_if_eq REWARD_TYPE, NEWS_REWARD_AT_MAX,     CeruleanCity_House4_EventScript_AtMax
# 19 "data//maps/CeruleanCity_House4/scripts.pory"
	end
# 20 "data//maps/CeruleanCity_House4/scripts.pory"

# 21 "data//maps/CeruleanCity_House4/scripts.pory"
@ Mystery Gift is not enabled, or the player has no saved Wonder News
# 22 "data//maps/CeruleanCity_House4/scripts.pory"
CeruleanCity_House4_EventScript_NoNews::
# 23 "data//maps/CeruleanCity_House4/scripts.pory"
	msgbox CeruleanCity_House4_Text_NothingEntertaining
# 24 "data//maps/CeruleanCity_House4/scripts.pory"
	release
# 25 "data//maps/CeruleanCity_House4/scripts.pory"
	end
# 26 "data//maps/CeruleanCity_House4/scripts.pory"

# 27 "data//maps/CeruleanCity_House4/scripts.pory"
@ Small reward for receiving Wonder News from friend
# 28 "data//maps/CeruleanCity_House4/scripts.pory"
CeruleanCity_House4_EventScript_Reward_RecvSmall::
# 29 "data//maps/CeruleanCity_House4/scripts.pory"
	call CeruleanCity_House4_EventScript_MovementReactionToNews
# 30 "data//maps/CeruleanCity_House4/scripts.pory"
	msgbox CeruleanCity_House4_Text_NewNewsInformativeHaveThis
# 31 "data//maps/CeruleanCity_House4/scripts.pory"
	giveitem REWARD_ITEM
# 32 "data//maps/CeruleanCity_House4/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_House4_EventScript_NoRoomForBerries
# 33 "data//maps/CeruleanCity_House4/scripts.pory"
	release
# 34 "data//maps/CeruleanCity_House4/scripts.pory"
	end
# 35 "data//maps/CeruleanCity_House4/scripts.pory"

# 36 "data//maps/CeruleanCity_House4/scripts.pory"
@ Big reward for receiving Wonder News from non-friend source
# 37 "data//maps/CeruleanCity_House4/scripts.pory"
CeruleanCity_House4_EventScript_Reward_RecvBig::
# 38 "data//maps/CeruleanCity_House4/scripts.pory"
	call CeruleanCity_House4_EventScript_MovementReactionToNews
# 39 "data//maps/CeruleanCity_House4/scripts.pory"
	msgbox CeruleanCity_House4_Text_IncredibleNewsHaveBerries
# 40 "data//maps/CeruleanCity_House4/scripts.pory"
	giveitem REWARD_ITEM, 4
# 41 "data//maps/CeruleanCity_House4/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_House4_EventScript_NoRoomForBerries
# 42 "data//maps/CeruleanCity_House4/scripts.pory"
	release
# 43 "data//maps/CeruleanCity_House4/scripts.pory"
	end
# 44 "data//maps/CeruleanCity_House4/scripts.pory"

# 45 "data//maps/CeruleanCity_House4/scripts.pory"
@ Player has not recently sent Wonder News
# 46 "data//maps/CeruleanCity_House4/scripts.pory"
CeruleanCity_House4_EventScript_Waiting::
# 47 "data//maps/CeruleanCity_House4/scripts.pory"
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_FacePlayer
# 48 "data//maps/CeruleanCity_House4/scripts.pory"
	waitmovement 0
# 49 "data//maps/CeruleanCity_House4/scripts.pory"
	msgbox CeruleanCity_House4_Text_WishCouldShareNewsWithOthers
# 50 "data//maps/CeruleanCity_House4/scripts.pory"
	release
# 51 "data//maps/CeruleanCity_House4/scripts.pory"
	end
# 52 "data//maps/CeruleanCity_House4/scripts.pory"

# 53 "data//maps/CeruleanCity_House4/scripts.pory"
@ Small reward for sending Wonder News every 1-3 times
# 54 "data//maps/CeruleanCity_House4/scripts.pory"
CeruleanCity_House4_EventScript_Reward_SentSmall::
# 55 "data//maps/CeruleanCity_House4/scripts.pory"
	call CeruleanCity_House4_EventScript_MovementReactionToNews
# 56 "data//maps/CeruleanCity_House4/scripts.pory"
	msgbox CeruleanCity_House4_Text_ThanksForSpreadingNewsTakeThis
# 57 "data//maps/CeruleanCity_House4/scripts.pory"
	giveitem REWARD_ITEM
# 58 "data//maps/CeruleanCity_House4/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_House4_EventScript_NoRoomForBerries
# 59 "data//maps/CeruleanCity_House4/scripts.pory"
	release
# 60 "data//maps/CeruleanCity_House4/scripts.pory"
	end
# 61 "data//maps/CeruleanCity_House4/scripts.pory"

# 62 "data//maps/CeruleanCity_House4/scripts.pory"
@ Big reward for sending Wonder News every 4th time
# 63 "data//maps/CeruleanCity_House4/scripts.pory"
CeruleanCity_House4_EventScript_Reward_SentBig::
# 64 "data//maps/CeruleanCity_House4/scripts.pory"
	call CeruleanCity_House4_EventScript_MovementReactionToNews
# 65 "data//maps/CeruleanCity_House4/scripts.pory"
	msgbox CeruleanCity_House4_Text_MagnificentNewsSpreadHaveBerries
# 66 "data//maps/CeruleanCity_House4/scripts.pory"
	giveitem REWARD_ITEM, 4
# 67 "data//maps/CeruleanCity_House4/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_House4_EventScript_NoRoomForBerries
# 68 "data//maps/CeruleanCity_House4/scripts.pory"
	release
# 69 "data//maps/CeruleanCity_House4/scripts.pory"
	end
# 70 "data//maps/CeruleanCity_House4/scripts.pory"

# 71 "data//maps/CeruleanCity_House4/scripts.pory"
@ Player has hit reward limit and must wait to receive new rewards
# 72 "data//maps/CeruleanCity_House4/scripts.pory"
CeruleanCity_House4_EventScript_AtMax::
# 73 "data//maps/CeruleanCity_House4/scripts.pory"
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_FacePlayer
# 74 "data//maps/CeruleanCity_House4/scripts.pory"
	waitmovement 0
# 75 "data//maps/CeruleanCity_House4/scripts.pory"
	msgbox CeruleanCity_House4_Text_EnjoyingMyselfWithAllSortsOfNews
# 76 "data//maps/CeruleanCity_House4/scripts.pory"
	release
# 77 "data//maps/CeruleanCity_House4/scripts.pory"
	end
# 78 "data//maps/CeruleanCity_House4/scripts.pory"

# 79 "data//maps/CeruleanCity_House4/scripts.pory"
CeruleanCity_House4_EventScript_MovementReactionToNews::
# 80 "data//maps/CeruleanCity_House4/scripts.pory"
	playse SE_PIN
# 81 "data//maps/CeruleanCity_House4/scripts.pory"
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_ExclamationMark
# 82 "data//maps/CeruleanCity_House4/scripts.pory"
	waitmovement 0
# 83 "data//maps/CeruleanCity_House4/scripts.pory"
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_FacePlayer
# 84 "data//maps/CeruleanCity_House4/scripts.pory"
	waitmovement 0
# 85 "data//maps/CeruleanCity_House4/scripts.pory"
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_Delay48
# 86 "data//maps/CeruleanCity_House4/scripts.pory"
	waitmovement 0
# 87 "data//maps/CeruleanCity_House4/scripts.pory"
	return
# 88 "data//maps/CeruleanCity_House4/scripts.pory"

# 89 "data//maps/CeruleanCity_House4/scripts.pory"
CeruleanCity_House4_EventScript_NoRoomForBerries::
# 90 "data//maps/CeruleanCity_House4/scripts.pory"
	msgbox CeruleanCity_House4_Text_YourBerryPouchIsFull
# 91 "data//maps/CeruleanCity_House4/scripts.pory"
	release
# 92 "data//maps/CeruleanCity_House4/scripts.pory"
	end
