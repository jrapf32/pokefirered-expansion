# 1 "data//maps/CeruleanCity/scripts.pory"

# 2 "data//maps/CeruleanCity/scripts.pory"

# 3 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_MapScripts::
# 4 "data//maps/CeruleanCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCity_OnTransition
# 5 "data//maps/CeruleanCity/scripts.pory"
	.byte 0
# 6 "data//maps/CeruleanCity/scripts.pory"

# 7 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_OnTransition::
# 8 "data//maps/CeruleanCity/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_CERULEAN_CITY
# 9 "data//maps/CeruleanCity/scripts.pory"
	call_if_unset FLAG_GOT_SS_TICKET, CeruleanCity_EventScript_BlockExits
# 10 "data//maps/CeruleanCity/scripts.pory"
	end
# 11 "data//maps/CeruleanCity/scripts.pory"

# 12 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_BlockExits::
# 13 "data//maps/CeruleanCity/scripts.pory"
	setobjectxyperm LOCALID_CERULEAN_POLICEMAN, 30, 12
# 14 "data//maps/CeruleanCity/scripts.pory"
	setobjectxyperm LOCALID_CERULEAN_SLOWBRO, 26, 31
# 15 "data//maps/CeruleanCity/scripts.pory"
	setobjectxyperm LOCALID_CERULEAN_LASS, 27, 31
# 16 "data//maps/CeruleanCity/scripts.pory"
	return
# 17 "data//maps/CeruleanCity/scripts.pory"

# 18 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalTriggerLeft::
# 19 "data//maps/CeruleanCity/scripts.pory"
	lockall
# 20 "data//maps/CeruleanCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 21 "data//maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_Rival
# 22 "data//maps/CeruleanCity/scripts.pory"
	end
# 23 "data//maps/CeruleanCity/scripts.pory"

# 24 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalTriggerMid::
# 25 "data//maps/CeruleanCity/scripts.pory"
	lockall
# 26 "data//maps/CeruleanCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 27 "data//maps/CeruleanCity/scripts.pory"
	setobjectxyperm LOCALID_CERULEAN_RIVAL, 23, 0
# 28 "data//maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_Rival
# 29 "data//maps/CeruleanCity/scripts.pory"
	end
# 30 "data//maps/CeruleanCity/scripts.pory"

# 31 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalTriggerRight::
# 32 "data//maps/CeruleanCity/scripts.pory"
	lockall
# 33 "data//maps/CeruleanCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 34 "data//maps/CeruleanCity/scripts.pory"
	setobjectxyperm LOCALID_CERULEAN_RIVAL, 24, 0
# 35 "data//maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_Rival
# 36 "data//maps/CeruleanCity/scripts.pory"
	end
# 37 "data//maps/CeruleanCity/scripts.pory"

# 38 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Rival::
# 39 "data//maps/CeruleanCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 40 "data//maps/CeruleanCity/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 2
# 41 "data//maps/CeruleanCity/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 42 "data//maps/CeruleanCity/scripts.pory"
	addobject LOCALID_CERULEAN_RIVAL
# 43 "data//maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_RIVAL, CeruleanCity_Movement_RivalEnter
# 44 "data//maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 45 "data//maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_RivalIntro
# 46 "data//maps/CeruleanCity/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_CERULEAN_RIVAL
# 47 "data//maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, CeruleanCity_EventScript_RivalSquirtle
# 48 "data//maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, CeruleanCity_EventScript_RivalBulbasaur
# 49 "data//maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, CeruleanCity_EventScript_RivalCharmander
# 50 "data//maps/CeruleanCity/scripts.pory"
	famechecker FAMECHECKER_BILL, 0
# 51 "data//maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_RivalPostBattle
# 52 "data//maps/CeruleanCity/scripts.pory"
	closemessage
# 53 "data//maps/CeruleanCity/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 54 "data//maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CeruleanCity_EventScript_RivalStartExit
# 55 "data//maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CeruleanCity_EventScript_RivalStartExit
# 56 "data//maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, CeruleanCity_EventScript_RivalStartExitRight
# 57 "data//maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_OhRightLittlePresentAsFavor
# 58 "data//maps/CeruleanCity/scripts.pory"
	setvar VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 1
