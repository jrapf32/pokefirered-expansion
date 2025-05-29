# 1 "data//maps/PokemonTower_2F/scripts.pory"

# 2 "data//maps/PokemonTower_2F/scripts.pory"
PokemonTower_2F_MapScripts::
# 3 "data//maps/PokemonTower_2F/scripts.pory"
	.byte 0
# 4 "data//maps/PokemonTower_2F/scripts.pory"

# 5 "data//maps/PokemonTower_2F/scripts.pory"
PokemonTower_2F_EventScript_Channeler::
# 6 "data//maps/PokemonTower_2F/scripts.pory"
	msgbox PokemonTower_2F_Text_SilphScopeCouldUnmaskGhosts, MSGBOX_NPC
# 7 "data//maps/PokemonTower_2F/scripts.pory"
	end
# 8 "data//maps/PokemonTower_2F/scripts.pory"

# 9 "data//maps/PokemonTower_2F/scripts.pory"
PokemonTower_2F_EventScript_RivalTriggerRight::
# 10 "data//maps/PokemonTower_2F/scripts.pory"
	lockall
# 11 "data//maps/PokemonTower_2F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 12 "data//maps/PokemonTower_2F/scripts.pory"
	goto PokemonTower_2F_EventScript_Rival
# 13 "data//maps/PokemonTower_2F/scripts.pory"
	end
# 14 "data//maps/PokemonTower_2F/scripts.pory"

# 15 "data//maps/PokemonTower_2F/scripts.pory"
PokemonTower_2F_EventScript_RivalTriggerDown::
# 16 "data//maps/PokemonTower_2F/scripts.pory"
	lockall
# 17 "data//maps/PokemonTower_2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 18 "data//maps/PokemonTower_2F/scripts.pory"
	goto PokemonTower_2F_EventScript_Rival
# 19 "data//maps/PokemonTower_2F/scripts.pory"
	end
# 20 "data//maps/PokemonTower_2F/scripts.pory"

# 21 "data//maps/PokemonTower_2F/scripts.pory"
PokemonTower_2F_EventScript_Rival::
# 22 "data//maps/PokemonTower_2F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 23 "data//maps/PokemonTower_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 24 "data//maps/PokemonTower_2F/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PokemonTower_2F_EventScript_RivalFacePlayerRight
# 25 "data//maps/PokemonTower_2F/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PokemonTower_2F_EventScript_RivalFacePlayerDown
# 26 "data//maps/PokemonTower_2F/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_RIVAL, Common_Movement_ExclamationMark
# 27 "data//maps/PokemonTower_2F/scripts.pory"
	waitmovement 0
# 28 "data//maps/PokemonTower_2F/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_RIVAL, Common_Movement_Delay48
# 29 "data//maps/PokemonTower_2F/scripts.pory"
	waitmovement 0
# 30 "data//maps/PokemonTower_2F/scripts.pory"
	msgbox PokemonTower_2F_Text_RivalIntro
# 31 "data//maps/PokemonTower_2F/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_POKEMON_TOWER_RIVAL
# 32 "data//maps/PokemonTower_2F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, PokemonTower_2F_EventScript_RivalSquirtle
# 33 "data//maps/PokemonTower_2F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, PokemonTower_2F_EventScript_RivalBulbasaur
# 34 "data//maps/PokemonTower_2F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, PokemonTower_2F_EventScript_RivalCharmander
# 35 "data//maps/PokemonTower_2F/scripts.pory"
	msgbox PokemonTower_2F_Text_RivalPostBattle
# 36 "data//maps/PokemonTower_2F/scripts.pory"
	closemessage
# 37 "data//maps/PokemonTower_2F/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 38 "data//maps/PokemonTower_2F/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PokemonTower_2F_EventScript_RivalExitRight
# 39 "data//maps/PokemonTower_2F/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PokemonTower_2F_EventScript_RivalExitDown
# 40 "data//maps/PokemonTower_2F/scripts.pory"
	playse SE_EXIT
# 41 "data//maps/PokemonTower_2F/scripts.pory"
	delay 25
# 42 "data//maps/PokemonTower_2F/scripts.pory"
	fadedefaultbgm
# 43 "data//maps/PokemonTower_2F/scripts.pory"
	removeobject LOCALID_POKEMON_TOWER_RIVAL
# 44 "data//maps/PokemonTower_2F/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_TOWER_2F, 1
# 45 "data//maps/PokemonTower_2F/scripts.pory"
	releaseall
# 46 "data//maps/PokemonTower_2F/scripts.pory"
	end
# 47 "data//maps/PokemonTower_2F/scripts.pory"

# 48 "data//maps/PokemonTower_2F/scripts.pory"
PokemonTower_2F_EventScript_RivalFacePlayerRight::
# 49 "data//maps/PokemonTower_2F/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_RIVAL, Common_Movement_WalkInPlaceFasterRight
# 50 "data//maps/PokemonTower_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 51 "data//maps/PokemonTower_2F/scripts.pory"
	waitmovement 0
