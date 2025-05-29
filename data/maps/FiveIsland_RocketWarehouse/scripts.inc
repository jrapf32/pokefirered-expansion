# 1 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"

# 2 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"

# 3 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"

# 4 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
.equ PLAYER_X_POS, VAR_0x8004
# 5 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
.equ PLAYER_Y_POS, VAR_0x8005
# 6 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"

# 7 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_MapScripts::
# 8 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FiveIsland_RocketWarehouse_OnLoad
# 9 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_RocketWarehouse_OnTransition
# 10 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	.byte 0
# 11 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"

# 12 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_OnTransition::
# 13 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_FIVE_ISLAND_ROCKET_WAREHOUSE
# 14 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 15 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"

# 16 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_OnLoad::
# 17 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	call_if_defeated TRAINER_TEAM_ROCKET_ADMIN, FiveIsland_RocketWarehouse_EventScript_SetArrowsForReEntry
# 18 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 19 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"

# 20 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_SetArrowsForReEntry::
# 21 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	setmetatile 26, 20, METATILE_SilphCo_Arrow_Up, 0
# 22 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	setmetatile 27, 20, METATILE_SilphCo_Arrow_Up, 0
# 23 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	return
# 24 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"

# 25 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Cage::
# 26 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	lockall
# 27 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_ROCKETS_IN_WAREHOUSE, FiveIsland_RocketWarehouse_EventScript_CageUnlocked
# 28 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_ManyMonsLockedInPen
# 29 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	releaseall
# 30 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 31 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"

# 32 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_CageUnlocked::
# 33 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_PenUnlockedMonsFled
# 34 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	releaseall
# 35 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 36 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"

# 37 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Computer::
# 38 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_ReportWithGraphsAndText, MSGBOX_SIGN
# 39 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 40 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"

# 41 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Admin2Trigger::
# 42 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	lockall
# 43 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN2, Common_Movement_WalkInPlaceFasterLeft
# 44 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	waitmovement 0
# 45 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	setvar VAR_MAP_SCENE_ROCKET_WAREHOUSE, 1
# 46 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	releaseall
# 47 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 48 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"

# 49 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Gideon::
# 50 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_GIDEON, FiveIsland_RocketWarehouse_Text_GideonIntro, FiveIsland_RocketWarehouse_Text_GideonDefeat, FiveIsland_RocketWarehouse_EventScript_DefeatedGideon
# 51 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, FiveIsland_RocketWarehouse_EventScript_MentionGiovannisKid
# 52 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_GetLostLeaveMeBe, MSGBOX_AUTOCLOSE
# 53 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 54 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"

# 55 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_MentionGiovannisKid::
# 56 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, 5
# 57 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_GiovannisKidHasRedHair, MSGBOX_AUTOCLOSE
# 58 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 59 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"

# 60 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_DefeatedGideon::
# 61 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_GideonPostBattle
# 62 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	setflag FLAG_RECOVERED_SAPPHIRE
# 63 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	giveitem ITEM_SAPPHIRE
# 64 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	release
# 65 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 66 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"

# 67 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Grunt2::
# 68 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_47, FiveIsland_RocketWarehouse_Text_Grunt2Intro, FiveIsland_RocketWarehouse_Text_Grunt2Defeat
# 69 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 70 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 71 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"

# 72 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Grunt3::
# 73 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_48, FiveIsland_RocketWarehouse_Text_Grunt3Intro, FiveIsland_RocketWarehouse_Text_Grunt3Defeat
# 74 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 75 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 76 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"

# 77 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Admin2::
# 78 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_ADMIN_2, FiveIsland_RocketWarehouse_Text_Admin2Intro, FiveIsland_RocketWarehouse_Text_Admin2Defeat, FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin2
# 79 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Admin2PostBattle, MSGBOX_AUTOCLOSE
# 80 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 81 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"