# 59 "data//maps/CeruleanCity/scripts.pory"
	setflag FLAG_GOT_FAME_CHECKER
# 60 "data//maps/CeruleanCity/scripts.pory"
	giveitem ITEM_FAME_CHECKER
# 61 "data//maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_ExplainFameCheckerSmellYa
# 62 "data//maps/CeruleanCity/scripts.pory"
	closemessage
# 63 "data//maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_RIVAL, CeruleanCity_Movement_RivalExit
# 64 "data//maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 65 "data//maps/CeruleanCity/scripts.pory"
	fadedefaultbgm
# 66 "data//maps/CeruleanCity/scripts.pory"
	removeobject LOCALID_CERULEAN_RIVAL
# 67 "data//maps/CeruleanCity/scripts.pory"
	releaseall
# 68 "data//maps/CeruleanCity/scripts.pory"
	end
# 69 "data//maps/CeruleanCity/scripts.pory"

# 70 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalSquirtle::
# 71 "data//maps/CeruleanCity/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CERULEAN_SQUIRTLE, CeruleanCity_Text_RivalDefeat
# 72 "data//maps/CeruleanCity/scripts.pory"
	return
# 73 "data//maps/CeruleanCity/scripts.pory"

# 74 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalBulbasaur::
# 75 "data//maps/CeruleanCity/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CERULEAN_BULBASAUR, CeruleanCity_Text_RivalDefeat
# 76 "data//maps/CeruleanCity/scripts.pory"
	return
# 77 "data//maps/CeruleanCity/scripts.pory"

# 78 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalCharmander::
# 79 "data//maps/CeruleanCity/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CERULEAN_CHARMANDER, CeruleanCity_Text_RivalDefeat
# 80 "data//maps/CeruleanCity/scripts.pory"
	return
# 81 "data//maps/CeruleanCity/scripts.pory"

# 82 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalStartExit::
# 83 "data//maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_PLAYER, CeruleanCity_Movement_PlayerWatchRivalExit
# 84 "data//maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_RIVAL, CeruleanCity_Movement_RivalStartExit
# 85 "data//maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 86 "data//maps/CeruleanCity/scripts.pory"
	return
# 87 "data//maps/CeruleanCity/scripts.pory"

# 88 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalStartExitRight::
# 89 "data//maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_PLAYER, CeruleanCity_Movement_PlayerWatchRivalExitRight
# 90 "data//maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_RIVAL, CeruleanCity_Movement_RivalStartExitRight
# 91 "data//maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 92 "data//maps/CeruleanCity/scripts.pory"
	return
# 93 "data//maps/CeruleanCity/scripts.pory"

# 94 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_PlayerWatchRivalExit::
# 95 "data//maps/CeruleanCity/scripts.pory"
	delay_16
# 96 "data//maps/CeruleanCity/scripts.pory"
	delay_8
# 97 "data//maps/CeruleanCity/scripts.pory"
	walk_in_place_faster_right
# 98 "data//maps/CeruleanCity/scripts.pory"
	delay_16
# 99 "data//maps/CeruleanCity/scripts.pory"
	walk_in_place_faster_down
# 100 "data//maps/CeruleanCity/scripts.pory"
	step_end
# 101 "data//maps/CeruleanCity/scripts.pory"

# 102 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_PlayerWatchRivalExitRight::
# 103 "data//maps/CeruleanCity/scripts.pory"
	delay_16
# 104 "data//maps/CeruleanCity/scripts.pory"
	delay_8
# 105 "data//maps/CeruleanCity/scripts.pory"
	walk_in_place_faster_left
# 106 "data//maps/CeruleanCity/scripts.pory"
	delay_16
# 107 "data//maps/CeruleanCity/scripts.pory"
	walk_in_place_faster_down
# 108 "data//maps/CeruleanCity/scripts.pory"
	step_end
# 109 "data//maps/CeruleanCity/scripts.pory"

# 110 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_RivalEnter::
# 111 "data//maps/CeruleanCity/scripts.pory"
	walk_down
# 112 "data//maps/CeruleanCity/scripts.pory"
	walk_down
# 113 "data//maps/CeruleanCity/scripts.pory"
	walk_down
# 114 "data//maps/CeruleanCity/scripts.pory"
	walk_down
