# 1 "data//maps/FourIsland/scripts.pory"

# 2 "data//maps/FourIsland/scripts.pory"

# 3 "data//maps/FourIsland/scripts.pory"
FourIsland_MapScripts::
# 4 "data//maps/FourIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_OnTransition
# 5 "data//maps/FourIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FourIsland_OnFrame
# 6 "data//maps/FourIsland/scripts.pory"
	.byte 0
# 7 "data//maps/FourIsland/scripts.pory"

# 8 "data//maps/FourIsland/scripts.pory"
FourIsland_OnTransition::
# 9 "data//maps/FourIsland/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_FOUR_ISLAND
# 10 "data//maps/FourIsland/scripts.pory"
	call_if_eq VAR_MAP_SCENE_FOUR_ISLAND, 0, FourIsland_EventScript_ShowRival
# 11 "data//maps/FourIsland/scripts.pory"
	call FourIsland_EventScript_TrySetDayCareManPos
# 12 "data//maps/FourIsland/scripts.pory"
	end
# 13 "data//maps/FourIsland/scripts.pory"

# 14 "data//maps/FourIsland/scripts.pory"
FourIsland_EventScript_ShowRival::
# 15 "data//maps/FourIsland/scripts.pory"
	clearflag FLAG_HIDE_FOUR_ISLAND_RIVAL
# 16 "data//maps/FourIsland/scripts.pory"
	return
# 17 "data//maps/FourIsland/scripts.pory"

# 18 "data//maps/FourIsland/scripts.pory"
FourIsland_EventScript_TrySetDayCareManPos::
# 19 "data//maps/FourIsland/scripts.pory"
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, FourIsland_EventScript_EndSetDayCareManPos
# 20 "data//maps/FourIsland/scripts.pory"
	setobjectxyperm LOCALID_FOUR_ISLAND_DAYCARE_MAN, 16, 14
# 21 "data//maps/FourIsland/scripts.pory"
FourIsland_EventScript_EndSetDayCareManPos::
# 22 "data//maps/FourIsland/scripts.pory"
	return
# 23 "data//maps/FourIsland/scripts.pory"

# 24 "data//maps/FourIsland/scripts.pory"
FourIsland_OnFrame::
# 25 "data//maps/FourIsland/scripts.pory"
	map_script_2 VAR_MAP_SCENE_FOUR_ISLAND, 0, FourIsland_EventScript_RivalScene
# 26 "data//maps/FourIsland/scripts.pory"
	.2byte 0
# 27 "data//maps/FourIsland/scripts.pory"

# 28 "data//maps/FourIsland/scripts.pory"
FourIsland_EventScript_RivalScene::
# 29 "data//maps/FourIsland/scripts.pory"
	lockall
# 30 "data//maps/FourIsland/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 31 "data//maps/FourIsland/scripts.pory"
	applymovement LOCALID_FOUR_ISLAND_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 32 "data//maps/FourIsland/scripts.pory"
	waitmovement 0
# 33 "data//maps/FourIsland/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 34 "data//maps/FourIsland/scripts.pory"
	applymovement LOCALID_FOUR_ISLAND_RIVAL, Common_Movement_ExclamationMark
# 35 "data//maps/FourIsland/scripts.pory"
	waitmovement 0
# 36 "data//maps/FourIsland/scripts.pory"
	applymovement LOCALID_FOUR_ISLAND_RIVAL, Common_Movement_Delay48
# 37 "data//maps/FourIsland/scripts.pory"
	waitmovement 0
# 38 "data//maps/FourIsland/scripts.pory"
	delay 25
# 39 "data//maps/FourIsland/scripts.pory"
	applymovement LOCALID_FOUR_ISLAND_RIVAL, FourIsland_Movement_RivalApproach
# 40 "data//maps/FourIsland/scripts.pory"
	waitmovement 0
# 41 "data//maps/FourIsland/scripts.pory"
	msgbox FourIsland_Text_RivalAlreadyGotEggBeSmellingYa
# 42 "data//maps/FourIsland/scripts.pory"
	closemessage
# 43 "data//maps/FourIsland/scripts.pory"
	applymovement LOCALID_PLAYER, FourIsland_Movement_PlayerWatchRivalExit
# 44 "data//maps/FourIsland/scripts.pory"
	applymovement LOCALID_FOUR_ISLAND_RIVAL, FourIsland_Movement_RivalExit
# 45 "data//maps/FourIsland/scripts.pory"
	waitmovement 0
# 46 "data//maps/FourIsland/scripts.pory"
	fadedefaultbgm
# 47 "data//maps/FourIsland/scripts.pory"
	playse SE_EXIT
# 48 "data//maps/FourIsland/scripts.pory"
	delay 35
# 49 "data//maps/FourIsland/scripts.pory"
	removeobject LOCALID_FOUR_ISLAND_RIVAL
# 50 "data//maps/FourIsland/scripts.pory"
	setvar VAR_MAP_SCENE_FOUR_ISLAND, 1
# 51 "data//maps/FourIsland/scripts.pory"
	releaseall
# 52 "data//maps/FourIsland/scripts.pory"
	end
