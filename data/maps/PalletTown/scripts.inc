# 1 "data//maps/PalletTown/scripts.pory"

# 2 "data//maps/PalletTown/scripts.pory"

# 3 "data//maps/PalletTown/scripts.pory"
.equ SIGN_LADY_READY, VAR_TEMP_2
# 4 "data//maps/PalletTown/scripts.pory"

# 5 "data//maps/PalletTown/scripts.pory"
PalletTown_MapScripts::
# 6 "data//maps/PalletTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_OnTransition
# 7 "data//maps/PalletTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_OnFrame
# 8 "data//maps/PalletTown/scripts.pory"
	.byte 0
# 9 "data//maps/PalletTown/scripts.pory"

# 10 "data//maps/PalletTown/scripts.pory"
PalletTown_OnTransition::
# 11 "data//maps/PalletTown/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_PALLET_TOWN
# 12 "data//maps/PalletTown/scripts.pory"
	call_if_set FLAG_PALLET_LADY_NOT_BLOCKING_SIGN, PalletTown_EventScript_TryReadySignLady
# 13 "data//maps/PalletTown/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 0, PalletTown_EventScript_SetSignLadyPos
# 14 "data//maps/PalletTown/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1, PalletTown_EventScript_SetSignLadyDone
# 15 "data//maps/PalletTown/scripts.pory"
	end
# 16 "data//maps/PalletTown/scripts.pory"

# 17 "data//maps/PalletTown/scripts.pory"
PalletTown_EventScript_TryReadySignLady::
# 18 "data//maps/PalletTown/scripts.pory"
	goto_if_unset FLAG_OPENED_START_MENU, EventScript_Return
# 19 "data//maps/PalletTown/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1, EventScript_Return
# 20 "data//maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 21 "data//maps/PalletTown/scripts.pory"
	return
# 22 "data//maps/PalletTown/scripts.pory"

# 23 "data//maps/PalletTown/scripts.pory"
PalletTown_EventScript_SetSignLadyDone::
# 24 "data//maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 2
# 25 "data//maps/PalletTown/scripts.pory"
	return
# 26 "data//maps/PalletTown/scripts.pory"

# 27 "data//maps/PalletTown/scripts.pory"
PalletTown_EventScript_SetSignLadyPos::
# 28 "data//maps/PalletTown/scripts.pory"
	goto_if_set FLAG_PALLET_LADY_NOT_BLOCKING_SIGN, PalletTown_EventScript_MoveSignLadyToRouteEntrance
# 29 "data//maps/PalletTown/scripts.pory"
	setobjectxyperm LOCALID_PALLET_SIGN_LADY, 5, 15
# 30 "data//maps/PalletTown/scripts.pory"
	setobjectmovementtype LOCALID_PALLET_SIGN_LADY, MOVEMENT_TYPE_FACE_UP
# 31 "data//maps/PalletTown/scripts.pory"
	return
# 32 "data//maps/PalletTown/scripts.pory"

# 33 "data//maps/PalletTown/scripts.pory"
PalletTown_EventScript_MoveSignLadyToRouteEntrance::
# 34 "data//maps/PalletTown/scripts.pory"
	setobjectxyperm LOCALID_PALLET_SIGN_LADY, 12, 2
# 35 "data//maps/PalletTown/scripts.pory"
	setobjectmovementtype LOCALID_PALLET_SIGN_LADY, MOVEMENT_TYPE_FACE_DOWN
# 36 "data//maps/PalletTown/scripts.pory"
	setvar SIGN_LADY_READY, TRUE
# 37 "data//maps/PalletTown/scripts.pory"
	return
# 38 "data//maps/PalletTown/scripts.pory"

# 39 "data//maps/PalletTown/scripts.pory"
PalletTown_OnFrame::
# 40 "data//maps/PalletTown/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_OAK, 2, PalletTown_EventScript_OakRatingScene
# 41 "data//maps/PalletTown/scripts.pory"
	.2byte 0
# 42 "data//maps/PalletTown/scripts.pory"

