# 1 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"

# 2 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_MapScripts::
# 3 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_IcefallCave_Back_OnTransition
# 4 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	.byte 0
# 5 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"

# 6 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_OnTransition::
# 7 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	call_if_eq VAR_MAP_SCENE_ICEFALL_CAVE_BACK, 1, FourIsland_IcefallCave_Back_EventScript_HideLorelei
# 8 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	end
# 9 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"

# 10 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_HideLorelei::
# 11 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	setflag FLAG_HIDE_ICEFALL_CAVE_LORELEI
# 12 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	return
# 13 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"

# 14 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_LoreleiRocketsScene::
# 15 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	lockall
# 16 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 17 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_LoreleiKeepHandsOffMons
# 18 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET1, FourIsland_IcefallCave_Back_Movement_WalkInPlaceDown
# 19 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 20 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 21 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_ShutItLadyLeaveUsBe
# 22 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	closemessage
# 23 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	playse SE_PIN
# 24 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, Common_Movement_ExclamationMark
# 25 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 26 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, Common_Movement_WalkInPlaceFasterDown
# 27 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 28 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, Common_Movement_Delay48
# 29 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 30 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 31 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_LoreleiPlayerHelpMeKickPoachersOut
# 32 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	closemessage
# 33 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, Common_Movement_WalkInPlaceFasterRight
# 34 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 35 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay 18
# 36 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, Common_Movement_WalkInPlaceFasterDown
# 37 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 38 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay 35
# 39 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET3, FourIsland_IcefallCave_Back_Movement_Rocket3FaceLorelei
# 40 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, FourIsland_IcefallCave_Back_Movement_LoreleiToRockets
# 41 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_PLAYER, FourIsland_IcefallCave_Back_Movement_PlayerToRockets
# 42 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 43 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET2, FourIsland_IcefallCave_Back_Movement_WalkInPlaceDown
# 44 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 45 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	playbgm MUS_ENCOUNTER_ROCKET, 0
# 46 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 47 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_GruntIntro
# 48 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ICEFALL_ROCKET3
# 49 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_45, FourIsland_IcefallCave_Back_Text_GruntDefeat
# 50 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, FourIsland_IcefallCave_Back_Movement_WalkInPlaceUp
# 51 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 52 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 53 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_LoreleiWhereHaveYouTakenMons
# 54 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 55 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_NotTellingYouThat
# 56 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 57 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	message FourIsland_IcefallCave_Back_Text_LoreleiWellDeepFreezeYou
# 58 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmessage
# 59 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitse
# 60 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	playmoncry SPECIES_LAPRAS, CRY_MODE_ENCOUNTER
# 61 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitbuttonpress
# 62 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmoncry
# 63 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET1, FourIsland_IcefallCave_Back_Movement_Rocket1ReactToThreat
# 64 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 65 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 66 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_OkayRocketWareHouseFiveIsland
# 67 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	closemessage
# 68 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, FourIsland_IcefallCave_Back_Movement_LoreleiWatchRocketsExit
# 69 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_PLAYER, FourIsland_IcefallCave_Back_Movement_PlayerWatchRocketsExit
# 70 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET1, FourIsland_IcefallCave_Back_Movement_Rocket1Exit
# 71 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET2, FourIsland_IcefallCave_Back_Movement_Rocket2Exit
# 72 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET3, FourIsland_IcefallCave_Back_Movement_Rocket3Exit
# 73 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 74 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	removeobject LOCALID_ICEFALL_ROCKET1
# 75 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	removeobject LOCALID_ICEFALL_ROCKET2
# 76 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	removeobject LOCALID_ICEFALL_ROCKET3
# 77 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay 50
# 78 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, FourIsland_IcefallCave_Back_Movement_LoreleiWalkToPlayer
# 79 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 80 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 81 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 82 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 83 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_ThankYouThisIsAwful
# 84 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	setflag FLAG_HIDE_RUIN_VALLEY_SCIENTIST
# 85 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	clearflag FLAG_HIDE_LORELEI_IN_HER_HOUSE
# 86 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	setvar VAR_MAP_SCENE_ICEFALL_CAVE_BACK, 1
# 87 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	releaseall
# 88 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	end
# 89 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"

# 90 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_PlayerToRockets::
# 91 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_up
# 92 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_up
# 93 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_right
# 94 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_up
# 95 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 96 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"

# 97 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_PlayerWatchRocketsExit::
# 98 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 99 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_in_place_faster_left
# 100 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 101 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 102 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_in_place_faster_down
# 103 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 104 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"

# 105 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_WalkInPlaceDown::
# 106 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_in_place_down
# 107 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 108 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"

# 109 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_UnusedPushRight::
# 110 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	lock_facing_direction
# 111 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_right
# 112 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	unlock_facing_direction
# 113 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 114 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"

# 115 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_Rocket1ReactToThreat::
# 116 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_in_place_fast_down
# 117 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 118 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"

# 119 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_Rocket1Exit::
# 120 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_right
# 121 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_down
# 122 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 123 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 124 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 125 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 126 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 127 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 128 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 129 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 130 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"

# 131 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_Rocket2Exit::
# 132 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 133 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_left
# 134 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_down
# 135 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 136 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 137 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 138 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 139 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 140 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 141 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 142 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 143 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"

# 144 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_Rocket3Exit::
# 145 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 146 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_down
# 147 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 148 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_down
# 149 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_right
# 150 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_right
# 151 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 152 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 153 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 154 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 155 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 156 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 157 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"

# 158 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_Rocket3FaceLorelei::
# 159 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 160 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_8
# 161 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_in_place_faster_right
# 162 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 163 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"

# 164 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_UnusedWalkLeft::
# 165 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_left
# 166 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_left
# 167 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 168 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"

# 169 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_LoreleiToRockets::
# 170 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_left
# 171 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_up
# 172 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 173 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"

# 174 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_WalkInPlaceUp::
# 175 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_in_place_up
# 176 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 177 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"

# 178 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_LoreleiWatchRocketsExit::
# 179 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_8
# 180 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_in_place_faster_right
# 181 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 182 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 183 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_in_place_faster_down
# 184 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 185 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"

# 186 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_LoreleiWalkToPlayer::
# 187 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_right
# 188 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 189 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"

# 190 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_Lorelei::
# 191 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_ThankYouThisIsAwful, MSGBOX_NPC
# 192 "data//maps/FourIsland_IcefallCave_Back/scripts.pory"
	end
