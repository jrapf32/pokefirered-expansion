# 1 "data//maps/PokemonLeague_HallOfFame/scripts.pory"

# 2 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
PokemonLeague_HallOfFame_MapScripts::
# 3 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_HallOfFame_OnFrame
# 4 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_HallOfFame_OnWarp
# 5 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	.byte 0
# 6 "data//maps/PokemonLeague_HallOfFame/scripts.pory"

# 7 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
PokemonLeague_HallOfFame_OnWarp::
# 8 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_HallOfFame_EventScript_TurnPlayerNorth
# 9 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	.2byte 0
# 10 "data//maps/PokemonLeague_HallOfFame/scripts.pory"

# 11 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
PokemonLeague_HallOfFame_EventScript_TurnPlayerNorth::
# 12 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 13 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	end
# 14 "data//maps/PokemonLeague_HallOfFame/scripts.pory"

# 15 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
PokemonLeague_HallOfFame_OnFrame::
# 16 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_HallOfFame_EventScript_EnterRoom
# 17 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	.2byte 0
# 18 "data//maps/PokemonLeague_HallOfFame/scripts.pory"

# 19 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
PokemonLeague_HallOfFame_EventScript_EnterRoom::
# 20 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	lockall
# 21 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 22 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_HallOfFame_Movement_EnterRoom
# 23 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	waitmovement 0
# 24 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	applymovement LOCALID_HALL_OF_FAME_PROF_OAK, Common_Movement_WalkInPlaceFasterLeft
# 25 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 26 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	waitmovement 0
# 27 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	delay 18
# 28 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	msgbox PokemonLeague_HallOfFame_Text_OakCongratulations
# 29 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	closemessage
# 30 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	applymovement LOCALID_HALL_OF_FAME_PROF_OAK, Common_Movement_WalkInPlaceFasterUp
# 31 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 32 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	waitmovement 0
# 33 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	delay 20
# 34 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	dofieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 35 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	waitfieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 36 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	delay 40
# 37 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	setvar VAR_TEMP_1, 1
# 38 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	call EventScript_SetDefeatedEliteFourFlagsVars
# 39 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	setrespawn HEAL_LOCATION_PALLET_TOWN
# 40 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 41 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	special EnterHallOfFame
# 42 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	waitstate
# 43 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	releaseall
# 44 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	end
# 45 "data//maps/PokemonLeague_HallOfFame/scripts.pory"

# 46 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
PokemonLeague_HallOfFame_Movement_EnterRoom::
# 47 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	walk_up
# 48 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	walk_up
# 49 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	walk_up
# 50 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	walk_up
# 51 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	walk_up
# 52 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	walk_up
# 53 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	walk_up
# 54 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	walk_up
# 55 "data//maps/PokemonLeague_HallOfFame/scripts.pory"
	step_end