# 43 "data//maps/PalletTown/scripts.pory"
@ Oak approaches player after exiting their house post Elite Four to check if they should receieve the National Dex
# 44 "data//maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakRatingScene::
# 45 "data//maps/PalletTown/scripts.pory"
	lockall
# 46 "data//maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 47 "data//maps/PalletTown/scripts.pory"
	setobjectxyperm LOCALID_PALLET_PROF_OAK, 14, 14
# 48 "data//maps/PalletTown/scripts.pory"
	setobjectmovementtype LOCALID_PALLET_PROF_OAK, MOVEMENT_TYPE_FACE_LEFT
# 49 "data//maps/PalletTown/scripts.pory"
	addobject LOCALID_PALLET_PROF_OAK
# 50 "data//maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakWalkToPlayersDoor
# 51 "data//maps/PalletTown/scripts.pory"
	waitmovement 0
# 52 "data//maps/PalletTown/scripts.pory"
	goto_if_unset FLAG_WORLD_MAP_ONE_ISLAND, PalletTown_EventScript_NotBeenToOneIslandYet
# 53 "data//maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakLetMeSeePokedex
# 54 "data//maps/PalletTown/scripts.pory"
	setvar VAR_0x8004, 0
# 55 "data//maps/PalletTown/scripts.pory"
	specialvar VAR_RESULT, GetPokedexCount
# 56 "data//maps/PalletTown/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 57 "data//maps/PalletTown/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 58 "data//maps/PalletTown/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 59 "data//maps/PalletTown/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 60 "data//maps/PalletTown/scripts.pory"
	goto_if_lt VAR_0x8009, 60, PalletTown_EventScript_NotEnoughMonsForNationalDex
# 61 "data//maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CaughtXImpressiveFollowMe
# 62 "data//maps/PalletTown/scripts.pory"
	closemessage
# 63 "data//maps/PalletTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 64 "data//maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerWalkToLabFromHouse
# 65 "data//maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakWalkToLabFromHouse
# 66 "data//maps/PalletTown/scripts.pory"
	waitmovement 0
# 67 "data//maps/PalletTown/scripts.pory"
	opendoor 16, 13
# 68 "data//maps/PalletTown/scripts.pory"
	waitdooranim
# 69 "data//maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakEnterLab
# 70 "data//maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerEnterLab
# 71 "data//maps/PalletTown/scripts.pory"
	waitmovement 0
# 72 "data//maps/PalletTown/scripts.pory"
	closedoor 16, 13
# 73 "data//maps/PalletTown/scripts.pory"
	waitdooranim
# 74 "data//maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7
# 75 "data//maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 3
# 76 "data//maps/PalletTown/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
# 77 "data//maps/PalletTown/scripts.pory"
	warp MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, 12
# 78 "data//maps/PalletTown/scripts.pory"
	waitstate
# 79 "data//maps/PalletTown/scripts.pory"
	releaseall
# 80 "data//maps/PalletTown/scripts.pory"
	end
# 81 "data//maps/PalletTown/scripts.pory"

# 82 "data//maps/PalletTown/scripts.pory"
PalletTown_EventScript_EndOakRatingScene::
# 83 "data//maps/PalletTown/scripts.pory"
	closemessage
# 84 "data//maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakExit
# 85 "data//maps/PalletTown/scripts.pory"
	waitmovement 0
# 86 "data//maps/PalletTown/scripts.pory"
	removeobject LOCALID_PALLET_PROF_OAK
# 87 "data//maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 3
# 88 "data//maps/PalletTown/scripts.pory"
	releaseall
# 89 "data//maps/PalletTown/scripts.pory"
	end
# 90 "data//maps/PalletTown/scripts.pory"

# 91 "data//maps/PalletTown/scripts.pory"
PalletTown_EventScript_NotEnoughMonsForNationalDex::
# 92 "data//maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CaughtXPuttingInHonestEffort
# 93 "data//maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_EndOakRatingScene
# 94 "data//maps/PalletTown/scripts.pory"
	end
# 95 "data//maps/PalletTown/scripts.pory"

# 96 "data//maps/PalletTown/scripts.pory"
PalletTown_EventScript_NotBeenToOneIslandYet::
# 97 "data//maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakYouEnjoyingTraveling
# 98 "data//maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_EndOakRatingScene
# 99 "data//maps/PalletTown/scripts.pory"
	end
