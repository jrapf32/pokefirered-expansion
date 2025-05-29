# 1 "data//maps/ViridianCity_Mart/scripts.pory"

# 2 "data//maps/ViridianCity_Mart/scripts.pory"
ViridianCity_Mart_MapScripts::
# 3 "data//maps/ViridianCity_Mart/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ViridianCity_Mart_OnLoad
# 4 "data//maps/ViridianCity_Mart/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ViridianCity_Mart_OnFrame
# 5 "data//maps/ViridianCity_Mart/scripts.pory"
	.byte 0
# 6 "data//maps/ViridianCity_Mart/scripts.pory"

# 7 "data//maps/ViridianCity_Mart/scripts.pory"
ViridianCity_Mart_OnLoad::
# 8 "data//maps/ViridianCity_Mart/scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, ViridianCity_Mart_EventScript_HideQuestionnaire
# 9 "data//maps/ViridianCity_Mart/scripts.pory"
	end
# 10 "data//maps/ViridianCity_Mart/scripts.pory"

# 11 "data//maps/ViridianCity_Mart/scripts.pory"
ViridianCity_Mart_EventScript_HideQuestionnaire::
# 12 "data//maps/ViridianCity_Mart/scripts.pory"
	setmetatile 1, 3, METATILE_Mart_CounterMid_Top, 1
# 13 "data//maps/ViridianCity_Mart/scripts.pory"
	setmetatile 1, 4, METATILE_Mart_CounterMid_Bottom, 1
# 14 "data//maps/ViridianCity_Mart/scripts.pory"
	end
# 15 "data//maps/ViridianCity_Mart/scripts.pory"

# 16 "data//maps/ViridianCity_Mart/scripts.pory"
ViridianCity_Mart_OnFrame::
# 17 "data//maps/ViridianCity_Mart/scripts.pory"
	map_script_2 VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 0, ViridianCity_Mart_EventScript_ParcelScene
# 18 "data//maps/ViridianCity_Mart/scripts.pory"
	.2byte 0
# 19 "data//maps/ViridianCity_Mart/scripts.pory"

# 20 "data//maps/ViridianCity_Mart/scripts.pory"
ViridianCity_Mart_EventScript_ParcelScene::
# 21 "data//maps/ViridianCity_Mart/scripts.pory"
	lockall
# 22 "data//maps/ViridianCity_Mart/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 23 "data//maps/ViridianCity_Mart/scripts.pory"
	applymovement LOCALID_VIRIDIAN_MART_CLERK, Common_Movement_WalkInPlaceFasterDown
# 24 "data//maps/ViridianCity_Mart/scripts.pory"
	waitmovement 0
# 25 "data//maps/ViridianCity_Mart/scripts.pory"
	msgbox ViridianCity_Mart_Text_YouCameFromPallet
# 26 "data//maps/ViridianCity_Mart/scripts.pory"
	closemessage
# 27 "data//maps/ViridianCity_Mart/scripts.pory"
	applymovement LOCALID_VIRIDIAN_MART_CLERK, ViridianCity_Mart_Movement_FacePlayer
# 28 "data//maps/ViridianCity_Mart/scripts.pory"
	applymovement LOCALID_PLAYER, ViridianCity_Mart_Movement_ApproachCounter
# 29 "data//maps/ViridianCity_Mart/scripts.pory"
	waitmovement 0
# 30 "data//maps/ViridianCity_Mart/scripts.pory"
	msgbox ViridianCity_Mart_Text_TakeThisToProfOak
# 31 "data//maps/ViridianCity_Mart/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 1
# 32 "data//maps/ViridianCity_Mart/scripts.pory"
	giveitem_msg ViridianCity_Mart_Text_ReceivedOaksParcelFromClerk, ITEM_OAKS_PARCEL, 1, MUS_OBTAIN_KEY_ITEM
# 33 "data//maps/ViridianCity_Mart/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 5
# 34 "data//maps/ViridianCity_Mart/scripts.pory"
	releaseall
# 35 "data//maps/ViridianCity_Mart/scripts.pory"
	end
# 36 "data//maps/ViridianCity_Mart/scripts.pory"

# 37 "data//maps/ViridianCity_Mart/scripts.pory"
ViridianCity_Mart_Movement_ApproachCounter::
# 38 "data//maps/ViridianCity_Mart/scripts.pory"
	walk_up
# 39 "data//maps/ViridianCity_Mart/scripts.pory"
	walk_up
