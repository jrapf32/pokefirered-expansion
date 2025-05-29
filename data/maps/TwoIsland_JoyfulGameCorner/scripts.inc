# 1 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"

# 2 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
TwoIsland_JoyfulGameCorner_MapScripts::
# 3 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TwoIsland_JoyfulGameCorner_OnTransition
# 4 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, TwoIsland_JoyfulGameCorner_OnWarp
# 5 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwoIsland_JoyfulGameCorner_OnFrame
# 6 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CableClub_OnLoad
# 7 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	.byte 0
# 8 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"

# 9 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
TwoIsland_JoyfulGameCorner_OnTransition::
# 10 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	call_if_set FLAG_GOT_MOON_STONE_FROM_JOYFUL_GAME_CORNER, TwoIsland_JoyfulGameCorner_EventScript_SetLostelleReturnedPos
# 11 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	end
# 12 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"

# 13 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_SetLostelleReturnedPos::
# 14 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	setobjectxyperm LOCALID_JOYFUL_GAME_CORNER_DADDY, 6, 2
# 15 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	setobjectmovementtype LOCALID_JOYFUL_GAME_CORNER_DADDY, MOVEMENT_TYPE_FACE_DOWN
# 16 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	setobjectmovementtype LOCALID_JOYFUL_GAME_CORNER_LOSTELLE, MOVEMENT_TYPE_LOOK_AROUND
# 17 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 4
# 18 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	return
# 19 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"

# 20 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
TwoIsland_JoyfulGameCorner_OnWarp::
# 21 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	map_script_2 VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 2, TwoIsland_JoyfulGameCorner_EventScript_TurnPlayerNorth
# 22 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MINIGAME, EventScript_CheckTurnAttendant
# 23 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	.2byte 0
# 24 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"

# 25 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_TurnPlayerNorth::
# 26 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 27 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	end
# 28 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"

# 29 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
TwoIsland_JoyfulGameCorner_OnFrame::
# 30 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	map_script_2 VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 0, TwoIsland_JoyfulGameCorner_EventScript_HelpFindLostelleScene
# 31 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	map_script_2 VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 2, TwoIsland_JoyfulGameCorner_EventScript_FoundLostelleScene
# 32 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MINIGAME, CableClub_EventScript_ExitMinigameRoom
# 33 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	.2byte 0
# 34 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"

# 35 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_FoundLostelleScene::
# 36 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	lockall
# 37 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 38 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_YouRescuedLostelle
# 39 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 40 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	special BufferBigGuyOrBigGirlString
# 41 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_LostelleItsOkayDaddy
# 42 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	closemessage
# 43 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_LOSTELLE, Common_Movement_WalkInPlaceFasterDown
# 44 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	waitmovement 0
# 45 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 3
# 46 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	releaseall
# 47 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	end
# 48 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"

# 49 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_HelpFindLostelleScene::
# 50 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	lockall
# 51 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 52 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, TwoIsland_JoyfulGameCorner_Movement_DaddyPacing
# 53 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	waitmovement 0
# 54 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_WhereHasLostelleGottenTo
# 55 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	closemessage
# 56 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, Common_Movement_WalkInPlaceFasterDown
# 57 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	waitmovement 0
# 58 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	playse SE_PIN
# 59 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, Common_Movement_ExclamationMark
# 60 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	waitmovement 0
# 61 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, Common_Movement_Delay48
# 62 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	waitmovement 0
# 63 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, TwoIsland_JoyfulGameCorner_Movement_DaddyApproachPlayer
# 64 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	waitmovement 0
# 65 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 66 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	waitmovement 0
# 67 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_PleaseHelpFindLostelle
# 68 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	closemessage
# 69 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	playse SE_RS_DOOR
# 70 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	waitse
# 71 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	applymovement LOCALID_PLAYER, TwoIsland_JoyfulGameCorner_Movement_PlayerFaceDaddy
# 72 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	waitmovement 0
# 73 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	playbgm MUS_ENCOUNTER_BOY, 0
# 74 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	addobject LOCALID_JOYFUL_GAME_CORNER_BIKER
# 75 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_BIKER, TwoIsland_JoyfulGameCorner_Movement_BikerLookAround
# 76 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	waitmovement 0
# 77 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_IsThisOnlyThreeIsland
# 78 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_BIKER, Common_Movement_WalkInPlaceFasterRight
# 79 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	waitmovement 0
# 80 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_ThisIsTwoIslandMoveIt
# 81 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_TheseIslandsAreConfusing
# 82 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	closemessage
# 83 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_BIKER, Common_Movement_WalkInPlaceFasterDown
# 84 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	waitmovement 0
# 85 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	playse SE_EXIT
# 86 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	removeobject LOCALID_JOYFUL_GAME_CORNER_BIKER
# 87 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	fadedefaultbgm
# 88 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	delay 60
# 89 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_PunkScuffedUpMyFloor
# 90 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	clearflag FLAG_HIDE_THREE_ISLAND_LONE_BIKER
# 91 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	setvar VAR_MAP_SCENE_THREE_ISLAND, 2
# 92 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 1
# 93 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	releaseall
# 94 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	end
# 95 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"

