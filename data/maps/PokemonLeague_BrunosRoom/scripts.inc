# 1 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"

# 2 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_MapScripts::
# 3 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_BrunosRoom_OnResume
# 4 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_BrunosRoom_OnLoad
# 5 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_BrunosRoom_OnWarp
# 6 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_BrunosRoom_OnFrame
# 7 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	.byte 0
# 8 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"

# 9 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_OnResume::
# 10 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	setvar VAR_0x8004, 1
# 11 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
# 12 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	end
# 13 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"

# 14 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_OnLoad::
# 15 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_BRUNO, PokemonLeague_BrunosRoom_EventScript_SetDoorOpen
# 16 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_MAP_SCENE_POKEMON_LEAGUE, 2, PokemonLeague_BrunosRoom_EventScript_CloseEntry
# 17 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	end
# 18 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"

# 19 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_CloseEntry::
# 20 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	call PokemonLeague_EventScript_CloseEntry
# 21 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	return
# 22 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"

# 23 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_SetDoorOpen::
# 24 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	call PokemonLeague_EventScript_SetDoorOpen
# 25 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	return
# 26 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"

# 27 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_OnWarp::
# 28 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_BrunosRoom_EventScript_TurnPlayerNorth
# 29 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	.2byte 0
# 30 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"

# 31 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_TurnPlayerNorth::
# 32 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 33 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	end
# 34 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"

# 35 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_OnFrame::
# 36 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	map_script_2 VAR_MAP_SCENE_POKEMON_LEAGUE, 1, PokemonLeague_BrunosRoom_EventScript_EnterRoom
# 37 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	.2byte 0
# 38 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"

# 39 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_EnterRoom::
# 40 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	lockall
# 41 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	call PokemonLeague_EventScript_EnterRoom
# 42 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 2
# 43 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	releaseall
# 44 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	end
# 45 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"

# 46 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_Bruno::
# 47 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	lock
# 48 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	faceplayer
# 49 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	famechecker FAMECHECKER_BRUNO, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 50 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_BRUNO, PokemonLeague_BrunosRoom_EventScript_PostBattle
# 51 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	famechecker FAMECHECKER_BRUNO, 0
# 52 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	famechecker FAMECHECKER_BRUNO, 1
# 53 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_unset FLAG_SYS_GAME_CLEAR, PokemonLeague_BrunosRoom_EventScript_Intro
# 54 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_BrunosRoom_EventScript_RematchIntro
# 55 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	setflag FLAG_TEMP_3
# 56 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	setflag FLAG_TEMP_5
# 57 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_unset FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_BrunosRoom_EventScript_Battle
# 58 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_set FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_BrunosRoom_EventScript_Rematch
# 59 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	clearflag FLAG_TEMP_5
# 60 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	goto PokemonLeague_BrunosRoom_EventScript_DefeatedBruno
# 61 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	end
# 62 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"

# 63 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_Intro::
# 64 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	msgbox PokemonLeague_BrunosRoom_Text_Intro
# 65 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	return
# 66 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"

# 67 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_RematchIntro::
# 68 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	msgbox PokemonLeague_BrunosRoom_Text_RematchIntro
# 69 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	return
# 70 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"

# 71 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_Battle::
# 72 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_BRUNO, PokemonLeague_BrunosRoom_Text_Defeat
# 73 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	return
# 74 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"

# 75 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_Rematch::
# 76 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_BRUNO_2, PokemonLeague_BrunosRoom_Text_Defeat
# 77 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	return
# 78 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"

# 79 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_PostBattle::
# 80 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	msgbox PokemonLeague_BrunosRoom_Text_PostBattle
# 81 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	closemessage
# 82 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayRight
# 83 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayLeft
# 84 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
# 85 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
# 86 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	release
# 87 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	end
# 88 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"

# 89 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_DefeatedBruno::
# 90 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	setflag FLAG_DEFEATED_BRUNO
# 91 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	call PokemonLeague_EventScript_OpenDoor
# 92 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	msgbox PokemonLeague_BrunosRoom_Text_PostBattle
# 93 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	closemessage
# 94 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayRight
# 95 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayLeft
# 96 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
# 97 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
# 98 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	release
# 99 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	end
# 100 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"

# 101 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayLeft::
# 102 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	applymovement LOCALID_BRUNO, Common_Movement_WalkInPlaceFasterLeft
# 103 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	waitmovement 0
# 104 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	return
# 105 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"

# 106 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayRight::
# 107 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	applymovement LOCALID_BRUNO, Common_Movement_WalkInPlaceFasterRight
# 108 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	waitmovement 0
# 109 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	return
# 110 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"

# 111 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown::
# 112 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	applymovement LOCALID_BRUNO, Common_Movement_WalkInPlaceFasterDown
# 113 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	waitmovement 0
# 114 "data//maps/PokemonLeague_BrunosRoom/scripts.pory"
	return