# 115 "data//maps/CeruleanCity/scripts.pory"
	walk_down
# 116 "data//maps/CeruleanCity/scripts.pory"
	step_end
# 117 "data//maps/CeruleanCity/scripts.pory"

# 118 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_RivalStartExit::
# 119 "data//maps/CeruleanCity/scripts.pory"
	walk_right
# 120 "data//maps/CeruleanCity/scripts.pory"
	walk_down
# 121 "data//maps/CeruleanCity/scripts.pory"
	walk_down
# 122 "data//maps/CeruleanCity/scripts.pory"
	walk_down
# 123 "data//maps/CeruleanCity/scripts.pory"
	walk_down
# 124 "data//maps/CeruleanCity/scripts.pory"
	walk_down
# 125 "data//maps/CeruleanCity/scripts.pory"
	walk_down
# 126 "data//maps/CeruleanCity/scripts.pory"
	walk_down
# 127 "data//maps/CeruleanCity/scripts.pory"
	delay_16
# 128 "data//maps/CeruleanCity/scripts.pory"
	delay_16
# 129 "data//maps/CeruleanCity/scripts.pory"
	walk_left
# 130 "data//maps/CeruleanCity/scripts.pory"
	walk_up
# 131 "data//maps/CeruleanCity/scripts.pory"
	walk_up
# 132 "data//maps/CeruleanCity/scripts.pory"
	walk_up
# 133 "data//maps/CeruleanCity/scripts.pory"
	walk_up
# 134 "data//maps/CeruleanCity/scripts.pory"
	walk_up
# 135 "data//maps/CeruleanCity/scripts.pory"
	step_end
# 136 "data//maps/CeruleanCity/scripts.pory"

# 137 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_RivalStartExitRight::
# 138 "data//maps/CeruleanCity/scripts.pory"
	walk_left
# 139 "data//maps/CeruleanCity/scripts.pory"
	walk_down
# 140 "data//maps/CeruleanCity/scripts.pory"
	walk_down
# 141 "data//maps/CeruleanCity/scripts.pory"
	walk_down
# 142 "data//maps/CeruleanCity/scripts.pory"
	walk_down
# 143 "data//maps/CeruleanCity/scripts.pory"
	walk_down
# 144 "data//maps/CeruleanCity/scripts.pory"
	walk_down
# 145 "data//maps/CeruleanCity/scripts.pory"
	walk_down
# 146 "data//maps/CeruleanCity/scripts.pory"
	delay_16
# 147 "data//maps/CeruleanCity/scripts.pory"
	delay_16
# 148 "data//maps/CeruleanCity/scripts.pory"
	walk_right
# 149 "data//maps/CeruleanCity/scripts.pory"
	walk_up
# 150 "data//maps/CeruleanCity/scripts.pory"
	walk_up
# 151 "data//maps/CeruleanCity/scripts.pory"
	walk_up
# 152 "data//maps/CeruleanCity/scripts.pory"
	walk_up
# 153 "data//maps/CeruleanCity/scripts.pory"
	walk_up
# 154 "data//maps/CeruleanCity/scripts.pory"
	step_end
# 155 "data//maps/CeruleanCity/scripts.pory"

# 156 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_RivalExit::
# 157 "data//maps/CeruleanCity/scripts.pory"
	walk_down
# 158 "data//maps/CeruleanCity/scripts.pory"
	walk_down
# 159 "data//maps/CeruleanCity/scripts.pory"
	walk_down
# 160 "data//maps/CeruleanCity/scripts.pory"
	walk_down
# 161 "data//maps/CeruleanCity/scripts.pory"
	walk_down
# 162 "data//maps/CeruleanCity/scripts.pory"
	walk_down
# 163 "data//maps/CeruleanCity/scripts.pory"
	walk_down
# 164 "data//maps/CeruleanCity/scripts.pory"
	step_end
# 165 "data//maps/CeruleanCity/scripts.pory"

# 166 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Grunt::
# 167 "data//maps/CeruleanCity/scripts.pory"
	lock
# 168 "data//maps/CeruleanCity/scripts.pory"
	faceplayer
# 169 "data//maps/CeruleanCity/scripts.pory"
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_5, CeruleanCity_EventScript_GruntDefeated
# 170 "data//maps/CeruleanCity/scripts.pory"
	message CeruleanCity_Text_GruntIntro
