# 1 "data//maps/CinnabarIsland/scripts.pory"

# 2 "data//maps/CinnabarIsland/scripts.pory"

# 3 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_MapScripts::
# 4 "data//maps/CinnabarIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CinnabarIsland_OnTransition
# 5 "data//maps/CinnabarIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CinnabarIsland_OnFrame
# 6 "data//maps/CinnabarIsland/scripts.pory"
	.byte 0
# 7 "data//maps/CinnabarIsland/scripts.pory"

# 8 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_OnTransition::
# 9 "data//maps/CinnabarIsland/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_CINNABAR_ISLAND
# 10 "data//maps/CinnabarIsland/scripts.pory"
	call CinnabarIsland_EventScript_CheckUnlockGym
# 11 "data//maps/CinnabarIsland/scripts.pory"
	call_if_eq VAR_MAP_SCENE_CINNABAR_ISLAND, 1, CinnabarIsland_EventScript_ReadyObjectsSailToOneIsland
# 12 "data//maps/CinnabarIsland/scripts.pory"
	call_if_eq VAR_MAP_SCENE_CINNABAR_ISLAND, 3, CinnabarIsland_EventScript_ReadyObjectsReturnFromSeviiIslands
# 13 "data//maps/CinnabarIsland/scripts.pory"
	call_if_eq VAR_MAP_SCENE_CINNABAR_ISLAND_2, 1, CinnabarIsland_EventScript_ReadyObjectsSailToOneIslandFromPokeCenter
# 14 "data//maps/CinnabarIsland/scripts.pory"
	end
# 15 "data//maps/CinnabarIsland/scripts.pory"

# 16 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_ReadyObjectsSailToOneIslandFromPokeCenter::
# 17 "data//maps/CinnabarIsland/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 18 "data//maps/CinnabarIsland/scripts.pory"
	setflag FLAG_TEMP_2
# 19 "data//maps/CinnabarIsland/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_BILL, 15, 12
# 20 "data//maps/CinnabarIsland/scripts.pory"
	setobjectmovementtype LOCALID_CINNABAR_BILL, MOVEMENT_TYPE_FACE_LEFT
# 21 "data//maps/CinnabarIsland/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_SEAGALLOP, 30, 12
# 22 "data//maps/CinnabarIsland/scripts.pory"
	return
# 23 "data//maps/CinnabarIsland/scripts.pory"

# 24 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_ReadyObjectsSailToOneIsland::
# 25 "data//maps/CinnabarIsland/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 26 "data//maps/CinnabarIsland/scripts.pory"
	goto_if_ge VAR_0x8004, 18, CinnabarIsland_EventScript_MoveSeagallopDown
# 27 "data//maps/CinnabarIsland/scripts.pory"
	setflag FLAG_TEMP_2
# 28 "data//maps/CinnabarIsland/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_BILL, 18, 12
# 29 "data//maps/CinnabarIsland/scripts.pory"
	setobjectmovementtype LOCALID_CINNABAR_BILL, MOVEMENT_TYPE_FACE_UP
# 30 "data//maps/CinnabarIsland/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_SEAGALLOP, 30, 12
# 31 "data//maps/CinnabarIsland/scripts.pory"
	return
# 32 "data//maps/CinnabarIsland/scripts.pory"

# 33 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_MoveSeagallopDown::
# 34 "data//maps/CinnabarIsland/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_SEAGALLOP, 30, 8
# 35 "data//maps/CinnabarIsland/scripts.pory"
	return
# 36 "data//maps/CinnabarIsland/scripts.pory"

# 37 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_ReadyObjectsReturnFromSeviiIslands::
# 38 "data//maps/CinnabarIsland/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_BILL, 21, 8
# 39 "data//maps/CinnabarIsland/scripts.pory"
	setobjectmovementtype LOCALID_CINNABAR_BILL, MOVEMENT_TYPE_FACE_UP
# 40 "data//maps/CinnabarIsland/scripts.pory"
	return
# 41 "data//maps/CinnabarIsland/scripts.pory"

# 42 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_CheckUnlockGym::
# 43 "data//maps/CinnabarIsland/scripts.pory"
	goto_if_set FLAG_HIDE_POKEMON_MANSION_B1F_SECRET_KEY, CinnabarIsland_EventScript_UnlockGym
# 44 "data//maps/CinnabarIsland/scripts.pory"
	return
# 45 "data//maps/CinnabarIsland/scripts.pory"