# 100 "data//maps/PalletTown/scripts.pory"

# 101 "data//maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToPlayersDoor::
# 102 "data//maps/PalletTown/scripts.pory"
	walk_left
# 103 "data//maps/PalletTown/scripts.pory"
	walk_left
# 104 "data//maps/PalletTown/scripts.pory"
	walk_left
# 105 "data//maps/PalletTown/scripts.pory"
	walk_up
# 106 "data//maps/PalletTown/scripts.pory"
	walk_up
# 107 "data//maps/PalletTown/scripts.pory"
	walk_up
# 108 "data//maps/PalletTown/scripts.pory"
	walk_up
# 109 "data//maps/PalletTown/scripts.pory"
	walk_up
# 110 "data//maps/PalletTown/scripts.pory"
	walk_left
# 111 "data//maps/PalletTown/scripts.pory"
	walk_left
# 112 "data//maps/PalletTown/scripts.pory"
	walk_left
# 113 "data//maps/PalletTown/scripts.pory"
	walk_left
# 114 "data//maps/PalletTown/scripts.pory"
	walk_left
# 115 "data//maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 116 "data//maps/PalletTown/scripts.pory"
	step_end
# 117 "data//maps/PalletTown/scripts.pory"

# 118 "data//maps/PalletTown/scripts.pory"
PalletTown_Movement_OakExit::
# 119 "data//maps/PalletTown/scripts.pory"
	walk_right
# 120 "data//maps/PalletTown/scripts.pory"
	walk_right
# 121 "data//maps/PalletTown/scripts.pory"
	walk_right
# 122 "data//maps/PalletTown/scripts.pory"
	walk_right
# 123 "data//maps/PalletTown/scripts.pory"
	walk_right
# 124 "data//maps/PalletTown/scripts.pory"
	walk_down
# 125 "data//maps/PalletTown/scripts.pory"
	walk_down
# 126 "data//maps/PalletTown/scripts.pory"
	walk_down
# 127 "data//maps/PalletTown/scripts.pory"
	walk_down
# 128 "data//maps/PalletTown/scripts.pory"
	walk_down
# 129 "data//maps/PalletTown/scripts.pory"
	walk_right
# 130 "data//maps/PalletTown/scripts.pory"
	walk_right
# 131 "data//maps/PalletTown/scripts.pory"
	walk_right
# 132 "data//maps/PalletTown/scripts.pory"
	step_end
# 133 "data//maps/PalletTown/scripts.pory"

# 134 "data//maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabFromHouse::
# 135 "data//maps/PalletTown/scripts.pory"
	walk_right
# 136 "data//maps/PalletTown/scripts.pory"
	walk_right
# 137 "data//maps/PalletTown/scripts.pory"
	walk_right
# 138 "data//maps/PalletTown/scripts.pory"
	walk_right
# 139 "data//maps/PalletTown/scripts.pory"
	walk_right
# 140 "data//maps/PalletTown/scripts.pory"
	walk_down
# 141 "data//maps/PalletTown/scripts.pory"
	walk_down
# 142 "data//maps/PalletTown/scripts.pory"
	walk_down
# 143 "data//maps/PalletTown/scripts.pory"
	walk_down
# 144 "data//maps/PalletTown/scripts.pory"
	walk_down
# 145 "data//maps/PalletTown/scripts.pory"
	walk_right
# 146 "data//maps/PalletTown/scripts.pory"
	walk_right
# 147 "data//maps/PalletTown/scripts.pory"
	walk_right
# 148 "data//maps/PalletTown/scripts.pory"
	walk_right
# 149 "data//maps/PalletTown/scripts.pory"
	walk_right
# 150 "data//maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 151 "data//maps/PalletTown/scripts.pory"
	step_end
# 152 "data//maps/PalletTown/scripts.pory"

# 153 "data//maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabFromHouse::
# 154 "data//maps/PalletTown/scripts.pory"
	walk_down
# 155 "data//maps/PalletTown/scripts.pory"
	walk_right