# 171 "data//maps/CeruleanCity/scripts.pory"
	waitmessage
# 172 "data//maps/CeruleanCity/scripts.pory"
	playbgm MUS_ENCOUNTER_ROCKET, 0
# 173 "data//maps/CeruleanCity/scripts.pory"
	waitbuttonpress
# 174 "data//maps/CeruleanCity/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_5, CeruleanCity_Text_GruntDefeat
# 175 "data//maps/CeruleanCity/scripts.pory"
	setvar VAR_MAP_SCENE_CERULEAN_CITY_ROCKET, 1
# 176 "data//maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_GruntDefeated
# 177 "data//maps/CeruleanCity/scripts.pory"
	end
# 178 "data//maps/CeruleanCity/scripts.pory"

# 179 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_GruntDefeated::
# 180 "data//maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_OkayIllReturnStolenTM
# 181 "data//maps/CeruleanCity/scripts.pory"
	checkitemspace ITEM_TM28
# 182 "data//maps/CeruleanCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_EventScript_NoRoomForTM28
# 183 "data//maps/CeruleanCity/scripts.pory"
	giveitem_msg CeruleanCity_Text_RecoveredTM28FromGrunt, ITEM_TM28
# 184 "data//maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_BetterGetMovingBye
# 185 "data//maps/CeruleanCity/scripts.pory"
	closemessage
# 186 "data//maps/CeruleanCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 187 "data//maps/CeruleanCity/scripts.pory"
	removeobject LOCALID_CERULEAN_GRUNT
# 188 "data//maps/CeruleanCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 189 "data//maps/CeruleanCity/scripts.pory"
	setflag FLAG_GOT_TM28_FROM_ROCKET
# 190 "data//maps/CeruleanCity/scripts.pory"
	release
# 191 "data//maps/CeruleanCity/scripts.pory"
	end
# 192 "data//maps/CeruleanCity/scripts.pory"

# 193 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_NoRoomForTM28::
# 194 "data//maps/CeruleanCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 195 "data//maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_MakeRoomForThisCantRun
# 196 "data//maps/CeruleanCity/scripts.pory"
	release
# 197 "data//maps/CeruleanCity/scripts.pory"
	end
# 198 "data//maps/CeruleanCity/scripts.pory"

# 199 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_GruntTriggerTop::
# 200 "data//maps/CeruleanCity/scripts.pory"
	lockall
# 201 "data//maps/CeruleanCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 202 "data//maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_GRUNT, Common_Movement_WalkInPlaceFasterUp
# 203 "data//maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 204 "data//maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 205 "data//maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 206 "data//maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_GruntTrigger
# 207 "data//maps/CeruleanCity/scripts.pory"
	end
# 208 "data//maps/CeruleanCity/scripts.pory"

# 209 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_GruntTriggerBottom::
# 210 "data//maps/CeruleanCity/scripts.pory"
	lockall
# 211 "data//maps/CeruleanCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 212 "data//maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_GRUNT, Common_Movement_WalkInPlaceFasterDown
# 213 "data//maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 214 "data//maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 215 "data//maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 216 "data//maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_GruntTrigger
# 217 "data//maps/CeruleanCity/scripts.pory"
	end
# 218 "data//maps/CeruleanCity/scripts.pory"

# 219 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_GruntTrigger::
# 220 "data//maps/CeruleanCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 221 "data//maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_GruntIntro
# 222 "data//maps/CeruleanCity/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_CERULEAN_GRUNT
# 223 "data//maps/CeruleanCity/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_5, CeruleanCity_Text_GruntDefeat
# 224 "data//maps/CeruleanCity/scripts.pory"
	setvar VAR_MAP_SCENE_CERULEAN_CITY_ROCKET, 1
# 225 "data//maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_GruntDefeated
# 226 "data//maps/CeruleanCity/scripts.pory"
	end
# 227 "data//maps/CeruleanCity/scripts.pory"

# 228 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Policeman::
# 229 "data//maps/CeruleanCity/scripts.pory"
	lock
# 230 "data//maps/CeruleanCity/scripts.pory"
	faceplayer
# 231 "data//maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_PeopleHereWereRobbed
# 232 "data//maps/CeruleanCity/scripts.pory"
	closemessage