# 46 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_UnlockGym::
# 47 "data//maps/CinnabarIsland/scripts.pory"
	setvar VAR_TEMP_1, 1
# 48 "data//maps/CinnabarIsland/scripts.pory"
	return
# 49 "data//maps/CinnabarIsland/scripts.pory"

# 50 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_OnFrame::
# 51 "data//maps/CinnabarIsland/scripts.pory"
	map_script_2 VAR_MAP_SCENE_CINNABAR_ISLAND_2, 1, CinnabarIsland_EventScript_ExitPokeCenterForOneIsland
# 52 "data//maps/CinnabarIsland/scripts.pory"
	map_script_2 VAR_MAP_SCENE_CINNABAR_ISLAND, 1, CinnabarIsland_EventScript_BillScene
# 53 "data//maps/CinnabarIsland/scripts.pory"
	map_script_2 VAR_MAP_SCENE_CINNABAR_ISLAND, 3, CinnabarIsland_EventScript_ReturnFromSeviiIslands
# 54 "data//maps/CinnabarIsland/scripts.pory"
	.2byte 0
# 55 "data//maps/CinnabarIsland/scripts.pory"

# 56 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_ExitPokeCenterForOneIsland::
# 57 "data//maps/CinnabarIsland/scripts.pory"
	lockall
# 58 "data//maps/CinnabarIsland/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 59 "data//maps/CinnabarIsland/scripts.pory"
	savebgm MUS_DUMMY
# 60 "data//maps/CinnabarIsland/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 61 "data//maps/CinnabarIsland/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_2, 2
# 62 "data//maps/CinnabarIsland/scripts.pory"
	delay 20
# 63 "data//maps/CinnabarIsland/scripts.pory"
	call CinnabarIsland_EventScript_SailToOneIsland
# 64 "data//maps/CinnabarIsland/scripts.pory"
	releaseall
# 65 "data//maps/CinnabarIsland/scripts.pory"
	end
# 66 "data//maps/CinnabarIsland/scripts.pory"

# 67 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_ReturnFromSeviiIslands::
# 68 "data//maps/CinnabarIsland/scripts.pory"
	lockall
# 69 "data//maps/CinnabarIsland/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 70 "data//maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_IfYouHaveTriPassYouCanGoAgain
# 71 "data//maps/CinnabarIsland/scripts.pory"
	closemessage
# 72 "data//maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillExit
# 73 "data//maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 74 "data//maps/CinnabarIsland/scripts.pory"
	removeobject LOCALID_CINNABAR_BILL
# 75 "data//maps/CinnabarIsland/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 4
# 76 "data//maps/CinnabarIsland/scripts.pory"
	setflag FLAG_HIDE_TWO_ISLAND_GAME_CORNER_LOSTELLE
# 77 "data//maps/CinnabarIsland/scripts.pory"
	clearflag FLAG_HIDE_LOSTELLE_IN_HER_HOME
# 78 "data//maps/CinnabarIsland/scripts.pory"
	releaseall
# 79 "data//maps/CinnabarIsland/scripts.pory"
	end
# 80 "data//maps/CinnabarIsland/scripts.pory"

# 81 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillExit::
# 82 "data//maps/CinnabarIsland/scripts.pory"
	walk_down
# 83 "data//maps/CinnabarIsland/scripts.pory"
	walk_down
# 84 "data//maps/CinnabarIsland/scripts.pory"
	walk_down
# 85 "data//maps/CinnabarIsland/scripts.pory"
	walk_down
# 86 "data//maps/CinnabarIsland/scripts.pory"
	walk_down
# 87 "data//maps/CinnabarIsland/scripts.pory"
	walk_down
# 88 "data//maps/CinnabarIsland/scripts.pory"
	step_end
# 89 "data//maps/CinnabarIsland/scripts.pory"

# 90 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BillScene::
# 91 "data//maps/CinnabarIsland/scripts.pory"
	lockall
# 92 "data//maps/CinnabarIsland/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 93 "data//maps/CinnabarIsland/scripts.pory"
	call_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_BillFacePlayer1
# 94 "data//maps/CinnabarIsland/scripts.pory"
	call_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BillFacePlayer2
# 95 "data//maps/CinnabarIsland/scripts.pory"
	playse SE_PIN
# 96 "data//maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, Common_Movement_ExclamationMark
# 97 "data//maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 98 "data//maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, Common_Movement_Delay48
# 99 "data//maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 100 "data//maps/CinnabarIsland/scripts.pory"
	call_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_BillApproachPlayer1