# 156 "data//maps/PalletTown/scripts.pory"
	walk_right
# 157 "data//maps/PalletTown/scripts.pory"
	walk_right
# 158 "data//maps/PalletTown/scripts.pory"
	walk_right
# 159 "data//maps/PalletTown/scripts.pory"
	walk_right
# 160 "data//maps/PalletTown/scripts.pory"
	walk_down
# 161 "data//maps/PalletTown/scripts.pory"
	walk_down
# 162 "data//maps/PalletTown/scripts.pory"
	walk_down
# 163 "data//maps/PalletTown/scripts.pory"
	walk_down
# 164 "data//maps/PalletTown/scripts.pory"
	walk_down
# 165 "data//maps/PalletTown/scripts.pory"
	walk_right
# 166 "data//maps/PalletTown/scripts.pory"
	walk_right
# 167 "data//maps/PalletTown/scripts.pory"
	walk_right
# 168 "data//maps/PalletTown/scripts.pory"
	walk_right
# 169 "data//maps/PalletTown/scripts.pory"
	step_end
# 170 "data//maps/PalletTown/scripts.pory"

# 171 "data//maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakTriggerLeft::
# 172 "data//maps/PalletTown/scripts.pory"
	lockall
# 173 "data//maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_1, 0
# 174 "data//maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_OakTrigger
# 175 "data//maps/PalletTown/scripts.pory"
	end
# 176 "data//maps/PalletTown/scripts.pory"

# 177 "data//maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakTriggerRight::
# 178 "data//maps/PalletTown/scripts.pory"
	lockall
# 179 "data//maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 180 "data//maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_OakTrigger
# 181 "data//maps/PalletTown/scripts.pory"
	end
# 182 "data//maps/PalletTown/scripts.pory"

# 183 "data//maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakTrigger::
# 184 "data//maps/PalletTown/scripts.pory"
	famechecker FAMECHECKER_OAK, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 185 "data//maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 186 "data//maps/PalletTown/scripts.pory"
	delay 30
# 187 "data//maps/PalletTown/scripts.pory"
	playbgm MUS_OAK, 0
# 188 "data//maps/PalletTown/scripts.pory"
	message PalletTown_Text_OakDontGoOut
# 189 "data//maps/PalletTown/scripts.pory"
	waitmessage
# 190 "data//maps/PalletTown/scripts.pory"
	delay 85
# 191 "data//maps/PalletTown/scripts.pory"
	closemessage
# 192 "data//maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 193 "data//maps/PalletTown/scripts.pory"
	waitmovement 0
# 194 "data//maps/PalletTown/scripts.pory"
	playse SE_PIN
# 195 "data//maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 196 "data//maps/PalletTown/scripts.pory"
	waitmovement 0
# 197 "data//maps/PalletTown/scripts.pory"
	delay 30
# 198 "data//maps/PalletTown/scripts.pory"
	addobject LOCALID_PALLET_PROF_OAK
# 199 "data//maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PalletTown_EventScript_OakEnterLeft
# 200 "data//maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PalletTown_EventScript_OakEnterRight
# 201 "data//maps/PalletTown/scripts.pory"
	delay 30
# 202 "data//maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakGrassUnsafeNeedMon
# 203 "data//maps/PalletTown/scripts.pory"
	closemessage
# 204 "data//maps/PalletTown/scripts.pory"
	delay 30
# 205 "data//maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PalletTown_EventScript_OakLeadPlayerToLabLeft
# 206 "data//maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PalletTown_EventScript_OakLeadPlayerToLabRight
# 207 "data//maps/PalletTown/scripts.pory"
	opendoor 16, 13
# 208 "data//maps/PalletTown/scripts.pory"
	waitdooranim
# 209 "data//maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakEnterLab
# 210 "data//maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerEnterLab
# 211 "data//maps/PalletTown/scripts.pory"
	waitmovement 0
# 212 "data//maps/PalletTown/scripts.pory"
	closedoor 16, 13
# 213 "data//maps/PalletTown/scripts.pory"
	waitdooranim