# 53 "data//maps/FourIsland/scripts.pory"

# 54 "data//maps/FourIsland/scripts.pory"
FourIsland_Movement_RivalApproach::
# 55 "data//maps/FourIsland/scripts.pory"
	walk_right
# 56 "data//maps/FourIsland/scripts.pory"
	walk_right
# 57 "data//maps/FourIsland/scripts.pory"
	walk_down
# 58 "data//maps/FourIsland/scripts.pory"
	walk_down
# 59 "data//maps/FourIsland/scripts.pory"
	step_end
# 60 "data//maps/FourIsland/scripts.pory"

# 61 "data//maps/FourIsland/scripts.pory"
FourIsland_Movement_RivalExit::
# 62 "data//maps/FourIsland/scripts.pory"
	delay_16
# 63 "data//maps/FourIsland/scripts.pory"
	delay_4
# 64 "data//maps/FourIsland/scripts.pory"
	walk_down
# 65 "data//maps/FourIsland/scripts.pory"
	step_end
# 66 "data//maps/FourIsland/scripts.pory"

# 67 "data//maps/FourIsland/scripts.pory"
FourIsland_Movement_PlayerWatchRivalExit::
# 68 "data//maps/FourIsland/scripts.pory"
	walk_left
# 69 "data//maps/FourIsland/scripts.pory"
	walk_in_place_faster_right
# 70 "data//maps/FourIsland/scripts.pory"
	step_end
# 71 "data//maps/FourIsland/scripts.pory"

# 72 "data//maps/FourIsland/scripts.pory"
FourIsland_EventScript_DaycareMan::
# 73 "data//maps/FourIsland/scripts.pory"
	
# 74 "data//maps/FourIsland/scripts.pory"
	
# 75 "data//maps/FourIsland/scripts.pory"
	lock
# 76 "data//maps/FourIsland/scripts.pory"
	faceplayer
# 77 "data//maps/FourIsland/scripts.pory"
	special GetDaycareMonNicknames
# 78 "data//maps/FourIsland/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 79 "data//maps/FourIsland/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_EGG_WAITING, FourIsland_EventScript_DaycareEggWaiting
# 80 "data//maps/FourIsland/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, FourIsland_EventScript_CheckOnOneMon
# 81 "data//maps/FourIsland/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_TWO_MONS, FourIsland_EventScript_CheckOnTwoMons
# 82 "data//maps/FourIsland/scripts.pory"
	msgbox DayCare_Text_ImDaycareManSpeakToMyWife
# 83 "data//maps/FourIsland/scripts.pory"
	release
# 84 "data//maps/FourIsland/scripts.pory"
	end
# 85 "data//maps/FourIsland/scripts.pory"

# 86 "data//maps/FourIsland/scripts.pory"
FourIsland_EventScript_DaycareEggWaiting::
# 87 "data//maps/FourIsland/scripts.pory"
	msgbox DayCare_Text_DoYouWantEgg, MSGBOX_YESNO
# 88 "data//maps/FourIsland/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_EventScript_DaycareAcceptEgg
# 89 "data//maps/FourIsland/scripts.pory"
	msgbox DayCare_Text_IWillKeepDoYouWantIt, MSGBOX_YESNO
# 90 "data//maps/FourIsland/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_EventScript_DaycareAcceptEgg
# 91 "data//maps/FourIsland/scripts.pory"
	msgbox DayCare_Text_IllKeepIt
# 92 "data//maps/FourIsland/scripts.pory"
	clearflag FLAG_PENDING_DAYCARE_EGG
# 93 "data//maps/FourIsland/scripts.pory"
	special RejectEggFromDayCare
# 94 "data//maps/FourIsland/scripts.pory"
	release
# 95 "data//maps/FourIsland/scripts.pory"
	end
# 96 "data//maps/FourIsland/scripts.pory"

# 97 "data//maps/FourIsland/scripts.pory"
FourIsland_EventScript_DaycareAcceptEgg::
# 98 "data//maps/FourIsland/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 99 "data//maps/FourIsland/scripts.pory"
	goto_if_ne VAR_RESULT, PARTY_SIZE, FourIsland_EventScript_DaycareReceivedEgg
# 100 "data//maps/FourIsland/scripts.pory"
	msgbox DayCare_Text_YouHaveNoRoomForIt
# 101 "data//maps/FourIsland/scripts.pory"
	release
# 102 "data//maps/FourIsland/scripts.pory"
	end
# 103 "data//maps/FourIsland/scripts.pory"

# 104 "data//maps/FourIsland/scripts.pory"
FourIsland_EventScript_DaycareReceivedEgg::
# 105 "data//maps/FourIsland/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 106 "data//maps/FourIsland/scripts.pory"
	message DayCare_Text_ReceivedEgg
# 107 "data//maps/FourIsland/scripts.pory"
	call EventScript_RestorePrevTextColor
# 108 "data//maps/FourIsland/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 109 "data//maps/FourIsland/scripts.pory"
	waitfanfare
# 110 "data//maps/FourIsland/scripts.pory"
	waitbuttonpress