# 101 "data//maps/CinnabarIsland/scripts.pory"
	call_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BillApproachPlayer2
# 102 "data//maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_HeyIfItIsntPlayer
# 103 "data//maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_ComeWithMeToOneIsland, MSGBOX_YESNO
# 104 "data//maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_EventScript_AgreeSailToOneIsland
# 105 "data//maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_EventScript_DeclineSailToOneIsland
# 106 "data//maps/CinnabarIsland/scripts.pory"
	end
# 107 "data//maps/CinnabarIsland/scripts.pory"

# 108 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BillFacePlayer1::
# 109 "data//maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, Common_Movement_WalkInPlaceFasterUp
# 110 "data//maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 111 "data//maps/CinnabarIsland/scripts.pory"
	return
# 112 "data//maps/CinnabarIsland/scripts.pory"

# 113 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BillFacePlayer2::
# 114 "data//maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, Common_Movement_WalkInPlaceFasterLeft
# 115 "data//maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 116 "data//maps/CinnabarIsland/scripts.pory"
	return
# 117 "data//maps/CinnabarIsland/scripts.pory"

# 118 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BillApproachPlayer1::
# 119 "data//maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillApproachPlayer1
# 120 "data//maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 121 "data//maps/CinnabarIsland/scripts.pory"
	return
# 122 "data//maps/CinnabarIsland/scripts.pory"

# 123 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BillApproachPlayer2::
# 124 "data//maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillApproachPlayer2
# 125 "data//maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 126 "data//maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 127 "data//maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 128 "data//maps/CinnabarIsland/scripts.pory"
	return
# 129 "data//maps/CinnabarIsland/scripts.pory"

# 130 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_AgreeSailToOneIsland::
# 131 "data//maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_AllRightLetsGo
# 132 "data//maps/CinnabarIsland/scripts.pory"
	closemessage
# 133 "data//maps/CinnabarIsland/scripts.pory"
	call CinnabarIsland_EventScript_SailToOneIsland
# 134 "data//maps/CinnabarIsland/scripts.pory"
	releaseall
# 135 "data//maps/CinnabarIsland/scripts.pory"
	end
# 136 "data//maps/CinnabarIsland/scripts.pory"

# 137 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_DeclineSailToOneIsland::
# 138 "data//maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_IllBeWaitingInPokeCenter
# 139 "data//maps/CinnabarIsland/scripts.pory"
	closemessage
# 140 "data//maps/CinnabarIsland/scripts.pory"
	call_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_BillExitToPokeCenter
# 141 "data//maps/CinnabarIsland/scripts.pory"
	call_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BillReturnToPokeCenter
# 142 "data//maps/CinnabarIsland/scripts.pory"
	removeobject LOCALID_CINNABAR_BILL
# 143 "data//maps/CinnabarIsland/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 2
# 144 "data//maps/CinnabarIsland/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_POKECENTER_BILL
# 145 "data//maps/CinnabarIsland/scripts.pory"
	releaseall
# 146 "data//maps/CinnabarIsland/scripts.pory"
	end
# 147 "data//maps/CinnabarIsland/scripts.pory"

# 148 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BillExitToPokeCenter::
# 149 "data//maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillExitToPokeCenter
# 150 "data//maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 151 "data//maps/CinnabarIsland/scripts.pory"
	return
# 152 "data//maps/CinnabarIsland/scripts.pory"

# 153 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillExitToPokeCenter::
# 154 "data//maps/CinnabarIsland/scripts.pory"
	walk_right
# 155 "data//maps/CinnabarIsland/scripts.pory"
	walk_down
# 156 "data//maps/CinnabarIsland/scripts.pory"
	walk_down
# 157 "data//maps/CinnabarIsland/scripts.pory"
	walk_down
# 158 "data//maps/CinnabarIsland/scripts.pory"
	walk_down
# 159 "data//maps/CinnabarIsland/scripts.pory"
	walk_down
# 160 "data//maps/CinnabarIsland/scripts.pory"
	walk_down
# 161 "data//maps/CinnabarIsland/scripts.pory"
	step_end
# 162 "data//maps/CinnabarIsland/scripts.pory"

# 163 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BillReturnToPokeCenter::
# 164 "data//maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Movement_PlayerWatchBillExit
# 165 "data//maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillApproachDoor
# 166 "data//maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 167 "data//maps/CinnabarIsland/scripts.pory"
	opendoor 14, 11
