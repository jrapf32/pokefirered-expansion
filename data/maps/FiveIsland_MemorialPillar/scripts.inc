# 1 "data//maps/FiveIsland_MemorialPillar/scripts.pory"

# 2 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_MapScripts::
# 3 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	.byte 0
# 4 "data//maps/FiveIsland_MemorialPillar/scripts.pory"

# 5 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_MemorialMan::
# 6 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	lock
# 7 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_GOT_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_AlreadyGotTM42
# 8 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_ReturnedForTM42
# 9 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ScrubScrub
# 10 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	closemessage
# 11 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_FacePlayer
# 12 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 13 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	delay 45
# 14 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_YourMonsLookHealthy
# 15 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterUp
# 16 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 17 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ThisIsWhereIBuriedMyOnix
# 18 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 19 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 20 "data//maps/FiveIsland_MemorialPillar/scripts.pory"

# 21 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_AlreadyGotTM42::
# 22 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ScrubScrubTectonix
# 23 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 24 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 25 "data//maps/FiveIsland_MemorialPillar/scripts.pory"

# 26 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_ReturnedForTM42::
# 27 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_StillHaveThingAsMyThanks
# 28 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	giveitem ITEM_TM42
# 29 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FiveIsland_MemorialPillar_EventScript_NoRoomForTM42
# 30 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	call FiveIsland_MemorialPillar_EventScript_ReceivedTM42
# 31 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 32 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 33 "data//maps/FiveIsland_MemorialPillar/scripts.pory"

# 34 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_Memorial::
# 35 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	
# 36 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	lockall
# 37 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_GOT_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced
# 38 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced
# 39 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_HereLiesTectonixLemonadeOffering
# 40 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	checkitem ITEM_LEMONADE
# 41 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_MemorialPillar_EventScript_AskPlaceLemonade
# 42 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
# 43 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 44 "data//maps/FiveIsland_MemorialPillar/scripts.pory"

# 45 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_AskPlaceLemonade::
# 46 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_LeaveAnotherLemonadeOffering, MSGBOX_YESNO
# 47 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FiveIsland_MemorialPillar_EventScript_PlaceLemonade
# 48 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
# 49 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 50 "data//maps/FiveIsland_MemorialPillar/scripts.pory"

# 51 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_PlaceLemonade::
# 52 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	removeitem ITEM_LEMONADE
# 53 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_PlacedCanOfLemonade
# 54 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	closemessage
# 55 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterRight
# 56 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 57 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	delay 45
# 58 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 59 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 60 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 61 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ThankYouPleaseTakeThis
# 62 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	giveitem ITEM_TM42
# 63 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FiveIsland_MemorialPillar_EventScript_NoRoomForTM42
# 64 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	call FiveIsland_MemorialPillar_EventScript_ReceivedTM42
# 65 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
# 66 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 67 "data//maps/FiveIsland_MemorialPillar/scripts.pory"

# 68 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_ReceivedTM42::
# 69 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_BeGoodToYourMonsToo
# 70 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterUp
# 71 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 72 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_GOT_TM42_AT_MEMORIAL_PILLAR
# 73 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	return
# 74 "data//maps/FiveIsland_MemorialPillar/scripts.pory"

# 75 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_NoRoomForTM42::
# 76 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR
# 77 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_DontHaveRoomForIt
# 78 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
# 79 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 80 "data//maps/FiveIsland_MemorialPillar/scripts.pory"

# 81 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced::
# 82 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_HereLiesTectonix
# 83 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
# 84 "data//maps/FiveIsland_MemorialPillar/scripts.pory"
	end
