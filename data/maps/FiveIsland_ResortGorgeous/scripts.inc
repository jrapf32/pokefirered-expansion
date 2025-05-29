# 1 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"

# 2 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"

# 3 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_MapScripts::
# 4 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, FiveIsland_ResortGorgeous_OnWarp
# 5 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FiveIsland_ResortGorgeous_OnFrame
# 6 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
	.byte 0
# 7 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"

# 8 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_OnWarp::
# 9 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
	map_script_2 VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 1, FiveIsland_ResortGorgeous_EventScript_TurnPlayerNorth
# 10 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
	.2byte 0
# 11 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"

# 12 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_EventScript_TurnPlayerNorth::
# 13 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 14 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
	end
# 15 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"

# 16 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_OnFrame::
# 17 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
	map_script_2 VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 1, FiveIsland_ResortGorgeous_EventScript_SelphyReturnHomeScene
# 18 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
	.2byte 0
# 19 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"

# 20 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_EventScript_SelphyReturnHomeScene::
# 21 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
	lockall
# 22 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 23 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_Text_SelphyThanksYouMayGoNow
# 24 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
	closemessage
# 25 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_SELPHY, Common_Movement_WalkInPlaceFasterUp
# 26 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
	waitmovement 0
# 27 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
	opendoor 39, 8
# 28 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
	waitdooranim
# 29 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_SELPHY, FiveIsland_ResortGorgeous_Movement_SelphyEnterHome
# 30 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
	waitmovement 0
# 31 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
	closedoor 39, 8
# 32 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
	waitdooranim
# 33 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
	removeobject LOCALID_RESORT_GORGEOUS_SELPHY
# 34 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
	clearflag FLAG_HIDE_RESORT_GORGEOUS_INSIDE_SELPHY
# 35 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
	setvar VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 2
# 36 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
	releaseall
# 37 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
	end
# 38 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"

# 39 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_Movement_SelphyEnterHome::
# 40 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
	walk_up
# 41 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
	set_invisible
# 42 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
	step_end
# 43 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"

# 44 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_EventScript_SelphysHouseSign::
# 45 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_Text_SelphysHouse, MSGBOX_SIGN
# 46 "data//maps/FiveIsland_ResortGorgeous/scripts.pory"
	end