# 168 "data//maps/CinnabarIsland/scripts.pory"
	waitdooranim
# 169 "data//maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillReEnterPokeCenter
# 170 "data//maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 171 "data//maps/CinnabarIsland/scripts.pory"
	closedoor 14, 11
# 172 "data//maps/CinnabarIsland/scripts.pory"
	waitdooranim
# 173 "data//maps/CinnabarIsland/scripts.pory"
	return
# 174 "data//maps/CinnabarIsland/scripts.pory"

# 175 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_PlayerWatchBillExit::
# 176 "data//maps/CinnabarIsland/scripts.pory"
	walk_left
# 177 "data//maps/CinnabarIsland/scripts.pory"
	walk_in_place_faster_right
# 178 "data//maps/CinnabarIsland/scripts.pory"
	step_end
# 179 "data//maps/CinnabarIsland/scripts.pory"

# 180 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillApproachDoor::
# 181 "data//maps/CinnabarIsland/scripts.pory"
	delay_16
# 182 "data//maps/CinnabarIsland/scripts.pory"
	walk_left
# 183 "data//maps/CinnabarIsland/scripts.pory"
	walk_in_place_faster_up
# 184 "data//maps/CinnabarIsland/scripts.pory"
	step_end
# 185 "data//maps/CinnabarIsland/scripts.pory"

# 186 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillReEnterPokeCenter::
# 187 "data//maps/CinnabarIsland/scripts.pory"
	walk_up
# 188 "data//maps/CinnabarIsland/scripts.pory"
	delay_4
# 189 "data//maps/CinnabarIsland/scripts.pory"
	set_invisible
# 190 "data//maps/CinnabarIsland/scripts.pory"
	step_end
# 191 "data//maps/CinnabarIsland/scripts.pory"

# 192 "data//maps/CinnabarIsland/scripts.pory"
@ Can be triggered outside, or after talking to Bill in the poke center
# 193 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_SailToOneIsland::
# 194 "data//maps/CinnabarIsland/scripts.pory"
	call_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_ApproachShore
# 195 "data//maps/CinnabarIsland/scripts.pory"
	addobject LOCALID_CINNABAR_SEAGALLOP
# 196 "data//maps/CinnabarIsland/scripts.pory"
	call_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_BoatArrive
# 197 "data//maps/CinnabarIsland/scripts.pory"
	call_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BoatArriveExitedPokeCenter
# 198 "data//maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_MyPalsBoatArrived
# 199 "data//maps/CinnabarIsland/scripts.pory"
	closemessage
# 200 "data//maps/CinnabarIsland/scripts.pory"
	call_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_BoardBoat
# 201 "data//maps/CinnabarIsland/scripts.pory"
	call_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BoardBoatExitedPokeCenter
# 202 "data//maps/CinnabarIsland/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 2
# 203 "data//maps/CinnabarIsland/scripts.pory"
	removeobject LOCALID_CINNABAR_BILL
# 204 "data//maps/CinnabarIsland/scripts.pory"
	delay 40
# 205 "data//maps/CinnabarIsland/scripts.pory"
	setflag FLAG_HIDE_CINNABAR_SEAGALLOP
# 206 "data//maps/CinnabarIsland/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 1
# 207 "data//maps/CinnabarIsland/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_CINNABAR_ISLAND
# 208 "data//maps/CinnabarIsland/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_ONE_ISLAND
# 209 "data//maps/CinnabarIsland/scripts.pory"
	goto EventScript_SetSail
# 210 "data//maps/CinnabarIsland/scripts.pory"
	end
# 211 "data//maps/CinnabarIsland/scripts.pory"

# 212 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_ApproachShore::
# 213 "data//maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_ApproachShore
# 214 "data//maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Movement_ApproachShore
# 215 "data//maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 216 "data//maps/CinnabarIsland/scripts.pory"
	return
# 217 "data//maps/CinnabarIsland/scripts.pory"

# 218 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BoatArrive::
# 219 "data//maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillFaceBoat
# 220 "data//maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_CINNABAR_SEAGALLOP, CinnabarIsland_Movement_BoatArrive
# 221 "data//maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 222 "data//maps/CinnabarIsland/scripts.pory"
	return
# 223 "data//maps/CinnabarIsland/scripts.pory"

# 224 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BoatArriveExitedPokeCenter::
# 225 "data//maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_CINNABAR_SEAGALLOP, CinnabarIsland_Movement_BoatArrive
# 226 "data//maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 227 "data//maps/CinnabarIsland/scripts.pory"
	return