# 214 "data//maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1
# 215 "data//maps/PalletTown/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 216 "data//maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 1
# 217 "data//maps/PalletTown/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
# 218 "data//maps/PalletTown/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 219 "data//maps/PalletTown/scripts.pory"
	warp MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, 12
# 220 "data//maps/PalletTown/scripts.pory"
	waitstate
# 221 "data//maps/PalletTown/scripts.pory"
	releaseall
# 222 "data//maps/PalletTown/scripts.pory"
	end
# 223 "data//maps/PalletTown/scripts.pory"

# 224 "data//maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakEnterLeft::
# 225 "data//maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakEnterLeft
# 226 "data//maps/PalletTown/scripts.pory"
	waitmovement 0
# 227 "data//maps/PalletTown/scripts.pory"
	return
# 228 "data//maps/PalletTown/scripts.pory"

# 229 "data//maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakEnterRight::
# 230 "data//maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakEnterRight
# 231 "data//maps/PalletTown/scripts.pory"
	waitmovement 0
# 232 "data//maps/PalletTown/scripts.pory"
	return
# 233 "data//maps/PalletTown/scripts.pory"

# 234 "data//maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakLeadPlayerToLabLeft::
# 235 "data//maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakWalkToLabLeft
# 236 "data//maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerWalkToLabLeft
# 237 "data//maps/PalletTown/scripts.pory"
	waitmovement 0
# 238 "data//maps/PalletTown/scripts.pory"
	return
# 239 "data//maps/PalletTown/scripts.pory"

# 240 "data//maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakLeadPlayerToLabRight::
# 241 "data//maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakWalkToLabRight
# 242 "data//maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerWalkToLabRight
# 243 "data//maps/PalletTown/scripts.pory"
	waitmovement 0
# 244 "data//maps/PalletTown/scripts.pory"
	return
# 245 "data//maps/PalletTown/scripts.pory"

# 246 "data//maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterLeft::
# 247 "data//maps/PalletTown/scripts.pory"
	walk_up
# 248 "data//maps/PalletTown/scripts.pory"
	walk_up
# 249 "data//maps/PalletTown/scripts.pory"
	walk_right
# 250 "data//maps/PalletTown/scripts.pory"
	walk_up
# 251 "data//maps/PalletTown/scripts.pory"
	walk_up
# 252 "data//maps/PalletTown/scripts.pory"
	walk_right
# 253 "data//maps/PalletTown/scripts.pory"
	walk_up
# 254 "data//maps/PalletTown/scripts.pory"
	walk_up
# 255 "data//maps/PalletTown/scripts.pory"
	step_end
# 256 "data//maps/PalletTown/scripts.pory"

# 257 "data//maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterRight::
# 258 "data//maps/PalletTown/scripts.pory"
	walk_right
# 259 "data//maps/PalletTown/scripts.pory"
	walk_up
# 260 "data//maps/PalletTown/scripts.pory"
	walk_up
# 261 "data//maps/PalletTown/scripts.pory"
	walk_right
# 262 "data//maps/PalletTown/scripts.pory"
	walk_up
# 263 "data//maps/PalletTown/scripts.pory"
	walk_up
# 264 "data//maps/PalletTown/scripts.pory"
	walk_right
# 265 "data//maps/PalletTown/scripts.pory"
	walk_up
# 266 "data//maps/PalletTown/scripts.pory"
	walk_up
# 267 "data//maps/PalletTown/scripts.pory"
	step_end
# 268 "data//maps/PalletTown/scripts.pory"

# 269 "data//maps/PalletTown/scripts.pory"
	.macro walk_to_lab
# 270 "data//maps/PalletTown/scripts.pory"
	walk_left
# 271 "data//maps/PalletTown/scripts.pory"
	walk_down
# 272 "data//maps/PalletTown/scripts.pory"
	walk_down
# 273 "data//maps/PalletTown/scripts.pory"
	walk_down
# 274 "data//maps/PalletTown/scripts.pory"
	walk_down
# 275 "data//maps/PalletTown/scripts.pory"
	walk_down
# 276 "data//maps/PalletTown/scripts.pory"
	walk_down
# 277 "data//maps/PalletTown/scripts.pory"
	walk_down
