# 1 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 2 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 3 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ PLAYER_STARTER_NUM,      VAR_TEMP_1
# 4 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ PLAYER_STARTER_SPECIES,  VAR_TEMP_2
# 5 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ RIVAL_STARTER_SPECIES,   VAR_TEMP_3
# 6 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ RIVAL_STARTER_ID,        VAR_TEMP_4
# 7 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 8 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ SHOWED_OAK_COMPLETE_DEX, FLAG_TEMP_2
# 9 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 10 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_MapScripts::
# 11 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_ProfessorOaksLab_OnTransition
# 12 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PalletTown_ProfessorOaksLab_OnWarp
# 13 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_ProfessorOaksLab_OnFrame
# 14 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.byte 0
# 15 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 16 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_OnTransition::
# 17 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_VISITED_OAKS_LAB
# 18 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_EventScript_ReadyOakForStarterScene
# 19 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7, PalletTown_ProfessorOaksLab_EventScript_ReadyOakForNationalDexScene
# 20 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8, PalletTown_ProfessorOaksLab_EventScript_SetNationalDexSceneFinished
# 21 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_set FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL, PalletTown_ProfessorOaksLab_EventScript_SetSkipPokeBallCheck
# 22 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 23 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 24 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SetSkipPokeBallCheck::
# 25 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_OAK_SKIP_22_RIVAL_CHECK
# 26 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 27 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 28 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SetNationalDexSceneFinished::
# 29 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 9
# 30 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 31 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 32 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyOakForStarterScene::
# 33 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 11
# 34 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_UP
# 35 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	savebgm MUS_OAK
# 36 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 37 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 38 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyOakForNationalDexScene::
# 39 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 11
# 40 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_UP
# 41 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 42 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 43 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_OnWarp::
# 44 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_EventScript_ReadyPlayerForStarterScene
# 45 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.2byte 0
# 46 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 47 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyPlayerForStarterScene::
# 48 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 49 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 50 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 51 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_OnFrame::
# 52 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_ChooseStarterScene
# 53 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7, PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene
# 54 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.2byte 0
# 55 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 56 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene:: @ 8169002 
# 57 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 58 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_FACING, DIR_NORTH
# 59 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 60 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakEnter
# 61 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 62 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_OAKS_LAB_PROF_OAK
# 63 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 3
# 64 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_DOWN
# 65 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 66 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerEnter
# 67 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 68 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene
# 69 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 70 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 71 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene::
# 72 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakSightingsOfRareMons
# 73 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 74 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterNorth
# 75 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterSouth
# 76 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest
# 77 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest
# 78 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalJustLetMeHandleEverything
# 79 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 80 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakNeedYourHelpTooNeedToSeePokedexes
# 81 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakNorth
# 82 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakWest
# 83 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 84 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakTookBothPokedexUnits
# 85 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 86 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 87 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskNorth
# 88 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskSouth
# 89 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskEast
# 90 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskWest
# 91 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_POKEDEX_1
# 92 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_POKEDEX_2
# 93 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 94 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakNowTheseUnitsCanRecordMoreData
# 95 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 96 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_POKEDEX_1
# 97 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_POKEDEX_2
# 98 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 99 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth
# 100 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth
# 101 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast
# 102 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest
# 103 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 104 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 105 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_PlayersPokedexWasUpgraded
# 106 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 107 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 108 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 109 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special EnableNationalPokedex
# 110 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakMustReallyWorkToFillPokedex
# 111 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalIllCompleteThePokedex
# 112 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 113 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 114 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth
# 115 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 116 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 117 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 118 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_OAKS_LAB_RIVAL
# 119 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 120 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8
# 121 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 122 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 123 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 124 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterNorth::
# 125 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 5, 10
# 126 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 127 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 128 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth
# 129 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 130 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 131 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 132 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 133 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest::
# 134 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 135 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 136 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 137 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 138 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 139 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 140 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 141 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 142 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 143 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterSouth::
# 144 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 145 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 146 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 147 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 148 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 149 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 150 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 151 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 152 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakNorth::
# 153 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 154 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 155 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 156 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 157 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakWest::
# 158 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 159 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 160 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 161 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 162 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskNorth::
# 163 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 164 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 165 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 166 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 167 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskSouth::
# 168 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDeskSouth
# 169 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 170 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 171 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 172 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 173 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 174 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskEast::
# 175 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 176 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast
# 177 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 178 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 179 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 180 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskWest::
# 181 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 182 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 183 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 184 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 185 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk::
# 186 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 187 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 188 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 189 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 190 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 191 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 192 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 193 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDeskSouth::
# 194 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 195 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 196 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 197 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 198 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 199 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 200 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 201 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_ChooseStarterScene::
# 202 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 203 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 204 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakEnter
# 205 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 206 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_OAKS_LAB_PROF_OAK
# 207 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 3
# 208 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_DOWN
# 209 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 210 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerEnter
# 211 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 212 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 213 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 214 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 215 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	savebgm MUS_DUMMY
# 216 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 217 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalFedUpWithWaiting
# 218 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 219 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 60
# 220 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThreeMonsChooseOne
# 221 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 222 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 223 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalReact
# 224 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 225 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalNoFairWhatAboutMe
# 226 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBePatientRival
# 227 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
# 228 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 229 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 230 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 231 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakEnter::
# 232 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 233 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 234 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 235 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 236 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 237 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 238 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 239 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 240 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerEnter::
# 241 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 242 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 243 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 244 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 245 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 246 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 247 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 248 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 249 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 250 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 251 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalReact::
# 252 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 253 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 254 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 255 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 256 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LeaveStarterSceneTrigger::
# 257 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 258 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 259 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FaceDown
# 260 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 261 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHeyDontGoAwayYet
# 262 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 263 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWalkUp
# 264 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 265 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 266 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 267 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 268 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWalkUp::
# 269 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 270 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 271 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 272 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerLeft::
# 273 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 274 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 1
# 275 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 276 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 277 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 278 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerMid::
# 279 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 280 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 2
# 281 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 282 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 283 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 284 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerRight::
# 285 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 286 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 3
# 287 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 288 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 289 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 290 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattle::
# 291 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 292 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 293 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 294 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 295 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 296 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 297 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLetsCheckOutMons
# 298 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 299 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FaceDown
# 300 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 301 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 0, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander
# 302 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur
# 303 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle
# 304 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 305 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 306 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ The scripts for the rival approaching the player for battle are a bit bloated because
# 307 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ both the player and rival can be in 3 different positions, so theres 9 different approaches
# 308 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ NOTE: Names below refer to the Rival's mon (e.g. for RivalBattleSquirtle, player has Charmander)
# 309 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 310 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle::
# 311 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleLeft
# 312 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleMid
# 313 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleRight
# 314 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 315 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 316 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleLeft::
# 317 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleLeft
# 318 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 319 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 320 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 321 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 322 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleMid::
# 323 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleMid
# 324 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 325 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 326 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 327 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 328 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleRight::
# 329 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleRight
# 330 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 331 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 332 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 333 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 334 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle::
# 335 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_SQUIRTLE, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 336 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 337 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 338 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 339 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleLeft::
# 340 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 341 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 342 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 343 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 344 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 345 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 346 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 347 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 348 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleMid::
# 349 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 350 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 351 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 352 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 353 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 354 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 355 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 356 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleRight::
# 357 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 358 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 359 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 360 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 361 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 362 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 363 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander::
# 364 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderLeft
# 365 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderMid
# 366 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderRight
# 367 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 368 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 369 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderLeft::
# 370 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderLeft
# 371 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 372 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 373 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 374 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 375 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderMid::
# 376 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderMid
# 377 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 378 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 379 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 380 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 381 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderRight::
# 382 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderRight
# 383 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 384 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 385 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 386 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 387 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander::
# 388 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_CHARMANDER, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 389 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 390 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 391 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 392 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderLeft::
# 393 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 394 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 395 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 396 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 397 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 398 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 399 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 400 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 401 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 402 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderMid::
# 403 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 404 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 405 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 406 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 407 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 408 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 409 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 410 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 411 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderRight::
# 412 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 413 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 414 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 415 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 416 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 417 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 418 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 419 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur::
# 420 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurLeft
# 421 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurMid
# 422 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurRight
# 423 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 424 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 425 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurLeft::
# 426 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurLeft
# 427 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 428 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 429 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 430 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 431 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurMid::
# 432 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurMid
# 433 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 434 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 435 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 436 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 437 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurRight::
# 438 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurRight
# 439 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 440 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 441 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 442 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 443 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur::
# 444 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_BULBASAUR, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 445 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 446 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 447 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 448 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurLeft::
# 449 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 450 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 451 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 452 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 453 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 454 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 455 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 456 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurMid::
# 457 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 458 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 459 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 460 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 461 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 462 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 463 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurRight::
# 464 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 465 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 466 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 467 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 468 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 469 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle::
# 470 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special HealPlayerParty
# 471 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoToughenMyMon
# 472 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 473 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 474 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleLeft
# 475 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleMid
# 476 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleRight
# 477 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_OAKS_LAB_RIVAL
# 478 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playse SE_EXIT
# 479 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 480 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4
# 481 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_BEAT_RIVAL_IN_OAKS_LAB
# 482 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 483 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 484 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 485 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleLeft::
# 486 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleLeft
# 487 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle
# 488 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_RIVAL
# 489 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 490 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 491 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleMid::
# 492 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleMid
# 493 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle
# 494 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_RIVAL
# 495 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 496 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 497 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleRight::
# 498 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleRight
# 499 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattleRight
# 500 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_RIVAL
# 501 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 502 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 503 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleLeft::
# 504 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 505 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 506 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 507 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 508 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 509 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 510 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 511 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 512 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 513 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleRight::
# 514 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 515 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 516 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 517 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 518 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 519 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 520 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 521 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 522 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 523 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleMid::
# 524 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 525 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 526 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 527 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 528 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 529 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 530 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 531 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 532 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 533 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 534 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle::
# 535 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 536 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 537 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 538 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 539 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 540 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 541 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 542 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattleRight::
# 543 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 544 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 545 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 546 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 547 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 548 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 549 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 550 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Rival::
# 551 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 552 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 553 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_RivalChoseStarter
# 554 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_RivalWaitingForStarter
# 555 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGrampsIsntAround
# 556 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 557 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 558 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 559 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWaitingForStarter::
# 560 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoChoosePlayer
# 561 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 562 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 563 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 564 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalChoseStarter::
# 565 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalMyMonLooksTougher
# 566 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 567 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 568 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 569 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ProfOak::
# 570 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 571 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 572 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set SHOWED_OAK_COMPLETE_DEX, PalletTown_ProfessorOaksLab_EventScript_OakJustShownCompleteDex
# 573 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 9, PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 574 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8, PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 575 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene
# 576 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 1, PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 577 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls
# 578 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 1, PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene
# 579 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4, PalletTown_ProfessorOaksLab_EventScript_OakBattleMonForItToGrow
# 580 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMon
# 581 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakWhichOneWillYouChoose
# 582 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 583 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 584 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 585 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakJustShownCompleteDex::
# 586 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 587 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 588 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 589 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 590 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMon::
# 591 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCanReachNextTownWithMon
# 592 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 593 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 594 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 595 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBattleMonForItToGrow::
# 596 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBattleMonForItToGrow
# 597 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 598 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 599 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 600 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene::
# 601 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveSomethingForMe
# 602 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 603 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 604 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_DeliveredOaksParcel
# 605 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 606 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 607 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 608 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeitem ITEM_OAKS_PARCEL
# 609 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCustomBallIOrdered
# 610 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 611 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGramps
# 612 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 613 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterNorth
# 614 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterSouth
# 615 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest
# 616 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest
# 617 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 618 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalWhatDidYouCallMeFor
# 619 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 620 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 621 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playse SE_PIN
# 622 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_ExclamationMark
# 623 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 624 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_Delay48
# 625 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 626 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalSouth
# 627 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalEast
# 628 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalWest
# 629 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalNorth
# 630 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveRequestForYouTwo
# 631 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 632 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskNorth
# 633 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskSouth
# 634 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskEast
# 635 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskWest
# 636 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakPokedexOnDesk
# 637 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 638 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 40
# 639 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakTakeTheseWithYou
# 640 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 641 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterUp
# 642 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 643 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_POKEDEX_1
# 644 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 10
# 645 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_POKEDEX_2
# 646 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 25
# 647 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth
# 648 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth
# 649 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast
# 650 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest
# 651 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 10
# 652 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 653 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 654 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedPokedexFromOak
# 655 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 656 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 657 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 658 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 659 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 660 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 1
# 661 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCatchMonsForDataTakeThese
# 662 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
# 663 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakExplainCatching
# 664 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_OAK, 1
# 665 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCompleteMonGuideWasMyDream
# 666 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLeaveItToMeGramps
# 667 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerNorth
# 668 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerSouth
# 669 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest
# 670 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest
# 671 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalTellSisNotToGiveYouMap
# 672 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 673 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 674 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth
# 675 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 676 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 677 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 678 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_OAKS_LAB_RIVAL
# 679 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 680 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6
# 681 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 2
# 682 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1
# 683 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1
# 684 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 1
# 685 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 686 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 687 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 688 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth::
# 689 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 690 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 691 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 692 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 693 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth::
# 694 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOverSouth
# 695 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 696 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 697 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 698 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast::
# 699 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 700 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerFaceOakForDexEast
# 701 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 702 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 703 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 704 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest::
# 705 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 706 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 707 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 708 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 709 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerFaceOakForDexEast::
# 710 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 711 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 712 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 713 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 714 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 715 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver::
# 716 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 717 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 718 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 719 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 720 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesOverSouth::
# 721 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 722 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 723 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 724 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 725 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskNorth::
# 726 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 727 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 728 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 729 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 730 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskSouth::
# 731 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDeskSouth
# 732 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 733 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 734 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 735 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 736 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 737 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskEast::
# 738 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 739 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast
# 740 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 741 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 742 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 743 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskWest::
# 744 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 745 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 746 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 747 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 748 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast::
# 749 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 750 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 751 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 752 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 753 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 754 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk::
# 755 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 756 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 757 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 758 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 759 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 760 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk::
# 761 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 762 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 763 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 764 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 765 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 766 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 767 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakWalkToDeskSouth::
# 768 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 769 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 770 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 771 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 772 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 773 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 774 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 775 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls::
# 776 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8004, 0
# 777 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	specialvar VAR_RESULT, GetPokedexCount
# 778 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 779 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 780 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 781 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 782 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_0x8009, 1, PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls  @ Player only has starter
# 783 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 784 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 785 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 786 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RatePokedex::
# 787 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 788 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_OAK_SAW_DEX_COMPLETION, PalletTown_ProfessorOaksLab_EventScript_DexCompleted
# 789 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 790 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 791 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 792 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexCompleted::
# 793 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 794 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 40
# 795 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PokedexRating_Text_Wroooaaarrr
# 796 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 797 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakExcitedNorth
# 798 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakExcitedSouth
# 799 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakExcitedEast
# 800 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakExcitedWest
# 801 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 802 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 803 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 804 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 70
# 805 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 806 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag SHOWED_OAK_COMPLETE_DEX
# 807 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 808 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 809 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 810 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedNorth::
# 811 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedNorth
# 812 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 813 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 814 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 815 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedSouth::
# 816 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedSouth
# 817 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 818 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 819 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 820 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedEast::
# 821 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedEast
# 822 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 823 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 824 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 825 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedWest::
# 826 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedWest
# 827 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 828 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 829 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 830 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedNorth::
# 831 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 832 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_down
# 833 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 834 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 835 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_down
# 836 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 837 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 838 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 839 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedSouth::
# 840 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 841 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_up
# 842 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 843 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 844 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_up
# 845 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 846 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 847 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 848 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedEast::
# 849 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 850 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_left
# 851 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 852 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 853 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_left
# 854 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 855 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 856 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 857 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedWest::
# 858 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 859 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_right
# 860 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 861 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 862 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_right
# 863 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 864 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 865 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 866 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ Unused
# 867 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_Search:
# 868 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 869 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 870 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 871 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 872 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 873 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 874 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 875 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 876 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 877 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 878 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 879 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 880 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 881 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 882 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 883 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 884 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 885 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 886 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 887 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 888 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 889 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 890 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 891 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 892 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 893 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 894 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ Unused
# 895 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_VerticalPacing:
# 896 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 897 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 898 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 899 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 900 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 901 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 902 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 903 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 904 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 905 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 906 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene::
# 907 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 908 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 909 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_lt VAR_0x8009, 60, PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene
# 910 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_unset FLAG_WORLD_MAP_ONE_ISLAND, PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene
# 911 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 912 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakFavorToAskYouPlayer
# 913 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene
# 914 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 915 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 916 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene::
# 917 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 918 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 919 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 920 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls::
# 921 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	
# 922 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	
# 923 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_OAK_SKIP_22_RIVAL_CHECK, PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 924 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL, PalletTown_ProfessorOaksLab_EventScript_PlayerAlreadyGotBalls
# 925 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	checkitem ITEM_POKE_BALL
# 926 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls
# 927 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 928 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 929 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 930 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls::
# 931 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ROUTE22, 2, PalletTown_ProfessorOaksLab_EventScript_GivePlayerMoreBalls
# 932 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 933 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 934 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 935 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_GivePlayerMoreBalls::
# 936 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakAddedNothingToPokedex
# 937 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
# 938 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL
# 939 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 940 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 941 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 942 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait::
# 943 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakMonsAroundWorldWait
# 944 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 945 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 946 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 947 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerAlreadyGotBalls::
# 948 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakComeSeeMeSometime
# 949 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 950 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 951 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 952 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterNorth::
# 953 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 5, 10
# 954 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 955 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth
# 956 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 957 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 958 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 959 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 960 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest::
# 961 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 962 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 963 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 964 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 965 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 966 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 967 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 968 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 969 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterSouth::
# 970 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 971 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 972 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 973 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 974 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 975 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 976 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 977 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalSouth::
# 978 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 979 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 980 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 981 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 982 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 983 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 984 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 985 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalWest::
# 986 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 987 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 988 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 989 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 990 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 991 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 992 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 993 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 994 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalEast::
# 995 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 996 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 997 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 998 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 999 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1000 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1001 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1002 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1003 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerNorth::
# 1004 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_FacePlayer
# 1005 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1006 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1007 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1008 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1009 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerSouth::
# 1010 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 1011 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1012 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1013 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1014 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1015 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest::
# 1016 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_FacePlayer
# 1017 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1018 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1019 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1020 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1021 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth::
# 1022 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 1023 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExit
# 1024 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1025 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1026 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1027 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExit::
# 1028 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExit
# 1029 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1030 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1031 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1032 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalNorth::
# 1033 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1034 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1035 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1036 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1037 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest::
# 1038 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 1039 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 1040 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1041 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1042 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth::
# 1043 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 1044 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1045 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1046 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1047 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1048 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1049 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 1050 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 1051 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1052 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1053 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalEnter::
# 1054 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1055 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1056 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1057 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1058 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1059 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1060 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1061 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1062 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExit::
# 1063 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1064 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1065 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1066 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1067 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1068 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1069 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1070 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1071 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall::
# 1072 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1073 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1074 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_NUM, 0
# 1075 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_BULBASAUR
# 1076 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_CHARMANDER
# 1077 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_ID, LOCALID_CHARMANDER_BALL
# 1078 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1079 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1080 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1081 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1082 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1083 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1084 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice::
# 1085 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FaceRight
# 1086 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1087 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	showmonpic PLAYER_STARTER_SPECIES, 10, 3
# 1088 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 1089 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 0, PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur
# 1090 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 1, PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle
# 1091 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander
# 1092 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1093 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1094 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur::
# 1095 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingBulbasaur, MSGBOX_YESNO
# 1096 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1097 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
# 1098 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1099 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1100 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle::
# 1101 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingSquirtle, MSGBOX_YESNO
# 1102 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1103 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
# 1104 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1105 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1106 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander::
# 1107 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingCharmander, MSGBOX_YESNO
# 1108 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1109 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
# 1110 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1111 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1112 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter::
# 1113 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	hidemonpic
# 1114 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1115 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1116 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1117 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ChoseStarter::
# 1118 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	hidemonpic
# 1119 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 1120 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThisMonIsEnergetic
# 1121 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 1122 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1123 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
# 1124 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	givemon PLAYER_STARTER_SPECIES, 5
# 1125 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_STARTER_MON, PLAYER_STARTER_NUM
# 1126 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	bufferspeciesname STR_VAR_1, PLAYER_STARTER_SPECIES
# 1127 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedMonFromOak
# 1128 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 1129 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 1130 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 1131 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 1132 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_GiveNicknameToStarter
# 1133 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter
# 1134 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1135 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1136 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
EventScript_GiveNicknameToStarter::
# 1137 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8004, 0
# 1138 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_ChangePokemonNickname
# 1139 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter
# 1140 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1141 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1142 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter::
# 1143 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 1144 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 0, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToCharmander
# 1145 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 1, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBulbasaur
# 1146 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 2, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToSquirtle
# 1147 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1148 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1149 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWalksToCharmander::
# 1150 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToCharmander
# 1151 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1152 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
# 1153 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1154 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1155 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWalksToSquirtle::
# 1156 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToSquirtle
# 1157 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1158 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
# 1159 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1160 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1161 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBulbasaur::
# 1162 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToBulbasaur
# 1163 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1164 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
# 1165 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1166 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1167 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter::
# 1168 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 1169 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalIllTakeThisOneThen
# 1170 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject RIVAL_STARTER_ID
# 1171 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 1172 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	bufferspeciesname STR_VAR_1, RIVAL_STARTER_SPECIES
# 1173 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_RivalReceivedMonFromOak
# 1174 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 1175 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 1176 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 1177 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
# 1178 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_set FLAG_OPENED_START_MENU, PalletTown_ProfessorOaksLab_EventScript_ReadyEndSignLadyScene
# 1179 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1180 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1181 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1182 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyEndSignLadyScene::
# 1183 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 1184 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1185 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1186 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToCharmander::
# 1187 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1188 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1189 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1190 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1191 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1192 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1193 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1194 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1195 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1196 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1197 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToSquirtle::
# 1198 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1199 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1200 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1201 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1202 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1203 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 1204 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1205 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1206 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToBulbasaur::
# 1207 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1208 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1209 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1210 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1211 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 1212 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1213 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1214 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SquirtleBall::
# 1215 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1216 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1217 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_NUM, 1
# 1218 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_SQUIRTLE
# 1219 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_BULBASAUR
# 1220 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_ID, LOCALID_BULBASAUR_BALL
# 1221 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1222 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1223 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1224 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1225 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1226 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1227 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_CharmanderBall::
# 1228 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1229 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1230 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_NUM, 2
# 1231 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_CHARMANDER
# 1232 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_SQUIRTLE
# 1233 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_ID, LOCALID_SQUIRTLE_BALL
# 1234 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1235 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1236 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1237 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1238 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1239 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1240 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LastPokeBall::
# 1241 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OaksLastMon
# 1242 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1243 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1244 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1245 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide1::
# 1246 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1247 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1248 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide1GameClear
# 1249 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
# 1250 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1251 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1252 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1253 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide1GameClear::
# 1254 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_OAK, 5
# 1255 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsGoingToHaveRadioShow
# 1256 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1257 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1258 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1259 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide2::
# 1260 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1261 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1262 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide2GameClear
# 1263 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
# 1264 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1265 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1266 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1267 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide2GameClear::
# 1268 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_DAISY, 0
# 1269 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_DaisyWillGroomMons
# 1270 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1271 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1272 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1273 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide3::
# 1274 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1275 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1276 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_OAK, 2
# 1277 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsAuthorityOnMons
# 1278 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1279 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1280 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1281 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Pokedex::
# 1282 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_BlankEncyclopedia, MSGBOX_NPC
# 1283 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1284 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1285 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Computer::
# 1286 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_EmailMessage, MSGBOX_SIGN
# 1287 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1288 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1289 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LeftSign::
# 1290 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_PressStartToOpenMenu, MSGBOX_SIGN
# 1291 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1292 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1293 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RightSign::
# 1294 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 1295 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, PalletTown_ProfessorOaksLab_EventScript_RightSignAlt
# 1296 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_SaveOptionInMenu
# 1297 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 1298 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1299 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1300 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RightSignAlt::
# 1301 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_AllMonTypesHaveStrongAndWeakPoints
# 1302 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 1303 "data//maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
