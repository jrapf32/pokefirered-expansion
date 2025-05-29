# 1 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"

# 2 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
ThreeIsland_DunsparceTunnel_MapScripts::
# 3 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_DunsparceTunnel_OnTransition
# 4 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	.byte 0
# 5 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"

# 6 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
ThreeIsland_DunsparceTunnel_OnTransition::
# 7 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_THREE_ISLAND_DUNSPARCE_TUNNEL
# 8 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 9 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 10 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	call_if_eq VAR_0x8008, TRUE, ThreeIsland_DunsparceTunnel_EventScript_SetLayoutDugOut
# 11 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	call_if_eq VAR_0x8008, FALSE, ThreeIsland_DunsparceTunnel_EventScript_MoveProspectorToWall
# 12 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	end
# 13 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"

# 14 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
ThreeIsland_DunsparceTunnel_EventScript_SetLayoutDugOut::
# 15 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	setmaplayoutindex LAYOUT_THREE_ISLAND_DUNSPARCE_TUNNEL_DUG_OUT
# 16 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	return
# 17 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"

# 18 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
ThreeIsland_DunsparceTunnel_EventScript_MoveProspectorToWall::
# 19 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	setobjectxyperm LOCALID_PROSPECTOR, 6, 3
# 20 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	setobjectmovementtype LOCALID_PROSPECTOR, MOVEMENT_TYPE_FACE_RIGHT
# 21 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	return
# 22 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"

# 23 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
ThreeIsland_DunsparceTunnel_EventScript_Prospector::
# 24 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	lock
# 25 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	faceplayer
# 26 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	goto_if_set FLAG_GOT_NUGGET_FROM_DUNSPARCE_TUNNEL, ThreeIsland_DunsparceTunnel_EventScript_ProspectorAlreadyGaveNugget
# 27 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 28 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, ThreeIsland_DunsparceTunnel_EventScript_ProspectorStruckGold
# 29 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	msgbox ThreeIsland_DunsparceTunnel_Text_ProspectingForGold
# 30 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	closemessage
# 31 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	applymovement LOCALID_PROSPECTOR, Common_Movement_FaceOriginalDirection
# 32 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	waitmovement 0
# 33 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	release
# 34 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	end
# 35 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"

# 36 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
ThreeIsland_DunsparceTunnel_EventScript_ProspectorStruckGold::
# 37 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	msgbox ThreeIsland_DunsparceTunnel_Text_StruckGoldThisIsForYou
# 38 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	giveitem ITEM_NUGGET
# 39 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, ThreeIsland_DunsparceTunnel_EventScript_NoRoomForNugget
# 40 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	setflag FLAG_GOT_NUGGET_FROM_DUNSPARCE_TUNNEL
# 41 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	goto ThreeIsland_DunsparceTunnel_EventScript_ProspectorAlreadyGaveNugget
# 42 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	end
# 43 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"

# 44 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
ThreeIsland_DunsparceTunnel_EventScript_NoRoomForNugget::
# 45 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	msgbox ThreeIsland_DunsparceTunnel_Text_WhoopsBagCrammedFull
# 46 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	release
# 47 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	end
# 48 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"

# 49 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
ThreeIsland_DunsparceTunnel_EventScript_ProspectorAlreadyGaveNugget::
# 50 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	msgbox ThreeIsland_DunsparceTunnel_Text_ThatsANugget
# 51 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	release
# 52 "data//maps/ThreeIsland_DunsparceTunnel/scripts.pory"
	end