# 278 "data//maps/PalletTown/scripts.pory"
	walk_down
# 279 "data//maps/PalletTown/scripts.pory"
	walk_down
# 280 "data//maps/PalletTown/scripts.pory"
	walk_down
# 281 "data//maps/PalletTown/scripts.pory"
	walk_down
# 282 "data//maps/PalletTown/scripts.pory"
	walk_right
# 283 "data//maps/PalletTown/scripts.pory"
	walk_right
# 284 "data//maps/PalletTown/scripts.pory"
	walk_right
# 285 "data//maps/PalletTown/scripts.pory"
	walk_right
# 286 "data//maps/PalletTown/scripts.pory"
	.endm
# 287 "data//maps/PalletTown/scripts.pory"

# 288 "data//maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabLeft::
# 289 "data//maps/PalletTown/scripts.pory"
	walk_down
# 290 "data//maps/PalletTown/scripts.pory"
	walk_to_lab
# 291 "data//maps/PalletTown/scripts.pory"
	walk_right
# 292 "data//maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 293 "data//maps/PalletTown/scripts.pory"
	step_end
# 294 "data//maps/PalletTown/scripts.pory"

# 295 "data//maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabRight::
# 296 "data//maps/PalletTown/scripts.pory"
	walk_down
# 297 "data//maps/PalletTown/scripts.pory"
	walk_left
# 298 "data//maps/PalletTown/scripts.pory"
	walk_to_lab
# 299 "data//maps/PalletTown/scripts.pory"
	walk_right
# 300 "data//maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 301 "data//maps/PalletTown/scripts.pory"
	step_end
# 302 "data//maps/PalletTown/scripts.pory"

# 303 "data//maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterLab::
# 304 "data//maps/PalletTown/scripts.pory"
	walk_up
# 305 "data//maps/PalletTown/scripts.pory"
	set_invisible
# 306 "data//maps/PalletTown/scripts.pory"
	step_end
# 307 "data//maps/PalletTown/scripts.pory"

# 308 "data//maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabLeft::
# 309 "data//maps/PalletTown/scripts.pory"
	walk_down
# 310 "data//maps/PalletTown/scripts.pory"
	walk_down
# 311 "data//maps/PalletTown/scripts.pory"
	walk_to_lab
# 312 "data//maps/PalletTown/scripts.pory"
	step_end
# 313 "data//maps/PalletTown/scripts.pory"

# 314 "data//maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabRight::
# 315 "data//maps/PalletTown/scripts.pory"
	walk_down
# 316 "data//maps/PalletTown/scripts.pory"
	walk_down
# 317 "data//maps/PalletTown/scripts.pory"
	walk_left
# 318 "data//maps/PalletTown/scripts.pory"
	walk_to_lab
# 319 "data//maps/PalletTown/scripts.pory"
	step_end
# 320 "data//maps/PalletTown/scripts.pory"

# 321 "data//maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerEnterLab::
# 322 "data//maps/PalletTown/scripts.pory"
	walk_right
# 323 "data//maps/PalletTown/scripts.pory"
	walk_up
# 324 "data//maps/PalletTown/scripts.pory"
	set_invisible
# 325 "data//maps/PalletTown/scripts.pory"
	step_end
# 326 "data//maps/PalletTown/scripts.pory"

# 327 "data//maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLady::
# 328 "data//maps/PalletTown/scripts.pory"
	lock
# 329 "data//maps/PalletTown/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 2, PalletTown_EventScript_SignLadyDone
# 330 "data//maps/PalletTown/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1, PalletTown_EventScript_SignLadyJustShowedSign
# 331 "data//maps/PalletTown/scripts.pory"
	goto_if_eq SIGN_LADY_READY, TRUE, PalletTown_EventScript_SignLadyStartShowSign
# 332 "data//maps/PalletTown/scripts.pory"
	goto_if_set FLAG_TEMP_2, PalletTown_EventScript_SignLadyGoReadSign
# 333 "data//maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_HmmIsThatRight
# 334 "data//maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 335 "data//maps/PalletTown/scripts.pory"
	waitmovement 0
