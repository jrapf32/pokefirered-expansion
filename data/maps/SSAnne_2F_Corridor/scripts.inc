# 1 "data//maps/SSAnne_2F_Corridor/scripts.pory"

# 2 "data//maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_MapScripts::
# 3 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	.byte 0
# 4 "data//maps/SSAnne_2F_Corridor/scripts.pory"

# 5 "data//maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTriggerLeft::
# 6 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	lockall
# 7 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	setvar VAR_TEMP_1, 0
# 8 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger
# 9 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	end
# 10 "data//maps/SSAnne_2F_Corridor/scripts.pory"

# 11 "data//maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTriggerMid::
# 12 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	lockall
# 13 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 14 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger
# 15 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	end
# 16 "data//maps/SSAnne_2F_Corridor/scripts.pory"

# 17 "data//maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTriggerRight::
# 18 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	lockall
# 19 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	setvar VAR_TEMP_1, 2
# 20 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger
# 21 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	end
# 22 "data//maps/SSAnne_2F_Corridor/scripts.pory"

# 23 "data//maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTrigger::
# 24 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 25 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	playse SE_EXIT
# 26 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	delay 5
# 27 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 28 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	addobject LOCALID_SS_ANNE_RIVAL
# 29 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	delay 10
# 30 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 31 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	waitmovement 0
# 32 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	delay 20
# 33 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, SSAnne_2F_Corridor_EventScript_RivalApproachLeft
# 34 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, SSAnne_2F_Corridor_EventScript_RivalApproachMid
# 35 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, SSAnne_2F_Corridor_EventScript_RivalApproachRight
# 36 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	msgbox SSAnne_2F_Corridor_Text_RivalIntro
# 37 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_SS_ANNE_RIVAL
# 38 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, SSAnne_2F_Corridor_EventScript_RivalSquirtle
# 39 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, SSAnne_2F_Corridor_EventScript_RivalBulbasaur
# 40 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, SSAnne_2F_Corridor_EventScript_RivalCharmander
# 41 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	msgbox SSAnne_2F_Corridor_Text_RivalPostBattle
# 42 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	closemessage
# 43 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	delay 10
# 44 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 45 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, SSAnne_2F_Corridor_EventScript_RivalExitLeft
# 46 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, SSAnne_2F_Corridor_EventScript_RivalExitMid
# 47 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, SSAnne_2F_Corridor_EventScript_RivalExitRight
# 48 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	fadedefaultbgm
# 49 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	removeobject LOCALID_SS_ANNE_RIVAL
# 50 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	setvar VAR_MAP_SCENE_S_S_ANNE_2F_CORRIDOR, 1
# 51 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	releaseall
# 52 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	end
# 53 "data//maps/SSAnne_2F_Corridor/scripts.pory"

# 54 "data//maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalApproachLeft::
# 55 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, SSAnne_2F_Corridor_Movement_RivalApproachLeft
# 56 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	waitmovement 0
# 57 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	return
# 58 "data//maps/SSAnne_2F_Corridor/scripts.pory"

# 59 "data//maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalApproachMid::
# 60 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, SSAnne_2F_Corridor_Movement_RivalApproachMid
# 61 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	applymovement LOCALID_PLAYER, SSAnne_2F_Corridor_Movement_PlayerFaceRivalMid
# 62 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	waitmovement 0
# 63 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	return
# 64 "data//maps/SSAnne_2F_Corridor/scripts.pory"

# 65 "data//maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalApproachRight::
# 66 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	applymovement LOCALID_PLAYER, SSAnne_2F_Corridor_Movement_PlayerFaceRivalRight
# 67 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, SSAnne_2F_Corridor_Movement_RivalApproachRight
# 68 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	waitmovement 0
# 69 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	return
# 70 "data//maps/SSAnne_2F_Corridor/scripts.pory"

# 71 "data//maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalSquirtle::
# 72 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SS_ANNE_SQUIRTLE, SSAnne_2F_Corridor_Text_RivalDefeat
# 73 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	return
# 74 "data//maps/SSAnne_2F_Corridor/scripts.pory"

# 75 "data//maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalBulbasaur::
# 76 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SS_ANNE_BULBASAUR, SSAnne_2F_Corridor_Text_RivalDefeat
# 77 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	return
# 78 "data//maps/SSAnne_2F_Corridor/scripts.pory"

# 79 "data//maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalCharmander::
# 80 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SS_ANNE_CHARMANDER, SSAnne_2F_Corridor_Text_RivalDefeat
# 81 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	return
# 82 "data//maps/SSAnne_2F_Corridor/scripts.pory"

# 83 "data//maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalExitLeft::
# 84 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, SSAnne_2F_Corridor_Movement_RivalExitLeft
# 85 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	waitmovement 0
# 86 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	return
# 87 "data//maps/SSAnne_2F_Corridor/scripts.pory"

# 88 "data//maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalExitMid::
# 89 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, SSAnne_2F_Corridor_Movement_RivalExitMid
# 90 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	waitmovement 0
# 91 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	return
# 92 "data//maps/SSAnne_2F_Corridor/scripts.pory"

# 93 "data//maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalExitRight::
# 94 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, SSAnne_2F_Corridor_Movement_RivalExitRight
# 95 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	waitmovement 0
# 96 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	return
# 97 "data//maps/SSAnne_2F_Corridor/scripts.pory"

# 98 "data//maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_Movement_PlayerFaceRivalRight::
# 99 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	delay_16
# 100 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	delay_16
# 101 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	delay_16
# 102 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	delay_16
# 103 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_in_place_faster_left
# 104 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	step_end
# 105 "data//maps/SSAnne_2F_Corridor/scripts.pory"

# 106 "data//maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_Movement_PlayerFaceRivalMid::
# 107 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	delay_16
# 108 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	delay_16
# 109 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	delay_16
# 110 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	delay_16
# 111 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_in_place_faster_left
# 112 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	step_end
# 113 "data//maps/SSAnne_2F_Corridor/scripts.pory"

# 114 "data//maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_Movement_RivalApproachLeft::
# 115 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 116 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 117 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 118 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	step_end
# 119 "data//maps/SSAnne_2F_Corridor/scripts.pory"

# 120 "data//maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_Movement_RivalApproachMid::
# 121 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 122 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 123 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 124 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 125 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_in_place_faster_right
# 126 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	step_end
# 127 "data//maps/SSAnne_2F_Corridor/scripts.pory"

# 128 "data//maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_Movement_RivalApproachRight::
# 129 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 130 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 131 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 132 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 133 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_right
# 134 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	delay_4
# 135 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	step_end
# 136 "data//maps/SSAnne_2F_Corridor/scripts.pory"

# 137 "data//maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_Movement_RivalExitLeft::
# 138 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_right
# 139 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 140 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 141 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 142 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 143 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 144 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 145 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 146 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	step_end
# 147 "data//maps/SSAnne_2F_Corridor/scripts.pory"

# 148 "data//maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_Movement_RivalExitMid::
# 149 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 150 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 151 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 152 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 153 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 154 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 155 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 156 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	step_end
# 157 "data//maps/SSAnne_2F_Corridor/scripts.pory"

# 158 "data//maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_Movement_RivalExitRight::
# 159 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 160 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 161 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 162 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 163 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 164 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 165 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 166 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	step_end
# 167 "data//maps/SSAnne_2F_Corridor/scripts.pory"

# 168 "data//maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_EventScript_Sailor::
# 169 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	msgbox SSAnne_2F_Corridor_Text_ThisShipIsLuxuryLiner, MSGBOX_NPC
# 170 "data//maps/SSAnne_2F_Corridor/scripts.pory"
	end
