# 1 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 2 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_MapScripts::
# 3 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OneIsland_PokemonCenter_1F_OnTransition
# 4 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, OneIsland_PokemonCenter_1F_OnLoad
# 6 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OneIsland_PokemonCenter_1F_OnFrame
# 7 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 9 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_OnLoad::
# 10 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5, OneIsland_PokemonCenter_1F_EventScript_SetRubyMetatile
# 11 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_set FLAG_SYS_CAN_LINK_WITH_RS, OneIsland_PokemonCenter_1F_EventScript_SetNetworkMachineOn
# 12 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 13 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 14 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_SetRubyMetatile::
# 15 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setmetatile 13, 4, METATILE_PokemonCenter_NetworkMachine_Ruby, 1
# 16 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 17 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 18 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_SetSapphireMetatile::
# 19 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setmetatile 16, 4, METATILE_PokemonCenter_NetworkMachine_Sapphire, 1
# 20 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 21 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 22 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_SetNetworkMachineOn::
# 23 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetSapphireMetatile
# 24 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setmetatile 14, 4, METATILE_PokemonCenter_NetworkMachine_ScreenLeft_On, 1
# 25 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setmetatile 15, 4, METATILE_PokemonCenter_NetworkMachine_ScreenRight_On, 1
# 26 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 27 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 28 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_OnTransition::
# 29 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_ONE_ISLAND
# 30 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 6, OneIsland_PokemonCenter_1F_EventScript_SetCelioQuestDone
# 31 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 0, OneIsland_PokemonCenter_1F_EventScript_SetBillCelioFirstMeetingPos
# 32 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 2, OneIsland_PokemonCenter_1F_EventScript_SetBillCelioReadyToLeavePos
# 33 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 34 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 35 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_SetCelioQuestDone::
# 36 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 7
# 37 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 38 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 39 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_SetBillCelioFirstMeetingPos::
# 40 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, 9, 8
# 41 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, MOVEMENT_TYPE_FACE_UP
# 42 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_CELIO, 15, 6
# 43 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_CELIO, MOVEMENT_TYPE_FACE_UP
# 44 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 45 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 46 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_SetBillCelioReadyToLeavePos::
# 47 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, 14, 7
# 48 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, MOVEMENT_TYPE_FACE_LEFT
# 49 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_CELIO, 14, 8
# 50 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_CELIO, MOVEMENT_TYPE_FACE_LEFT
# 51 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 52 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 53 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_OnFrame::
# 54 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	map_script_2 VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 0, OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene
# 55 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	.2byte 0
# 56 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 57 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene::
# 58 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 59 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 60 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToCelio
# 61 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, OneIsland_PokemonCenter_1F_Movement_BillWalkToCelio
# 62 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 63 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillHeyThereCelio
# 64 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 65 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 66 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 67 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_ExclamationMark
# 68 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 69 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterLeft
# 70 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 71 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_Delay48
# 72 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 73 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioCantBelieveYouCameOut
# 74 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillHowsYourResearchComing
# 75 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterDown
# 76 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 77 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 78 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_ThisIsMyBuddyCelio
# 79 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterRight
# 80 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 81 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 82 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 83 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerChamp
# 84 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_unset FLAG_SYS_GAME_CLEAR, OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerNotChamp
# 85 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterDown
# 86 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 87 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioThatsReallyImpressive
# 88 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillBringMeUpToSpeed
# 89 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterLeft
# 90 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 91 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioPCsCantLinkWithYours
# 92 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 93 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterUp
# 94 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 95 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillLetMeHelpYou
# 96 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterDown
# 97 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 98 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 99 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 100 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CanYouDeliverThisMeteoritePlayer
# 101 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgreceiveditem OneIsland_PokemonCenter_1F_Text_AcceptedMeteoriteFromBill, ITEM_METEORITE, 1, MUS_OBTAIN_KEY_ITEM
# 102 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	additem ITEM_METEORITE
# 103 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterDown
# 104 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 105 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioPleaseTakeThis
# 106 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	giveitem_msg OneIsland_PokemonCenter_1F_Text_ObtainedTriPass, ITEM_TRI_PASS, 1, MUS_OBTAIN_KEY_ITEM
# 107 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PassLetsYouTravelBetweenIslands
# 108 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_ge VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMapPage
# 109 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_lt VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMap
# 110 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SYS_SEVII_MAP_123
# 111 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillCatchYouLater
# 112 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 113 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterUp
# 114 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 115 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterUp
# 116 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 117 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SYS_PC_STORAGE_DISABLED
# 118 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 1
# 119 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	releaseall
# 120 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 121 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 122 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerChamp::
# 123 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PlayerIsReigningPokemonChamp
# 124 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 125 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 126 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerNotChamp::
# 127 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PlayerIsRisingPokemonChamp
# 128 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 129 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 130 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMapPage::
# 131 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 132 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 133 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_ReceivedExtraPageForTownMap
# 134 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 135 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 136 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_RestorePrevTextColor
# 137 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 138 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 139 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMap::
# 140 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_TOWN_MAP
# 141 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
# 142 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	giveitem_msg OneIsland_PokemonCenter_1F_Text_ReceivedTownMap, ITEM_TOWN_MAP, 1, MUS_OBTAIN_KEY_ITEM
# 143 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 144 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 145 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToCelio::
# 146 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 147 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 148 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 149 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 150 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 151 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 152 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 153 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_up
# 154 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 155 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 156 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_BillWalkToCelio::
# 157 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 158 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 159 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 160 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 161 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 162 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 163 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 164 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_right
# 165 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 166 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 167 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
@ Unused
# 168 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_WalkUp:
# 169 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 170 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 171 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 172 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
@ Unused
# 173 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_StepAsideLeft::
# 174 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 175 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_right
# 176 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 177 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 178 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Nurse::
# 179 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lock
# 180 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 181 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 182 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 183 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 184 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 185 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Bill::
# 186 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lock
# 187 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SEVII_DETOUR_FINISHED, OneIsland_PokemonCenter_1F_EventScript_BillGoTakeStroll
# 188 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_HmmHowAboutLikeThis
# 189 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 190 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 191 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 192 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_BillGoTakeStroll::
# 193 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_FacePlayer
# 194 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 195 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_GotPCWorkingStrollAWhileMore
# 196 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 197 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 198 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 199 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Celio::
# 200 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lock
# 201 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 202 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 7, OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact
# 203 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 6, OneIsland_PokemonCenter_1F_EventScript_CelioJustGivenSapphire
# 204 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_RECOVERED_SAPPHIRE, OneIsland_PokemonCenter_1F_EventScript_GiveCelioSapphire
# 205 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5, OneIsland_PokemonCenter_1F_EventScript_ExplainRainbowPass
# 206 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_GOT_RUBY, OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby
# 207 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4, OneIsland_PokemonCenter_1F_EventScript_CelioWaitingForRuby
# 208 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 209 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, OneIsland_PokemonCenter_1F_EventScript_CelioRequestRuby
# 210 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 3, OneIsland_PokemonCenter_1F_EventScript_CelioPlayerMissingNationalDex
# 211 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_SorryForBeingPoorHost
# 212 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 213 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FaceOriginalDirection
# 214 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 215 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 216 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 217 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 218 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact::
# 219 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioHearingRumorsAboutYou
# 220 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	random 3
# 221 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, OneIsland_PokemonCenter_1F_EventScript_BillFact1
# 222 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, OneIsland_PokemonCenter_1F_EventScript_BillFact2
# 223 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	famechecker FAMECHECKER_BILL, 5
# 224 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillCantStomachMilk
# 225 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 226 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 227 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 228 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_BillFact1::
# 229 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	famechecker FAMECHECKER_BILL, 3
# 230 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillsFirstMonWasAbra
# 231 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 232 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 233 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 234 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_BillFact2::
# 235 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	famechecker FAMECHECKER_BILL, 4
# 236 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillsHometownInGoldenrod
# 237 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 238 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 239 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 240 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_CelioJustGivenSapphire::
# 241 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_WishYouBestOfLuck
# 242 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 243 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 244 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 245 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_GiveCelioSapphire::
# 246 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 247 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 248 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_HandedSapphireToCelio
# 249 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 250 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 251 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_RestorePrevTextColor
# 252 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_SAPPHIRE
# 253 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_ThankYouGiveMeTime
# 254 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 255 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioPutGemInMachine
# 256 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 257 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_CLICK
# 258 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetSapphireMetatile
# 259 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	special DrawWholeMapView
# 260 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_OkayThisIsGood
# 261 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 262 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 60
# 263 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioCheckMachine
# 264 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 265 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 30
# 266 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioCheckMachine
# 267 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 268 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 40
# 269 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_PC_ON
# 270 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetNetworkMachineOn
# 271 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	special DrawWholeMapView
# 272 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_LinkedUpWithLanette
# 273 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FacePlayer
# 274 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 275 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_ManagedToLinkWithHoennThankYou
# 276 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	special SetPostgameFlags
# 277 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SYS_CAN_LINK_WITH_RS
# 278 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_CERULEAN_CAVE_GUARD
# 279 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_LORELEI_IN_HER_HOUSE
# 280 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 6
# 281 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	special InitRoamer
# 282 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 283 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 284 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 285 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_ExplainRainbowPass::
# 286 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PassLetYouGetToAllIslands
# 287 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 288 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 289 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 290 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby::
# 291 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_OhThats
# 292 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 293 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 294 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_HandedRubyToCelio
# 295 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 296 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 297 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_RestorePrevTextColor
# 298 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 299 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioPutGemInMachine
# 300 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 301 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_CLICK
# 302 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetRubyMetatile
# 303 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	special DrawWholeMapView
# 304 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 30
# 305 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FacePlayer
# 306 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 307 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MayIAskOneMoreFavor, MSGBOX_YESNO
# 308 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio
# 309 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_GiveRainbowPass
# 310 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 311 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 312 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio::
# 313 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PleaseINeedYourHelp, MSGBOX_YESNO
# 314 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio
# 315 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_GiveRainbowPass
# 316 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 317 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 318 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_GiveRainbowPass::
# 319 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_AnotherGemstoneInSeviiIslands
# 320 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_RUBY
# 321 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_TRI_PASS
# 322 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5
# 323 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	additem ITEM_RAINBOW_PASS
# 324 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SYS_SEVII_MAP_4567
# 325 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 326 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 327 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_ReturnedTriPassForRainbowPass
# 328 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 329 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 330 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 331 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_ObtainedExtraMapPage
# 332 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 333 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 334 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_RestorePrevTextColor
# 335 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_ExplainRainbowPass
# 336 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 337 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 338 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_CelioWaitingForRuby::
# 339 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_TryingToFindGem
# 340 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 341 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 342 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 343 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_CelioRequestRuby::
# 344 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioCaughtMoreMonMaybeICanBeUseful
# 345 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterUp
# 346 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 347 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_YoullBeTradingFromTrainersFarAway
# 348 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FacePlayer
# 349 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 350 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_NeedsSpecialGemstone
# 351 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_MT_EMBER_EXTERIOR, 1
# 352 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4
# 353 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 354 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 355 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 356 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_CelioPlayerMissingNationalDex::
# 357 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioImModifyingMyNetworkMachine
# 358 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 359 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 360 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 361 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_CelioCheckMachine::
# 362 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_up
# 363 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay_8
# 364 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_up
# 365 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 366 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 367 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_CelioPutGemInMachine::
# 368 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_up
# 369 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_up
# 370 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 371 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_up
# 372 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_up
# 373 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 374 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 375 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LittleBoy::
# 376 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CameFromPalletDontKnowIt, MSGBOX_NPC
# 377 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 378 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 379 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Hiker::
# 380 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_EnormousVolcanoOnIsland, MSGBOX_NPC
# 381 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 382 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 383 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_BattleGirl::
# 384 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lock
# 385 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 386 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, OneIsland_PokemonCenter_1F_EventScript_BattleGirlHoennLinked
# 387 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_WishICouldTradeWithBoyfriend
# 388 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 389 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 390 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 391 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_BattleGirlHoennLinked::
# 392 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_TradedWithFarAwayBoyfriend
# 393 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 394 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 395 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 396 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_NetworkMachine::
# 397 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 398 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithHoenn
# 399 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SEVII_DETOUR_FINISHED, OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithKanto
# 400 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MachineUnderAdjustment
# 401 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	releaseall
# 402 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 403 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 404 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithKanto::
# 405 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MachineLinkedWithKanto
# 406 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	releaseall
# 407 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 408 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 409 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithHoenn::
# 410 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MachineLinkedWithKantoAndHoenn
# 411 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	releaseall
# 412 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 413 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 414 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerTop::
# 415 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 416 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 417 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
# 418 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 419 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 420 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerMidTop::
# 421 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 422 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_TEMP_1, 2
# 423 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
# 424 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 425 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 426 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerMidBottom::
# 427 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 428 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_TEMP_1, 3
# 429 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
# 430 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 431 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 432 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerBottom::
# 433 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 434 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_TEMP_1, 4
# 435 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
# 436 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 437 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 438 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene::
# 439 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 440 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 441 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_ExclamationMark
# 442 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 443 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillOhHeyPlayer
# 444 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 445 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillTop
# 446 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidTop
# 447 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidBottom
# 448 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillBottom
# 449 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 10
# 450 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillWeGotItDone
# 451 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 452 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 453 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioJobWentQuick
# 454 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterDown
# 455 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 456 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterUp
# 457 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 458 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillYouveLearnedALot
# 459 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioOhReallyEhehe
# 460 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 461 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterLeft
# 462 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 463 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 10
# 464 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 465 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 466 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 15
# 467 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillWeShouldHeadBackToKanto
# 468 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 469 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterDown
# 470 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 471 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 15
# 472 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterLeft
# 473 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 474 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 475 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 476 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioPromiseIllShowYouAroundSometime
# 477 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 478 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 25
# 479 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerExit
# 480 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, OneIsland_PokemonCenter_1F_Movement_BillExit
# 481 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 482 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_EXIT
# 483 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_ONE_ISLAND_POKECENTER_BILL
# 484 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 3
# 485 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_BILL
# 486 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 3
# 487 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_ONE_ISLAND
# 488 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_CINNABAR_ISLAND
# 489 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto EventScript_SetSail
# 490 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 491 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 492 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillTop::
# 493 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillTop
# 494 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 495 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 496 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 497 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidTop::
# 498 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidTop
# 499 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 500 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 501 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 502 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidBottom::
# 503 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidBottom
# 504 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 505 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 506 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 507 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillBottom::
# 508 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillBottom
# 509 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 510 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 511 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 512 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillTop::
# 513 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 514 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 515 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_right
# 516 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 517 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 518 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidTop::
# 519 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 520 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 521 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 522 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidBottom::
# 523 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 524 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 525 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_right
# 526 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 527 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 528 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillBottom::
# 529 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 530 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 531 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 532 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_right
# 533 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 534 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 535 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
@ Unused
# 536 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_DelayWalkInPlaceLeft::
# 537 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 538 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 539 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay_4
# 540 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_left
# 541 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 542 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 543 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
@ Unused
# 544 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_WalkInPlaceDown::
# 545 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_fast_down
# 546 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 547 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 548 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerExit::
# 549 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 550 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 551 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 552 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 553 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 554 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 555 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 556 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 557 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_BillExit::
# 558 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 559 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 560 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 561 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 562 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 563 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 564 "data//maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