# 233 "data//maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_POLICEMAN, Common_Movement_FaceOriginalDirection
# 234 "data//maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 235 "data//maps/CeruleanCity/scripts.pory"
	release
# 236 "data//maps/CeruleanCity/scripts.pory"
	end
# 237 "data//maps/CeruleanCity/scripts.pory"

# 238 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_LittleBoy::
# 239 "data//maps/CeruleanCity/scripts.pory"
	lock
# 240 "data//maps/CeruleanCity/scripts.pory"
	faceplayer
# 241 "data//maps/CeruleanCity/scripts.pory"
	goto_if_set FLAG_GOT_SS_TICKET, CeruleanCity_EventScript_LittleBoySlowbroMoved
# 242 "data//maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_IfSlowbroWasntThereCouldCutTree
# 243 "data//maps/CeruleanCity/scripts.pory"
	release
# 244 "data//maps/CeruleanCity/scripts.pory"
	end
# 245 "data//maps/CeruleanCity/scripts.pory"

# 246 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_LittleBoySlowbroMoved::
# 247 "data//maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_YouCanCutDownSmallTrees
# 248 "data//maps/CeruleanCity/scripts.pory"
	release
# 249 "data//maps/CeruleanCity/scripts.pory"
	end
# 250 "data//maps/CeruleanCity/scripts.pory"

# 251 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_BaldingMan::
# 252 "data//maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_PokemonEncyclopediaAmusing, MSGBOX_NPC
# 253 "data//maps/CeruleanCity/scripts.pory"
	end
# 254 "data//maps/CeruleanCity/scripts.pory"

# 255 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Youngster::
# 256 "data//maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_TrainerLifeIsToughIsntIt, MSGBOX_NPC
# 257 "data//maps/CeruleanCity/scripts.pory"
	end
# 258 "data//maps/CeruleanCity/scripts.pory"

# 259 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_CeruleanCaveGuard::
# 260 "data//maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_ThisIsCeruleanCave, MSGBOX_NPC
# 261 "data//maps/CeruleanCity/scripts.pory"
	end
# 262 "data//maps/CeruleanCity/scripts.pory"

# 263 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Woman::
# 264 "data//maps/CeruleanCity/scripts.pory"
	lock
# 265 "data//maps/CeruleanCity/scripts.pory"
	faceplayer
# 266 "data//maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_WantBrightRedBicycle
# 267 "data//maps/CeruleanCity/scripts.pory"
	closemessage
# 268 "data//maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_WOMAN, Common_Movement_FaceOriginalDirection
# 269 "data//maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 270 "data//maps/CeruleanCity/scripts.pory"
	release
# 271 "data//maps/CeruleanCity/scripts.pory"
	end
# 272 "data//maps/CeruleanCity/scripts.pory"

# 273 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Lass::
# 274 "data//maps/CeruleanCity/scripts.pory"
	lock
# 275 "data//maps/CeruleanCity/scripts.pory"
	random 3
# 276 "data//maps/CeruleanCity/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 277 "data//maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, CeruleanCity_EventScript_SlowbroCommand1
# 278 "data//maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, CeruleanCity_EventScript_SlowbroCommand2
# 279 "data//maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, CeruleanCity_EventScript_SlowbroCommand3
# 280 "data//maps/CeruleanCity/scripts.pory"
	waitmessage
# 281 "data//maps/CeruleanCity/scripts.pory"
	delay 40
# 282 "data//maps/CeruleanCity/scripts.pory"
	playse SE_PIN
# 283 "data//maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_SLOWBRO, Common_Movement_QuestionMark
# 284 "data//maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 285 "data//maps/CeruleanCity/scripts.pory"
	delay 30
# 286 "data//maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, CeruleanCity_EventScript_SlowbroFailed1
# 287 "data//maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, CeruleanCity_EventScript_SlowbroFailed2
# 288 "data//maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, CeruleanCity_EventScript_SlowbroFailed3
# 289 "data//maps/CeruleanCity/scripts.pory"
	release
# 290 "data//maps/CeruleanCity/scripts.pory"
	end
# 291 "data//maps/CeruleanCity/scripts.pory"