# 96 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
TwoIsland_JoyfulGameCorner_Movement_DaddyPacing::
# 97 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	walk_left
# 98 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	walk_right
# 99 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	walk_right
# 100 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	delay_8
# 101 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	walk_in_place_faster_up
# 102 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	delay_16
# 103 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	step_end
# 104 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"

# 105 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
TwoIsland_JoyfulGameCorner_Movement_DaddyApproachPlayer::
# 106 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	walk_down
# 107 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	walk_down
# 108 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	walk_down
# 109 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	walk_in_place_faster_left
# 110 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	step_end
# 111 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"

# 112 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
TwoIsland_JoyfulGameCorner_Movement_PlayerFaceDaddy::
# 113 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	walk_left
# 114 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	walk_in_place_faster_right
# 115 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	step_end
# 116 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"

# 117 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
TwoIsland_JoyfulGameCorner_Movement_BikerLookAround::
# 118 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	walk_in_place_faster_left
# 119 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	delay_8
# 120 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	walk_in_place_faster_right
# 121 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	delay_8
# 122 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	walk_in_place_faster_up
# 123 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	step_end
# 124 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"

# 125 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_InfoMan::
# 126 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	lock
# 127 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	faceplayer
# 128 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 4, JoyfulGameCorner_EventScript_InfoMan2
# 129 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	goto_if_set FLAG_RESCUED_LOSTELLE, TwoIsland_JoyfulGameCorner_EventScript_GetGamesGoingSoon
# 130 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_NotRunningAnyGamesToday
# 131 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	release
# 132 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	end
# 133 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"

# 134 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_GetGamesGoingSoon::
# 135 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_GetGamesGoingSoon
# 136 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	release
# 137 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	end
# 138 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"

# 139 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
@ Only referred to as Lostelles Daddy in text
# 140 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy::
# 141 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	lock
# 142 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	faceplayer
# 143 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 4, JoyfulGameCorner_EventScript_MinigameAttendant
# 144 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	goto_if_set FLAG_GOT_MOON_STONE_FROM_JOYFUL_GAME_CORNER, TwoIsland_JoyfulGameCorner_EventScript_GetGameCornerRunning
# 145 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 3, TwoIsland_JoyfulGameCorner_EventScript_GiveDaddyMeteorite
# 146 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_PleaseGoToThreeIsland
# 147 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	release
# 148 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	end
# 149 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"

# 150 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_GiveDaddyMeteorite::
# 151 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_JOYFUL_GAME_CORNER_MOON_STONE, TwoIsland_JoyfulGameCorner_EventScript_ReceiveMoonStone
# 152 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_ThisIsForMe
# 153 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 2
# 154 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 155 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 156 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	message TwoIsland_JoyfulGameCorner_Text_HandedMeteoriteToLostellesDaddy
# 157 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	waitmessage
# 158 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	waitfanfare
# 159 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	call EventScript_RestorePrevTextColor
# 160 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	removeitem ITEM_METEORITE
# 161 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_OhThisIsFromBill
# 162 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	goto TwoIsland_JoyfulGameCorner_EventScript_ReceiveMoonStone
# 163 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	end
# 164 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"

# 165 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_ReceiveMoonStone::
# 166 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	checkitemspace ITEM_MOON_STONE
# 167 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TwoIsland_JoyfulGameCorner_EventScript_NoRoomForMoonStone
# 168 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	additem ITEM_MOON_STONE
# 169 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	setflag FLAG_GOT_MOON_STONE_FROM_JOYFUL_GAME_CORNER
# 170 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	msgreceiveditem TwoIsland_JoyfulGameCorner_Text_ReceivedMoonStoneFromLostellesDaddy, ITEM_MOON_STONE
# 171 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	release
# 172 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	end
# 173 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"

# 174 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_GetGameCornerRunning::
# 175 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_IllGetGameCornerRunning
# 176 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	release
# 177 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	end
# 178 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"

# 179 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_NoRoomForMoonStone::
# 180 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	setflag FLAG_NO_ROOM_FOR_JOYFUL_GAME_CORNER_MOON_STONE
# 181 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_NotGoingToFitInBag
# 182 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	release
# 183 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	end
# 184 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"

# 185 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_Lostelle::
# 186 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	lock
# 187 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	faceplayer
# 188 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_PleaseShowMeYouBeingCool
# 189 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	release
# 190 "data//maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	end