# 52 "data//maps/PokemonTower_2F/scripts.pory"
	return
# 53 "data//maps/PokemonTower_2F/scripts.pory"

# 54 "data//maps/PokemonTower_2F/scripts.pory"
PokemonTower_2F_EventScript_RivalFacePlayerDown::
# 55 "data//maps/PokemonTower_2F/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 56 "data//maps/PokemonTower_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 57 "data//maps/PokemonTower_2F/scripts.pory"
	waitmovement 0
# 58 "data//maps/PokemonTower_2F/scripts.pory"
	return
# 59 "data//maps/PokemonTower_2F/scripts.pory"

# 60 "data//maps/PokemonTower_2F/scripts.pory"
PokemonTower_2F_EventScript_RivalSquirtle::
# 61 "data//maps/PokemonTower_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_POKEMON_TOWER_SQUIRTLE, PokemonTower_2F_Text_RivalDefeat
# 62 "data//maps/PokemonTower_2F/scripts.pory"
	return
# 63 "data//maps/PokemonTower_2F/scripts.pory"

# 64 "data//maps/PokemonTower_2F/scripts.pory"
PokemonTower_2F_EventScript_RivalBulbasaur::
# 65 "data//maps/PokemonTower_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_POKEMON_TOWER_BULBASAUR, PokemonTower_2F_Text_RivalDefeat
# 66 "data//maps/PokemonTower_2F/scripts.pory"
	return
# 67 "data//maps/PokemonTower_2F/scripts.pory"

# 68 "data//maps/PokemonTower_2F/scripts.pory"
PokemonTower_2F_EventScript_RivalCharmander::
# 69 "data//maps/PokemonTower_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_POKEMON_TOWER_CHARMANDER, PokemonTower_2F_Text_RivalDefeat
# 70 "data//maps/PokemonTower_2F/scripts.pory"
	return
# 71 "data//maps/PokemonTower_2F/scripts.pory"

# 72 "data//maps/PokemonTower_2F/scripts.pory"
PokemonTower_2F_EventScript_RivalExitRight::
# 73 "data//maps/PokemonTower_2F/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_RIVAL, PokemonTower_2F_Movement_RivalExitRight
# 74 "data//maps/PokemonTower_2F/scripts.pory"
	waitmovement 0
# 75 "data//maps/PokemonTower_2F/scripts.pory"
	return
# 76 "data//maps/PokemonTower_2F/scripts.pory"

# 77 "data//maps/PokemonTower_2F/scripts.pory"
PokemonTower_2F_EventScript_RivalExitDown::
# 78 "data//maps/PokemonTower_2F/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_RIVAL, PokemonTower_2F_Movement_RivalExitDown
# 79 "data//maps/PokemonTower_2F/scripts.pory"
	waitmovement 0
# 80 "data//maps/PokemonTower_2F/scripts.pory"
	return
# 81 "data//maps/PokemonTower_2F/scripts.pory"

# 82 "data//maps/PokemonTower_2F/scripts.pory"
PokemonTower_2F_Movement_RivalExitRight::
# 83 "data//maps/PokemonTower_2F/scripts.pory"
	walk_down
# 84 "data//maps/PokemonTower_2F/scripts.pory"
	walk_right
# 85 "data//maps/PokemonTower_2F/scripts.pory"
	walk_right
# 86 "data//maps/PokemonTower_2F/scripts.pory"
	walk_down
# 87 "data//maps/PokemonTower_2F/scripts.pory"
	walk_down
# 88 "data//maps/PokemonTower_2F/scripts.pory"
	walk_down
# 89 "data//maps/PokemonTower_2F/scripts.pory"
	walk_down
# 90 "data//maps/PokemonTower_2F/scripts.pory"
	walk_in_place_faster_right
# 91 "data//maps/PokemonTower_2F/scripts.pory"
	step_end
# 92 "data//maps/PokemonTower_2F/scripts.pory"

# 93 "data//maps/PokemonTower_2F/scripts.pory"
PokemonTower_2F_Movement_RivalExitDown::
# 94 "data//maps/PokemonTower_2F/scripts.pory"
	walk_right
# 95 "data//maps/PokemonTower_2F/scripts.pory"
	walk_right
# 96 "data//maps/PokemonTower_2F/scripts.pory"
	walk_down
# 97 "data//maps/PokemonTower_2F/scripts.pory"
	walk_down
# 98 "data//maps/PokemonTower_2F/scripts.pory"
	walk_down
# 99 "data//maps/PokemonTower_2F/scripts.pory"
	walk_down
# 100 "data//maps/PokemonTower_2F/scripts.pory"
	walk_down
# 101 "data//maps/PokemonTower_2F/scripts.pory"
	walk_in_place_faster_right
# 102 "data//maps/PokemonTower_2F/scripts.pory"
	step_end