# 111 "data//maps/FourIsland/scripts.pory"
	msgbox DayCare_Text_TakeGoodCareOfIt
# 112 "data//maps/FourIsland/scripts.pory"
	special GiveEggFromDaycare
# 113 "data//maps/FourIsland/scripts.pory"
	clearflag FLAG_PENDING_DAYCARE_EGG
# 114 "data//maps/FourIsland/scripts.pory"
	release
# 115 "data//maps/FourIsland/scripts.pory"
	end
# 116 "data//maps/FourIsland/scripts.pory"

# 117 "data//maps/FourIsland/scripts.pory"
FourIsland_EventScript_CheckOnOneMon::
# 118 "data//maps/FourIsland/scripts.pory"
	special GetDaycareMonNicknames
# 119 "data//maps/FourIsland/scripts.pory"
	msgbox DayCare_Text_YourMonIsDoingFine
# 120 "data//maps/FourIsland/scripts.pory"
	release
# 121 "data//maps/FourIsland/scripts.pory"
	end
# 122 "data//maps/FourIsland/scripts.pory"

# 123 "data//maps/FourIsland/scripts.pory"
FourIsland_EventScript_CheckOnTwoMons::
# 124 "data//maps/FourIsland/scripts.pory"
	special GetDaycareMonNicknames
# 125 "data//maps/FourIsland/scripts.pory"
	msgbox DayCare_Text_YourMonsAreDoingFine
# 126 "data//maps/FourIsland/scripts.pory"
	special SetDaycareCompatibilityString
# 127 "data//maps/FourIsland/scripts.pory"
	special ShowFieldMessageStringVar4
# 128 "data//maps/FourIsland/scripts.pory"
	waitmessage
# 129 "data//maps/FourIsland/scripts.pory"
	waitbuttonpress
# 130 "data//maps/FourIsland/scripts.pory"
	release
# 131 "data//maps/FourIsland/scripts.pory"
	end
# 132 "data//maps/FourIsland/scripts.pory"

# 133 "data//maps/FourIsland/scripts.pory"
FourIsland_EventScript_OldWoman::
# 134 "data//maps/FourIsland/scripts.pory"
	lock
# 135 "data//maps/FourIsland/scripts.pory"
	faceplayer
# 136 "data//maps/FourIsland/scripts.pory"
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, FourIsland_EventScript_OldWomanLoreleiLeft
# 137 "data//maps/FourIsland/scripts.pory"
	msgbox FourIsland_Text_LoreleiHasReturned
# 138 "data//maps/FourIsland/scripts.pory"
	release
# 139 "data//maps/FourIsland/scripts.pory"
	end
# 140 "data//maps/FourIsland/scripts.pory"

# 141 "data//maps/FourIsland/scripts.pory"
FourIsland_EventScript_OldWomanLoreleiLeft::
# 142 "data//maps/FourIsland/scripts.pory"
	famechecker FAMECHECKER_LORELEI, 5
# 143 "data//maps/FourIsland/scripts.pory"
	msgbox FourIsland_Text_LoreleiMetLaprasAsChild
# 144 "data//maps/FourIsland/scripts.pory"
	release
# 145 "data//maps/FourIsland/scripts.pory"
	end
# 146 "data//maps/FourIsland/scripts.pory"

# 147 "data//maps/FourIsland/scripts.pory"
FourIsland_EventScript_LittleGirl::
# 148 "data//maps/FourIsland/scripts.pory"
	lock
# 149 "data//maps/FourIsland/scripts.pory"
	faceplayer
# 150 "data//maps/FourIsland/scripts.pory"
	famechecker FAMECHECKER_LORELEI, 4
# 151 "data//maps/FourIsland/scripts.pory"
	msgbox FourIsland_Text_LoreleiHasLotsOfStuffedDolls
# 152 "data//maps/FourIsland/scripts.pory"
	release
# 153 "data//maps/FourIsland/scripts.pory"
	end
# 154 "data//maps/FourIsland/scripts.pory"

# 155 "data//maps/FourIsland/scripts.pory"
FourIsland_EventScript_FatMan::
# 156 "data//maps/FourIsland/scripts.pory"
	msgbox FourIsland_Text_MadeSlushieUsingIcefallCaveIce, MSGBOX_NPC
# 157 "data//maps/FourIsland/scripts.pory"
	end
# 158 "data//maps/FourIsland/scripts.pory"

# 159 "data//maps/FourIsland/scripts.pory"
FourIsland_EventScript_IslandSign::
# 160 "data//maps/FourIsland/scripts.pory"
	msgbox FourIsland_Text_IslandSign, MSGBOX_SIGN
# 161 "data//maps/FourIsland/scripts.pory"
	end
# 162 "data//maps/FourIsland/scripts.pory"

# 163 "data//maps/FourIsland/scripts.pory"
FourIsland_EventScript_LoreleisHouseSign::
# 164 "data//maps/FourIsland/scripts.pory"
	msgbox FourIsland_Text_LoreleisHouse, MSGBOX_SIGN
# 165 "data//maps/FourIsland/scripts.pory"
	end