# 292 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroCommand1::
# 293 "data//maps/CeruleanCity/scripts.pory"
	message CeruleanCity_Text_SlowbroUseSonicboom
# 294 "data//maps/CeruleanCity/scripts.pory"
	return
# 295 "data//maps/CeruleanCity/scripts.pory"

# 296 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroCommand2::
# 297 "data//maps/CeruleanCity/scripts.pory"
	message CeruleanCity_Text_SlowbroPunch
# 298 "data//maps/CeruleanCity/scripts.pory"
	return
# 299 "data//maps/CeruleanCity/scripts.pory"

# 300 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroCommand3::
# 301 "data//maps/CeruleanCity/scripts.pory"
	message CeruleanCity_Text_SlowbroWithdraw
# 302 "data//maps/CeruleanCity/scripts.pory"
	return
# 303 "data//maps/CeruleanCity/scripts.pory"

# 304 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroFailed1::
# 305 "data//maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroPayAttention
# 306 "data//maps/CeruleanCity/scripts.pory"
	return
# 307 "data//maps/CeruleanCity/scripts.pory"

# 308 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroFailed2::
# 309 "data//maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_NoYouBlewItAgain
# 310 "data//maps/CeruleanCity/scripts.pory"
	return
# 311 "data//maps/CeruleanCity/scripts.pory"

# 312 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroFailed3::
# 313 "data//maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_HardToControlMonsObedience
# 314 "data//maps/CeruleanCity/scripts.pory"
	return
# 315 "data//maps/CeruleanCity/scripts.pory"

# 316 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Slowbro::
# 317 "data//maps/CeruleanCity/scripts.pory"
	lock
# 318 "data//maps/CeruleanCity/scripts.pory"
	random 4
# 319 "data//maps/CeruleanCity/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 320 "data//maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, CeruleanCity_EventScript_SlowbroText1
# 321 "data//maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, CeruleanCity_EventScript_SlowbroText2
# 322 "data//maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, CeruleanCity_EventScript_SlowbroText3
# 323 "data//maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, CeruleanCity_EventScript_SlowbroText4
# 324 "data//maps/CeruleanCity/scripts.pory"
	release
# 325 "data//maps/CeruleanCity/scripts.pory"
	end
# 326 "data//maps/CeruleanCity/scripts.pory"

# 327 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroText1::
# 328 "data//maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroTookSnooze
# 329 "data//maps/CeruleanCity/scripts.pory"
	return
# 330 "data//maps/CeruleanCity/scripts.pory"

# 331 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroText2::
# 332 "data//maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroLoafingAround
# 333 "data//maps/CeruleanCity/scripts.pory"
	return
# 334 "data//maps/CeruleanCity/scripts.pory"

# 335 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroText3::
# 336 "data//maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroTurnedAway
# 337 "data//maps/CeruleanCity/scripts.pory"
	return
# 338 "data//maps/CeruleanCity/scripts.pory"

# 339 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroText4::
# 340 "data//maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroIgnoredOrders
# 341 "data//maps/CeruleanCity/scripts.pory"
	return
# 342 "data//maps/CeruleanCity/scripts.pory"

# 343 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_CitySign::
# 344 "data//maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_CitySign, MSGBOX_SIGN
# 345 "data//maps/CeruleanCity/scripts.pory"
	end
# 346 "data//maps/CeruleanCity/scripts.pory"

# 347 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_TrainerTips::
# 348 "data//maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_TrainerTipsHeldItems, MSGBOX_SIGN
# 349 "data//maps/CeruleanCity/scripts.pory"
	end
# 350 "data//maps/CeruleanCity/scripts.pory"

# 351 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_BikeShopSign::
# 352 "data//maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_BikeShopSign, MSGBOX_SIGN
# 353 "data//maps/CeruleanCity/scripts.pory"
	end
# 354 "data//maps/CeruleanCity/scripts.pory"

# 355 "data//maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_GymSign::
# 356 "data//maps/CeruleanCity/scripts.pory"
	lockall
# 357 "data//maps/CeruleanCity/scripts.pory"
	famechecker FAMECHECKER_MISTY, 0
# 358 "data//maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_GymSign
# 359 "data//maps/CeruleanCity/scripts.pory"
	releaseall
# 360 "data//maps/CeruleanCity/scripts.pory"
	end