# 228 "data//maps/CinnabarIsland/scripts.pory"

# 229 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BoardBoat::
# 230 "data//maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillBoardBoat
# 231 "data//maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Movement_PlayerBoardBoat
# 232 "data//maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 233 "data//maps/CinnabarIsland/scripts.pory"
	return
# 234 "data//maps/CinnabarIsland/scripts.pory"

# 235 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BoardBoatExitedPokeCenter::
# 236 "data//maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillBoardBoatFromShore
# 237 "data//maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Movement_PlayerBoardBoatFromShore
# 238 "data//maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 239 "data//maps/CinnabarIsland/scripts.pory"
	return
# 240 "data//maps/CinnabarIsland/scripts.pory"

# 241 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BoatArrive::
# 242 "data//maps/CinnabarIsland/scripts.pory"
	delay_16
# 243 "data//maps/CinnabarIsland/scripts.pory"
	delay_16
# 244 "data//maps/CinnabarIsland/scripts.pory"
	walk_fast_left
# 245 "data//maps/CinnabarIsland/scripts.pory"
	walk_fast_left
# 246 "data//maps/CinnabarIsland/scripts.pory"
	walk_left
# 247 "data//maps/CinnabarIsland/scripts.pory"
	walk_slower_left
# 248 "data//maps/CinnabarIsland/scripts.pory"
	walk_slower_left
# 249 "data//maps/CinnabarIsland/scripts.pory"
	step_end
# 250 "data//maps/CinnabarIsland/scripts.pory"

# 251 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillBoardBoat::
# 252 "data//maps/CinnabarIsland/scripts.pory"
	walk_right
# 253 "data//maps/CinnabarIsland/scripts.pory"
	walk_down
# 254 "data//maps/CinnabarIsland/scripts.pory"
	walk_down
# 255 "data//maps/CinnabarIsland/scripts.pory"
	walk_right
# 256 "data//maps/CinnabarIsland/scripts.pory"
	delay_4
# 257 "data//maps/CinnabarIsland/scripts.pory"
	set_invisible
# 258 "data//maps/CinnabarIsland/scripts.pory"
	step_end
# 259 "data//maps/CinnabarIsland/scripts.pory"

# 260 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillApproachPlayer1::
# 261 "data//maps/CinnabarIsland/scripts.pory"
	walk_up
# 262 "data//maps/CinnabarIsland/scripts.pory"
	step_end
# 263 "data//maps/CinnabarIsland/scripts.pory"

# 264 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillApproachPlayer2::
# 265 "data//maps/CinnabarIsland/scripts.pory"
	walk_left
# 266 "data//maps/CinnabarIsland/scripts.pory"
	walk_left
# 267 "data//maps/CinnabarIsland/scripts.pory"
	walk_left
# 268 "data//maps/CinnabarIsland/scripts.pory"
	step_end
# 269 "data//maps/CinnabarIsland/scripts.pory"

# 270 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillFaceBoat::
# 271 "data//maps/CinnabarIsland/scripts.pory"
	delay_16
# 272 "data//maps/CinnabarIsland/scripts.pory"
	delay_16
# 273 "data//maps/CinnabarIsland/scripts.pory"
	delay_8
# 274 "data//maps/CinnabarIsland/scripts.pory"
	walk_in_place_faster_right
# 275 "data//maps/CinnabarIsland/scripts.pory"
	step_end
# 276 "data//maps/CinnabarIsland/scripts.pory"

# 277 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_ApproachShore::
# 278 "data//maps/CinnabarIsland/scripts.pory"
	walk_right
# 279 "data//maps/CinnabarIsland/scripts.pory"
	walk_right
# 280 "data//maps/CinnabarIsland/scripts.pory"
	walk_right
# 281 "data//maps/CinnabarIsland/scripts.pory"
	walk_right
# 282 "data//maps/CinnabarIsland/scripts.pory"
	walk_right
# 283 "data//maps/CinnabarIsland/scripts.pory"
	walk_right
# 284 "data//maps/CinnabarIsland/scripts.pory"
	step_end
# 285 "data//maps/CinnabarIsland/scripts.pory"

# 286 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillBoardBoatFromShore::
# 287 "data//maps/CinnabarIsland/scripts.pory"
	walk_right
# 288 "data//maps/CinnabarIsland/scripts.pory"
	delay_4
# 289 "data//maps/CinnabarIsland/scripts.pory"
	set_invisible
# 290 "data//maps/CinnabarIsland/scripts.pory"
	step_end