# 40 "data//maps/ViridianCity_Mart/scripts.pory"
	walk_up
# 41 "data//maps/ViridianCity_Mart/scripts.pory"
	walk_up
# 42 "data//maps/ViridianCity_Mart/scripts.pory"
	walk_in_place_faster_left
# 43 "data//maps/ViridianCity_Mart/scripts.pory"
	step_end
# 44 "data//maps/ViridianCity_Mart/scripts.pory"

# 45 "data//maps/ViridianCity_Mart/scripts.pory"
ViridianCity_Mart_Movement_FacePlayer::
# 46 "data//maps/ViridianCity_Mart/scripts.pory"
	delay_16
# 47 "data//maps/ViridianCity_Mart/scripts.pory"
	delay_16
# 48 "data//maps/ViridianCity_Mart/scripts.pory"
	delay_16
# 49 "data//maps/ViridianCity_Mart/scripts.pory"
	delay_16
# 50 "data//maps/ViridianCity_Mart/scripts.pory"
	walk_in_place_faster_right
# 51 "data//maps/ViridianCity_Mart/scripts.pory"
	step_end
# 52 "data//maps/ViridianCity_Mart/scripts.pory"

# 53 "data//maps/ViridianCity_Mart/scripts.pory"
ViridianCity_Mart_EventScript_Clerk::
# 54 "data//maps/ViridianCity_Mart/scripts.pory"
	lock
# 55 "data//maps/ViridianCity_Mart/scripts.pory"
	faceplayer
# 56 "data//maps/ViridianCity_Mart/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 1, ViridianCity_Mart_EventScript_SayHiToOak
# 57 "data//maps/ViridianCity_Mart/scripts.pory"
	
# 58 "data//maps/ViridianCity_Mart/scripts.pory"
	message Text_MayIHelpYou
# 59 "data//maps/ViridianCity_Mart/scripts.pory"
	waitmessage
# 60 "data//maps/ViridianCity_Mart/scripts.pory"
	pokemart ViridianCity_Mart_Items
# 61 "data//maps/ViridianCity_Mart/scripts.pory"
	msgbox Text_PleaseComeAgain
# 62 "data//maps/ViridianCity_Mart/scripts.pory"
	release
# 63 "data//maps/ViridianCity_Mart/scripts.pory"
	end
# 64 "data//maps/ViridianCity_Mart/scripts.pory"

# 65 "data//maps/ViridianCity_Mart/scripts.pory"
	.align 2
# 66 "data//maps/ViridianCity_Mart/scripts.pory"
ViridianCity_Mart_Items::
# 67 "data//maps/ViridianCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 68 "data//maps/ViridianCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 69 "data//maps/ViridianCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 70 "data//maps/ViridianCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 71 "data//maps/ViridianCity_Mart/scripts.pory"
	.2byte ITEM_NONE
# 72 "data//maps/ViridianCity_Mart/scripts.pory"
	release
# 73 "data//maps/ViridianCity_Mart/scripts.pory"
	end
# 74 "data//maps/ViridianCity_Mart/scripts.pory"

# 75 "data//maps/ViridianCity_Mart/scripts.pory"
ViridianCity_Mart_EventScript_SayHiToOak::
# 76 "data//maps/ViridianCity_Mart/scripts.pory"
	msgbox ViridianCity_Mart_Text_SayHiToOakForMe
# 77 "data//maps/ViridianCity_Mart/scripts.pory"
	release
# 78 "data//maps/ViridianCity_Mart/scripts.pory"
	end
# 79 "data//maps/ViridianCity_Mart/scripts.pory"

# 80 "data//maps/ViridianCity_Mart/scripts.pory"
ViridianCity_Mart_EventScript_Woman::
# 81 "data//maps/ViridianCity_Mart/scripts.pory"
	msgbox ViridianCity_Mart_Text_ShopDoesGoodBusinessInAntidotes, MSGBOX_NPC
# 82 "data//maps/ViridianCity_Mart/scripts.pory"
	end
# 83 "data//maps/ViridianCity_Mart/scripts.pory"

# 84 "data//maps/ViridianCity_Mart/scripts.pory"
ViridianCity_Mart_EventScript_Youngster::
# 85 "data//maps/ViridianCity_Mart/scripts.pory"
	msgbox ViridianCity_Mart_Text_GotToBuySomePotions, MSGBOX_NPC
# 86 "data//maps/ViridianCity_Mart/scripts.pory"
	end
