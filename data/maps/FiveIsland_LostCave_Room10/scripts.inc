# 1 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"

# 2 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
FiveIsland_LostCave_Room10_MapScripts::
# 3 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FiveIsland_LostCave_Room10_OnResume
# 4 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FiveIsland_LostCave_Room10_OnFrame
# 5 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	.byte 0
# 6 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"

# 7 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
FiveIsland_LostCave_Room10_OnResume::
# 8 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	call_if_defeated TRAINER_LADY_SELPHY, FiveIsland_LostCave_Room10_EventScript_StopSelphySceneTrigger
# 9 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	end
# 10 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"

# 11 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
FiveIsland_LostCave_Room10_EventScript_StopSelphySceneTrigger::
# 12 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	setvar VAR_MAP_SCENE_FIVE_ISLAND_LOST_CAVE_ROOM10, 1
# 13 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	return
# 14 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"

# 15 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
FiveIsland_LostCave_Room10_OnFrame::
# 16 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	map_script_2 VAR_MAP_SCENE_FIVE_ISLAND_LOST_CAVE_ROOM10, 0, FiveIsland_LostCave_Room10_EventScript_FindSelphyScene
# 17 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	.2byte 0
# 18 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"

# 19 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
FiveIsland_LostCave_Room10_EventScript_FindSelphyScene::
# 20 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	lockall
# 21 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 22 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	applymovement LOCALID_LOST_CAVE_SELPHY, FiveIsland_LostCave_Room10_Movement_SelphyWander
# 23 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	waitmovement 0
# 24 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	delay 100
# 25 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	applymovement LOCALID_LOST_CAVE_SELPHY, FiveIsland_LostCave_Room10_Movement_SelphyApproach
# 26 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	waitmovement 0
# 27 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	msgbox FiveIsland_LostCave_Room10_Text_SelphyIntro
# 28 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	trainerbattle_no_intro TRAINER_LADY_SELPHY, FiveIsland_LostCave_Room10_Text_SelphyDefeat
# 29 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	msgbox FiveIsland_LostCave_Room10_Text_MayIAskYouToTakeMeHome
# 30 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	closemessage
# 31 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	call FiveIsland_LostCave_Room10_EventScript_SetSelphyFound
# 32 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	warp MAP_FIVE_ISLAND_RESORT_GORGEOUS, 39, 10
# 33 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	waitstate
# 34 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	releaseall
# 35 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	end
# 36 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"

# 37 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
FiveIsland_LostCave_Room10_EventScript_SetSelphyFound::
# 38 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	setflag FLAG_HIDE_LOST_CAVE_SELPHY
# 39 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	clearflag FLAG_HIDE_RESORT_GORGEOUS_SELPHY
# 40 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	setvar VAR_MAP_SCENE_FIVE_ISLAND_LOST_CAVE_ROOM10, 1
# 41 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	setvar VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 1
# 42 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	return
# 43 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"

# 44 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"

# 45 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
FiveIsland_LostCave_Room10_Movement_SelphyWander::
# 46 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	walk_left
# 47 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	delay_16
# 48 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	walk_right
# 49 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	delay_16
# 50 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	walk_in_place_faster_up
# 51 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	delay_16
# 52 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	walk_in_place_faster_down
# 53 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	step_end
# 54 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"

# 55 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
FiveIsland_LostCave_Room10_Movement_SelphyApproach::
# 56 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	walk_down
# 57 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	walk_down
# 58 "data//maps/FiveIsland_LostCave_Room10/scripts.pory"
	step_end