# 291 "data//maps/CinnabarIsland/scripts.pory"

# 292 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_PlayerBoardBoat::
# 293 "data//maps/CinnabarIsland/scripts.pory"
	walk_down
# 294 "data//maps/CinnabarIsland/scripts.pory"
	walk_right
# 295 "data//maps/CinnabarIsland/scripts.pory"
	walk_down
# 296 "data//maps/CinnabarIsland/scripts.pory"
	walk_down
# 297 "data//maps/CinnabarIsland/scripts.pory"
	walk_in_place_faster_right
# 298 "data//maps/CinnabarIsland/scripts.pory"
	delay_4
# 299 "data//maps/CinnabarIsland/scripts.pory"
	walk_right
# 300 "data//maps/CinnabarIsland/scripts.pory"
	delay_4
# 301 "data//maps/CinnabarIsland/scripts.pory"
	set_invisible
# 302 "data//maps/CinnabarIsland/scripts.pory"
	step_end
# 303 "data//maps/CinnabarIsland/scripts.pory"

# 304 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_PlayerBoardBoatFromShore::
# 305 "data//maps/CinnabarIsland/scripts.pory"
	walk_right
# 306 "data//maps/CinnabarIsland/scripts.pory"
	delay_4
# 307 "data//maps/CinnabarIsland/scripts.pory"
	walk_right
# 308 "data//maps/CinnabarIsland/scripts.pory"
	delay_4
# 309 "data//maps/CinnabarIsland/scripts.pory"
	set_invisible
# 310 "data//maps/CinnabarIsland/scripts.pory"
	step_end
# 311 "data//maps/CinnabarIsland/scripts.pory"

# 312 "data//maps/CinnabarIsland/scripts.pory"
@ Triggered when VAR_TEMP_1 is 0
# 313 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_GymDoorLocked::
# 314 "data//maps/CinnabarIsland/scripts.pory"
	lockall
# 315 "data//maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 316 "data//maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 317 "data//maps/CinnabarIsland/scripts.pory"
	delay 20
# 318 "data//maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_DoorIsLocked
# 319 "data//maps/CinnabarIsland/scripts.pory"
	closemessage
# 320 "data//maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Movement_ForcePlayerFromDoor
# 321 "data//maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 322 "data//maps/CinnabarIsland/scripts.pory"
	releaseall
# 323 "data//maps/CinnabarIsland/scripts.pory"
	end
# 324 "data//maps/CinnabarIsland/scripts.pory"

# 325 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_ForcePlayerFromDoor::
# 326 "data//maps/CinnabarIsland/scripts.pory"
	walk_down
# 327 "data//maps/CinnabarIsland/scripts.pory"
	step_end
# 328 "data//maps/CinnabarIsland/scripts.pory"

# 329 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_Woman::
# 330 "data//maps/CinnabarIsland/scripts.pory"
	lock
# 331 "data//maps/CinnabarIsland/scripts.pory"
	faceplayer
# 332 "data//maps/CinnabarIsland/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 3
# 333 "data//maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_BlaineLivedHereSinceBeforeLab
# 334 "data//maps/CinnabarIsland/scripts.pory"
	release
# 335 "data//maps/CinnabarIsland/scripts.pory"
	end
# 336 "data//maps/CinnabarIsland/scripts.pory"

# 337 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_OldMan::
# 338 "data//maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_ScientistsExperimentInMansion, MSGBOX_NPC
# 339 "data//maps/CinnabarIsland/scripts.pory"
	end
# 340 "data//maps/CinnabarIsland/scripts.pory"

# 341 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_IslandSign::
# 342 "data//maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_IslandSign, MSGBOX_SIGN
# 343 "data//maps/CinnabarIsland/scripts.pory"
	end
# 344 "data//maps/CinnabarIsland/scripts.pory"

# 345 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_PokemonLabSign::
# 346 "data//maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_PokemonLab, MSGBOX_SIGN
# 347 "data//maps/CinnabarIsland/scripts.pory"
	end
# 348 "data//maps/CinnabarIsland/scripts.pory"

# 349 "data//maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_GymSign::
# 350 "data//maps/CinnabarIsland/scripts.pory"
	lockall
# 351 "data//maps/CinnabarIsland/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 0
# 352 "data//maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_GymSign
# 353 "data//maps/CinnabarIsland/scripts.pory"
	releaseall
# 354 "data//maps/CinnabarIsland/scripts.pory"
	end