# 336 "data//maps/PalletTown/scripts.pory"
	playse SE_PIN
# 337 "data//maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_ExclamationMark
# 338 "data//maps/PalletTown/scripts.pory"
	waitmovement 0
# 339 "data//maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_Delay48
# 340 "data//maps/PalletTown/scripts.pory"
	waitmovement 0
# 341 "data//maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OhLookLook
# 342 "data//maps/PalletTown/scripts.pory"
	closemessage
# 343 "data//maps/PalletTown/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_EventScript_SignLadyMoveOutOfWayRight
# 344 "data//maps/PalletTown/scripts.pory"
	call_if_ne VAR_FACING, DIR_EAST, PalletTown_EventScript_SignLadyMoveOutOfWayLeft
# 345 "data//maps/PalletTown/scripts.pory"
	copyobjectxytoperm LOCALID_PALLET_SIGN_LADY
# 346 "data//maps/PalletTown/scripts.pory"
	setflag FLAG_TEMP_2
# 347 "data//maps/PalletTown/scripts.pory"
	release
# 348 "data//maps/PalletTown/scripts.pory"
	end
# 349 "data//maps/PalletTown/scripts.pory"

# 350 "data//maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyMoveOutOfWayRight::
# 351 "data//maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, PalletTown_Movement_SignLadyMoveOutOfWayRight
# 352 "data//maps/PalletTown/scripts.pory"
	waitmovement 0
# 353 "data//maps/PalletTown/scripts.pory"
	return
# 354 "data//maps/PalletTown/scripts.pory"

# 355 "data//maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyMoveOutOfWayLeft::
# 356 "data//maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, PalletTown_Movement_SignLadyMoveOutOfWayLeft
# 357 "data//maps/PalletTown/scripts.pory"
	waitmovement 0
# 358 "data//maps/PalletTown/scripts.pory"
	return
# 359 "data//maps/PalletTown/scripts.pory"

# 360 "data//maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyDone::
# 361 "data//maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 362 "data//maps/PalletTown/scripts.pory"
	waitmovement 0
# 363 "data//maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_RaisingMonsToo
# 364 "data//maps/PalletTown/scripts.pory"
	release
# 365 "data//maps/PalletTown/scripts.pory"
	end
# 366 "data//maps/PalletTown/scripts.pory"

# 367 "data//maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyGoReadSign::
# 368 "data//maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 369 "data//maps/PalletTown/scripts.pory"
	waitmovement 0
# 370 "data//maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_ReadItReadIt
# 371 "data//maps/PalletTown/scripts.pory"
	release
# 372 "data//maps/PalletTown/scripts.pory"
	end
# 373 "data//maps/PalletTown/scripts.pory"

# 374 "data//maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyJustShowedSign::
# 375 "data//maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 376 "data//maps/PalletTown/scripts.pory"
	waitmovement 0
# 377 "data//maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_SignsAreUsefulArentThey
# 378 "data//maps/PalletTown/scripts.pory"
	release
# 379 "data//maps/PalletTown/scripts.pory"
	end
# 380 "data//maps/PalletTown/scripts.pory"

# 381 "data//maps/PalletTown/scripts.pory"
PalletTown_Movement_SignLadyMoveOutOfWayRight::
# 382 "data//maps/PalletTown/scripts.pory"
	walk_right
# 383 "data//maps/PalletTown/scripts.pory"
	walk_in_place_faster_left
# 384 "data//maps/PalletTown/scripts.pory"
	step_end
# 385 "data//maps/PalletTown/scripts.pory"

# 386 "data//maps/PalletTown/scripts.pory"
PalletTown_Movement_SignLadyMoveOutOfWayLeft::
# 387 "data//maps/PalletTown/scripts.pory"
	walk_left
# 388 "data//maps/PalletTown/scripts.pory"
	walk_in_place_faster_right
# 389 "data//maps/PalletTown/scripts.pory"
	step_end
# 390 "data//maps/PalletTown/scripts.pory"

# 391 "data//maps/PalletTown/scripts.pory"
PalletTown_EventScript_FatMan::
# 392 "data//maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CanStoreItemsAndMonsInPC, MSGBOX_NPC
# 393 "data//maps/PalletTown/scripts.pory"
	end