# 82 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin2::
# 83 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	getplayerxy PLAYER_X_POS, PLAYER_Y_POS
# 84 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	call_if_le PLAYER_X_POS, 24, FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin2
# 85 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Admin2PostBattle
# 86 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	closemessage
# 87 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 88 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	removeobject LOCALID_WAREHOUSE_GRUNT2
# 89 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	removeobject LOCALID_WAREHOUSE_GRUNT3
# 90 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	removeobject LOCALID_WAREHOUSE_ADMIN2
# 91 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	removeobject LOCALID_WAREHOUSE_ADMIN1
# 92 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	setflag FLAG_HIDE_FIVE_ISLAND_ROCKETS
# 93 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 94 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	setvar VAR_MAP_SCENE_ROCKET_WAREHOUSE, 1
# 95 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	setflag FLAG_DEFEATED_ROCKETS_IN_WAREHOUSE
# 96 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	release
# 97 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 98 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"

# 99 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin2::
# 100 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 101 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	waitmovement 0
# 102 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	return
# 103 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"

# 104 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Grunt1::
# 105 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_42, FiveIsland_RocketWarehouse_Text_Grunt1Intro, FiveIsland_RocketWarehouse_Text_Grunt1Defeat
# 106 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 107 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 108 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"

# 109 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Admin1::
# 110 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_ADMIN, FiveIsland_RocketWarehouse_Text_Admin1Intro, FiveIsland_RocketWarehouse_Text_Admin1Defeat, FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1
# 111 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_MadeItSoYouCanComeBackThrough, MSGBOX_AUTOCLOSE
# 112 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 113 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"

# 114 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1::
# 115 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	getplayerxy PLAYER_X_POS, PLAYER_Y_POS
# 116 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 117 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	call_if_eq VAR_RESULT, DIR_NORTH, FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin1
# 118 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Admin1PostBattle
# 119 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	closemessage
# 120 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	call_if_le PLAYER_X_POS, 24, FiveIsland_RocketWarehouse_EventScript_AdminWalkToSwitchFar
# 121 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	call_if_eq PLAYER_X_POS, 25, FiveIsland_RocketWarehouse_EventScript_AdminWalkToSwitch
# 122 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	call_if_eq PLAYER_X_POS, 26, FiveIsland_RocketWarehouse_EventScript_AdminFaceSwitch
# 123 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	call_if_eq PLAYER_X_POS, 27, FiveIsland_RocketWarehouse_EventScript_AdminFaceSwitch
# 124 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	playse SE_PIN
# 125 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	call FiveIsland_RocketWarehouse_EventScript_SetArrowsForReEntry
# 126 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	special DrawWholeMapView
# 127 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	waitse
# 128 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	call_if_le PLAYER_X_POS, 24, FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerLeft
# 129 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	call_if_eq PLAYER_X_POS, 25, FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerLeft
# 130 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	call_if_eq PLAYER_X_POS, 26, FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerLeft
# 131 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	call_if_eq PLAYER_X_POS, 27, FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerDown
# 132 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_MadeItSoYouCanComeBackThrough
# 133 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	release
# 134 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 135 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"

# 136 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin1::
# 137 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	goto_if_eq PLAYER_X_POS, 27, EventScript_Return
# 138 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 139 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	waitmovement 0
# 140 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	return
# 141 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"

# 142 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_AdminWalkToSwitchFar::
# 143 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN1, FiveIsland_RocketWarehouse_Movement_AdminWalkToSwitchFar
# 144 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	waitmovement 0
# 145 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	return
# 146 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"

# 147 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_AdminWalkToSwitch::
# 148 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN1, FiveIsland_RocketWarehouse_Movement_AdminWalkToSwitch
# 149 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	waitmovement 0
# 150 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	return
# 151 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"

# 152 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_AdminFaceSwitch::
# 153 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN1, Common_Movement_WalkInPlaceFasterUp
# 154 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	waitmovement 0
# 155 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	return
# 156 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"

# 157 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerLeft::
# 158 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN1, Common_Movement_WalkInPlaceFasterLeft
# 159 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	waitmovement 0
# 160 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	return
# 161 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"

# 162 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerDown::
# 163 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN1, Common_Movement_WalkInPlaceFasterDown
# 164 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	waitmovement 0
# 165 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	return
# 166 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"

# 167 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_Movement_AdminWalkToSwitchFar::
# 168 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	walk_right
# 169 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	walk_right
# 170 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	walk_in_place_faster_up
# 171 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	step_end
# 172 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"

# 173 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_Movement_AdminWalkToSwitch::
# 174 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	walk_right
# 175 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	walk_in_place_faster_up
# 176 "data//maps/FiveIsland_RocketWarehouse/scripts.pory"
	step_end