# 394 "data//maps/PalletTown/scripts.pory"

# 395 "data//maps/PalletTown/scripts.pory"
PalletTown_EventScript_OaksLabSign::
# 396 "data//maps/PalletTown/scripts.pory"
	lockall
# 397 "data//maps/PalletTown/scripts.pory"
	famechecker FAMECHECKER_OAK, 0
# 398 "data//maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakPokemonResearchLab
# 399 "data//maps/PalletTown/scripts.pory"
	releaseall
# 400 "data//maps/PalletTown/scripts.pory"
	end
# 401 "data//maps/PalletTown/scripts.pory"

# 402 "data//maps/PalletTown/scripts.pory"
PalletTown_EventScript_PlayersHouseSign::
# 403 "data//maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PlayersHouse, MSGBOX_SIGN
# 404 "data//maps/PalletTown/scripts.pory"
	end
# 405 "data//maps/PalletTown/scripts.pory"

# 406 "data//maps/PalletTown/scripts.pory"
PalletTown_EventScript_RivalsHouseSign::
# 407 "data//maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_RivalsHouse, MSGBOX_SIGN
# 408 "data//maps/PalletTown/scripts.pory"
	end
# 409 "data//maps/PalletTown/scripts.pory"

# 410 "data//maps/PalletTown/scripts.pory"
PalletTown_EventScript_TownSign::
# 411 "data//maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_TownSign, MSGBOX_SIGN
# 412 "data//maps/PalletTown/scripts.pory"
	end
# 413 "data//maps/PalletTown/scripts.pory"

# 414 "data//maps/PalletTown/scripts.pory"
PalletTown_EventScript_TrainerTips::
# 415 "data//maps/PalletTown/scripts.pory"
	lockall
# 416 "data//maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PressStartToOpenMenu
# 417 "data//maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 418 "data//maps/PalletTown/scripts.pory"
	releaseall
# 419 "data//maps/PalletTown/scripts.pory"
	end
# 420 "data//maps/PalletTown/scripts.pory"

# 421 "data//maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyTrigger::
# 422 "data//maps/PalletTown/scripts.pory"
	lockall
# 423 "data//maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_WalkInPlaceFasterRight
# 424 "data//maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 425 "data//maps/PalletTown/scripts.pory"
	waitmovement 0
# 426 "data//maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_SignLadyShowSign
# 427 "data//maps/PalletTown/scripts.pory"
	releaseall
# 428 "data//maps/PalletTown/scripts.pory"
	end
# 429 "data//maps/PalletTown/scripts.pory"

# 430 "data//maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyShowSign::
# 431 "data//maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 432 "data//maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_LookCopiedTrainerTipsSign
# 433 "data//maps/PalletTown/scripts.pory"
	closemessage
# 434 "data//maps/PalletTown/scripts.pory"
	delay 20
# 435 "data//maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 436 "data//maps/PalletTown/scripts.pory"
	setflag FLAG_OPENED_START_MENU
# 437 "data//maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 438 "data//maps/PalletTown/scripts.pory"
	setvar SIGN_LADY_READY, FALSE
# 439 "data//maps/PalletTown/scripts.pory"
	special SetWalkingIntoSignVars
# 440 "data//maps/PalletTown/scripts.pory"
	special DisableMsgBoxWalkaway
# 441 "data//maps/PalletTown/scripts.pory"
	signmsg
# 442 "data//maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PressStartToOpenMenuCopy
# 443 "data//maps/PalletTown/scripts.pory"
	normalmsg
# 444 "data//maps/PalletTown/scripts.pory"
	return
# 445 "data//maps/PalletTown/scripts.pory"

# 446 "data//maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyStartShowSign::
# 447 "data//maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 448 "data//maps/PalletTown/scripts.pory"
	waitmovement 0
# 449 "data//maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_SignLadyShowSign
# 450 "data//maps/PalletTown/scripts.pory"
	release
# 451 "data//maps/PalletTown/scripts.pory"
	end
