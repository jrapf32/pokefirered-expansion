# 1 "data//maps/VermilionCity/scripts.pory"

# 2 "data//maps/VermilionCity/scripts.pory"

# 3 "data//maps/VermilionCity/scripts.pory"
VermilionCity_MapScripts::
# 4 "data//maps/VermilionCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_OnTransition
# 5 "data//maps/VermilionCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, VermilionCity_OnFrame
# 6 "data//maps/VermilionCity/scripts.pory"
	.byte 0
# 7 "data//maps/VermilionCity/scripts.pory"

# 8 "data//maps/VermilionCity/scripts.pory"
VermilionCity_OnFrame::
# 9 "data//maps/VermilionCity/scripts.pory"
	map_script_2 VAR_MAP_SCENE_VERMILION_CITY, 2, VermilionCity_EventScript_ExitSSAnne
# 10 "data//maps/VermilionCity/scripts.pory"
	.2byte 0
# 11 "data//maps/VermilionCity/scripts.pory"

# 12 "data//maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_ExitSSAnne::
# 13 "data//maps/VermilionCity/scripts.pory"
	lockall
# 14 "data//maps/VermilionCity/scripts.pory"
	applymovement LOCALID_PLAYER, VermilionCity_Movement_ExitSSAnne
# 15 "data//maps/VermilionCity/scripts.pory"
	waitmovement 0
# 16 "data//maps/VermilionCity/scripts.pory"
	setvar VAR_MAP_SCENE_VERMILION_CITY, 3
# 17 "data//maps/VermilionCity/scripts.pory"
	releaseall
# 18 "data//maps/VermilionCity/scripts.pory"
	end
# 19 "data//maps/VermilionCity/scripts.pory"

# 20 "data//maps/VermilionCity/scripts.pory"
VermilionCity_Movement_ExitSSAnne::
# 21 "data//maps/VermilionCity/scripts.pory"
	walk_up
# 22 "data//maps/VermilionCity/scripts.pory"
	walk_up
# 23 "data//maps/VermilionCity/scripts.pory"
	step_end
# 24 "data//maps/VermilionCity/scripts.pory"

# 25 "data//maps/VermilionCity/scripts.pory"
VermilionCity_OnTransition::
# 26 "data//maps/VermilionCity/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_VERMILION_CITY
# 27 "data//maps/VermilionCity/scripts.pory"
	call_if_set FLAG_TALKED_TO_OAKS_AIDE_IN_VERMILION, VermilionCity_EventScript_HideOaksAide
# 28 "data//maps/VermilionCity/scripts.pory"
	end
# 29 "data//maps/VermilionCity/scripts.pory"

# 30 "data//maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_HideOaksAide::
# 31 "data//maps/VermilionCity/scripts.pory"
	setflag FLAG_HIDE_VERMILION_CITY_OAKS_AIDE
# 32 "data//maps/VermilionCity/scripts.pory"
	return
# 33 "data//maps/VermilionCity/scripts.pory"

# 34 "data//maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_Woman::
# 35 "data//maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_GrimerMultipliesInSludge, MSGBOX_NPC
# 36 "data//maps/VermilionCity/scripts.pory"
	end
# 37 "data//maps/VermilionCity/scripts.pory"

# 38 "data//maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_OldMan1::
# 39 "data//maps/VermilionCity/scripts.pory"
	lock
# 40 "data//maps/VermilionCity/scripts.pory"
	faceplayer
# 41 "data//maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VERMILION_CITY, 3, VermilionCity_EventScript_OldMan1SSAnneLeft
# 42 "data//maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_DidYouSeeSSAnneInHarbor
# 43 "data//maps/VermilionCity/scripts.pory"
	release
# 44 "data//maps/VermilionCity/scripts.pory"
	end
# 45 "data//maps/VermilionCity/scripts.pory"

# 46 "data//maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_OldMan1SSAnneLeft::
# 47 "data//maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_SSAnneHasDepartedForYear
# 48 "data//maps/VermilionCity/scripts.pory"
	release
# 49 "data//maps/VermilionCity/scripts.pory"
	end
# 50 "data//maps/VermilionCity/scripts.pory"

# 51 "data//maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_FerrySailor::
# 52 "data//maps/VermilionCity/scripts.pory"
	lock
# 53 "data//maps/VermilionCity/scripts.pory"
	faceplayer
# 54 "data//maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VERMILION_CITY, 3, VermilionCity_EventScript_CheckSeagallopPresent
# 55 "data//maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_WelcomeToTheSSAnne
# 56 "data//maps/VermilionCity/scripts.pory"
	release
# 57 "data//maps/VermilionCity/scripts.pory"
	end
# 58 "data//maps/VermilionCity/scripts.pory"

# 59 "data//maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_CheckHasMysticTicket::
# 60 "data//maps/VermilionCity/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_NAVEL_ROCK, EventScript_SetResultFalse
# 61 "data//maps/VermilionCity/scripts.pory"
	checkitem ITEM_MYSTIC_TICKET
# 62 "data//maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_SetResultFalse
# 63 "data//maps/VermilionCity/scripts.pory"
	goto EventScript_SetResultTrue
# 64 "data//maps/VermilionCity/scripts.pory"
	end
# 65 "data//maps/VermilionCity/scripts.pory"

# 66 "data//maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_CheckHasAuroraTicket::
# 67 "data//maps/VermilionCity/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_BIRTH_ISLAND, EventScript_SetResultFalse
# 68 "data//maps/VermilionCity/scripts.pory"
	checkitem ITEM_AURORA_TICKET
# 69 "data//maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_SetResultFalse
# 70 "data//maps/VermilionCity/scripts.pory"
	goto EventScript_SetResultTrue
# 71 "data//maps/VermilionCity/scripts.pory"
	end
# 72 "data//maps/VermilionCity/scripts.pory"

# 73 "data//maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_CheckSeagallopPresent::
# 74 "data//maps/VermilionCity/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 75 "data//maps/VermilionCity/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5, VermilionCity_EventScript_ChooseSeagallopDestRainbowPass
# 76 "data//maps/VermilionCity/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 1, VermilionCity_EventScript_ChooseSeagallopDestTriPass
# 77 "data//maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_TheShipSetSail
# 78 "data//maps/VermilionCity/scripts.pory"
	release
# 79 "data//maps/VermilionCity/scripts.pory"
	end
# 80 "data//maps/VermilionCity/scripts.pory"

# 81 "data//maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_ChooseSeagallopDestRainbowPass::
# 82 "data//maps/VermilionCity/scripts.pory"
	
# 83 "data//maps/VermilionCity/scripts.pory"
	
# 84 "data//maps/VermilionCity/scripts.pory"
	call VermilionCity_EventScript_CheckHasMysticTicket
# 85 "data//maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, VermilionCity_EventScript_HasMysticTicket
# 86 "data//maps/VermilionCity/scripts.pory"
	call VermilionCity_EventScript_CheckHasAuroraTicket
# 87 "data//maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, VermilionCity_EventScript_HasAuroraTicket
# 88 "data//maps/VermilionCity/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 89 "data//maps/VermilionCity/scripts.pory"
	message VermilionCity_Text_BoardSeagallopRainbowPass
# 90 "data//maps/VermilionCity/scripts.pory"
	waitmessage
# 91 "data//maps/VermilionCity/scripts.pory"
	goto EventScript_SeviiDestinationsPage1
# 92 "data//maps/VermilionCity/scripts.pory"
	end
# 93 "data//maps/VermilionCity/scripts.pory"

# 94 "data//maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_HasMysticTicket::
# 95 "data//maps/VermilionCity/scripts.pory"
	call VermilionCity_EventScript_CheckHasAuroraTicket
# 96 "data//maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, VermilionCity_EventScript_HasMysticAndAuroraTickets
# 97 "data//maps/VermilionCity/scripts.pory"
	call_if_unset FLAG_SHOWN_MYSTIC_TICKET, VermilionCity_EventScript_ShowMysticTicket
# 98 "data//maps/VermilionCity/scripts.pory"
	message VermilionCity_Text_BoardSeagallopFerry
# 99 "data//maps/VermilionCity/scripts.pory"
	waitmessage
# 100 "data//maps/VermilionCity/scripts.pory"
	multichoice 17, 6, MULTICHOICE_SEVII_NAVEL, FALSE
# 101 "data//maps/VermilionCity/scripts.pory"
	switch VAR_RESULT
# 102 "data//maps/VermilionCity/scripts.pory"
	case 0, EventScript_SeviiDestinationsPage1
# 103 "data//maps/VermilionCity/scripts.pory"
	case 1, EventScript_SailToNavelRock
# 104 "data//maps/VermilionCity/scripts.pory"
	case 2, EventScript_CancelSail
# 105 "data//maps/VermilionCity/scripts.pory"
	case 127, EventScript_CancelSail
# 106 "data//maps/VermilionCity/scripts.pory"
	end
# 107 "data//maps/VermilionCity/scripts.pory"

# 108 "data//maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_ShowMysticTicket::
# 109 "data//maps/VermilionCity/scripts.pory"
	setflag FLAG_SHOWN_MYSTIC_TICKET
# 110 "data//maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_OhMysticTicketTakeYouToNavelRock
# 111 "data//maps/VermilionCity/scripts.pory"
	return
# 112 "data//maps/VermilionCity/scripts.pory"

# 113 "data//maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_HasAuroraTicket::
# 114 "data//maps/VermilionCity/scripts.pory"
	call_if_unset FLAG_SHOWN_AURORA_TICKET, VermilionCity_EventScript_ShowAuroraTicket
# 115 "data//maps/VermilionCity/scripts.pory"
	message VermilionCity_Text_BoardSeagallopFerry
# 116 "data//maps/VermilionCity/scripts.pory"
	waitmessage
# 117 "data//maps/VermilionCity/scripts.pory"
	multichoice 13, 6, MULTICHOICE_SEVII_BIRTH, FALSE
# 118 "data//maps/VermilionCity/scripts.pory"
	switch VAR_RESULT
# 119 "data//maps/VermilionCity/scripts.pory"
	case 0, EventScript_SeviiDestinationsPage1
# 120 "data//maps/VermilionCity/scripts.pory"
	case 1, EventScript_SailToBirthIsland
# 121 "data//maps/VermilionCity/scripts.pory"
	case 2, EventScript_CancelSail
# 122 "data//maps/VermilionCity/scripts.pory"
	case 127, EventScript_CancelSail
# 123 "data//maps/VermilionCity/scripts.pory"
	end
# 124 "data//maps/VermilionCity/scripts.pory"

# 125 "data//maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_ShowAuroraTicket::
# 126 "data//maps/VermilionCity/scripts.pory"
	setflag FLAG_SHOWN_AURORA_TICKET
# 127 "data//maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_OhAuroraTicketTakeYouToBirthIsland
# 128 "data//maps/VermilionCity/scripts.pory"
	return
# 129 "data//maps/VermilionCity/scripts.pory"

# 130 "data//maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_HasMysticAndAuroraTickets::
# 131 "data//maps/VermilionCity/scripts.pory"
	call_if_unset FLAG_SHOWN_MYSTIC_TICKET, VermilionCity_EventScript_ShowMysticTicket
# 132 "data//maps/VermilionCity/scripts.pory"
	call_if_unset FLAG_SHOWN_AURORA_TICKET, VermilionCity_EventScript_ShowAuroraTicket
# 133 "data//maps/VermilionCity/scripts.pory"
	message VermilionCity_Text_BoardSeagallopFerry
# 134 "data//maps/VermilionCity/scripts.pory"
	waitmessage
# 135 "data//maps/VermilionCity/scripts.pory"
	multichoice 13, 5, MULTICHOICE_SEVII_NAVEL_BIRTH, FALSE
# 136 "data//maps/VermilionCity/scripts.pory"
	switch VAR_RESULT
# 137 "data//maps/VermilionCity/scripts.pory"
	case 0, EventScript_SeviiDestinationsPage1
# 138 "data//maps/VermilionCity/scripts.pory"
	case 1, EventScript_SailToNavelRock
# 139 "data//maps/VermilionCity/scripts.pory"
	case 2, EventScript_SailToBirthIsland
# 140 "data//maps/VermilionCity/scripts.pory"
	case 3, EventScript_CancelSail
# 141 "data//maps/VermilionCity/scripts.pory"
	case 127, EventScript_CancelSail
# 142 "data//maps/VermilionCity/scripts.pory"
	end
# 143 "data//maps/VermilionCity/scripts.pory"

# 144 "data//maps/VermilionCity/scripts.pory"
EventScript_SailToNavelRock::
# 145 "data//maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_Seagallop10Departing
# 146 "data//maps/VermilionCity/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 147 "data//maps/VermilionCity/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_NAVEL_ROCK
# 148 "data//maps/VermilionCity/scripts.pory"
	goto EventScript_SetSail
# 149 "data//maps/VermilionCity/scripts.pory"
	end
# 150 "data//maps/VermilionCity/scripts.pory"

# 151 "data//maps/VermilionCity/scripts.pory"
EventScript_SailToBirthIsland::
# 152 "data//maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_Seagallop12Departing
# 153 "data//maps/VermilionCity/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 154 "data//maps/VermilionCity/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_BIRTH_ISLAND
# 155 "data//maps/VermilionCity/scripts.pory"
	goto EventScript_SetSail
# 156 "data//maps/VermilionCity/scripts.pory"
	end
# 157 "data//maps/VermilionCity/scripts.pory"

# 158 "data//maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_ChooseSeagallopDestTriPass::
# 159 "data//maps/VermilionCity/scripts.pory"
	message VermilionCity_Text_BoardSeagallopTriPass
# 160 "data//maps/VermilionCity/scripts.pory"
	waitmessage
# 161 "data//maps/VermilionCity/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 162 "data//maps/VermilionCity/scripts.pory"
	multichoice 19, 5, MULTICHOICE_SEAGALLOP_123, FALSE
# 163 "data//maps/VermilionCity/scripts.pory"
	switch VAR_RESULT
# 164 "data//maps/VermilionCity/scripts.pory"
	case 0, EventScript_SailToOneIsland2
# 165 "data//maps/VermilionCity/scripts.pory"
	case 1, EventScript_SailToTwoIsland2
# 166 "data//maps/VermilionCity/scripts.pory"
	case 2, EventScript_SailToThreeIsland2
# 167 "data//maps/VermilionCity/scripts.pory"
	case 3, EventScript_CancelSail
# 168 "data//maps/VermilionCity/scripts.pory"
	case 127, EventScript_CancelSail
# 169 "data//maps/VermilionCity/scripts.pory"
	end
# 170 "data//maps/VermilionCity/scripts.pory"

# 171 "data//maps/VermilionCity/scripts.pory"
@ Unreachable
# 172 "data//maps/VermilionCity/scripts.pory"
Vermilion_EventScript_Unused::
# 173 "data//maps/VermilionCity/scripts.pory"
	release
# 174 "data//maps/VermilionCity/scripts.pory"
	end
# 175 "data//maps/VermilionCity/scripts.pory"

# 176 "data//maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_CheckTicketLeft::
# 177 "data//maps/VermilionCity/scripts.pory"
	lockall
# 178 "data//maps/VermilionCity/scripts.pory"
	goto VermilionCity_EventScript_CheckTicket
# 179 "data//maps/VermilionCity/scripts.pory"
	end
# 180 "data//maps/VermilionCity/scripts.pory"

# 181 "data//maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_CheckTicketRight::
# 182 "data//maps/VermilionCity/scripts.pory"
	lockall
# 183 "data//maps/VermilionCity/scripts.pory"
	goto VermilionCity_EventScript_CheckTicket
# 184 "data//maps/VermilionCity/scripts.pory"
	end
# 185 "data//maps/VermilionCity/scripts.pory"

# 186 "data//maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_ExitedTicketCheck::
# 187 "data//maps/VermilionCity/scripts.pory"
	lockall
# 188 "data//maps/VermilionCity/scripts.pory"
	setvar VAR_VERMILION_CITY_TICKET_CHECK_TRIGGER, 0
# 189 "data//maps/VermilionCity/scripts.pory"
	releaseall
# 190 "data//maps/VermilionCity/scripts.pory"
	end
# 191 "data//maps/VermilionCity/scripts.pory"

# 192 "data//maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_CheckTicket::
# 193 "data//maps/VermilionCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 194 "data//maps/VermilionCity/scripts.pory"
	applymovement LOCALID_VERMILION_FERRY_SAILOR, Common_Movement_WalkInPlaceFasterLeft
# 195 "data//maps/VermilionCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 196 "data//maps/VermilionCity/scripts.pory"
	waitmovement 0
# 197 "data//maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VERMILION_CITY, 3, VermilionCity_EventScript_CheckSeagallopPresentTrigger
# 198 "data//maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_DoYouHaveATicket
# 199 "data//maps/VermilionCity/scripts.pory"
	goto_if_unset FLAG_GOT_SS_TICKET, VermilionCity_EventScript_DontHaveSSTicket
# 200 "data//maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_FlashedSSTicket
# 201 "data//maps/VermilionCity/scripts.pory"
	setvar VAR_VERMILION_CITY_TICKET_CHECK_TRIGGER, 1
# 202 "data//maps/VermilionCity/scripts.pory"
	releaseall
# 203 "data//maps/VermilionCity/scripts.pory"
	end
# 204 "data//maps/VermilionCity/scripts.pory"

# 205 "data//maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_DontHaveSSTicket::
# 206 "data//maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_DontHaveNeededSSTicket
# 207 "data//maps/VermilionCity/scripts.pory"
	closemessage
# 208 "data//maps/VermilionCity/scripts.pory"
	goto VermilionCity_EventScript_WalkUpPier
# 209 "data//maps/VermilionCity/scripts.pory"
	end
# 210 "data//maps/VermilionCity/scripts.pory"

# 211 "data//maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_CheckSeagallopPresentTrigger::
# 212 "data//maps/VermilionCity/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 213 "data//maps/VermilionCity/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5, VermilionCity_EventScript_ChooseSeagallopDestRainbowPass
# 214 "data//maps/VermilionCity/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 1, VermilionCity_EventScript_ChooseSeagallopDestTriPass
# 215 "data//maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_TheShipSetSail
# 216 "data//maps/VermilionCity/scripts.pory"
	closemessage
# 217 "data//maps/VermilionCity/scripts.pory"
	goto VermilionCity_EventScript_WalkUpPier
# 218 "data//maps/VermilionCity/scripts.pory"
	end
# 219 "data//maps/VermilionCity/scripts.pory"

# 220 "data//maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_Sailor::
# 221 "data//maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_SSAnneVisitsOnceAYear, MSGBOX_NPC
# 222 "data//maps/VermilionCity/scripts.pory"
	end
# 223 "data//maps/VermilionCity/scripts.pory"

# 224 "data//maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_OaksAide::
# 225 "data//maps/VermilionCity/scripts.pory"
	lock
# 226 "data//maps/VermilionCity/scripts.pory"
	faceplayer
# 227 "data//maps/VermilionCity/scripts.pory"
	setflag FLAG_TALKED_TO_OAKS_AIDE_IN_VERMILION
# 228 "data//maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_Route2AideHasPackageForYou
# 229 "data//maps/VermilionCity/scripts.pory"
	release
# 230 "data//maps/VermilionCity/scripts.pory"
	end
# 231 "data//maps/VermilionCity/scripts.pory"

# 232 "data//maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_OldMan2::
# 233 "data//maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_BuildingOnThisLand, MSGBOX_NPC
# 234 "data//maps/VermilionCity/scripts.pory"
	end
# 235 "data//maps/VermilionCity/scripts.pory"

# 236 "data//maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_Machop::
# 237 "data//maps/VermilionCity/scripts.pory"
	lock
# 238 "data//maps/VermilionCity/scripts.pory"
	faceplayer
# 239 "data//maps/VermilionCity/scripts.pory"
	waitse
# 240 "data//maps/VermilionCity/scripts.pory"
	playmoncry SPECIES_MACHOP, CRY_MODE_NORMAL
# 241 "data//maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_Machop
# 242 "data//maps/VermilionCity/scripts.pory"
	waitmoncry
# 243 "data//maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_MachopStompingLandFlat
# 244 "data//maps/VermilionCity/scripts.pory"
	release
# 245 "data//maps/VermilionCity/scripts.pory"
	end
# 246 "data//maps/VermilionCity/scripts.pory"

# 247 "data//maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_CitySign::
# 248 "data//maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_CitySign, MSGBOX_SIGN
# 249 "data//maps/VermilionCity/scripts.pory"
	end
# 250 "data//maps/VermilionCity/scripts.pory"

# 251 "data//maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_SnorlaxNotice::
# 252 "data//maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_SnorlaxBlockingRoute12, MSGBOX_SIGN
# 253 "data//maps/VermilionCity/scripts.pory"
	end
# 254 "data//maps/VermilionCity/scripts.pory"

# 255 "data//maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_PokemonFanClubSign::
# 256 "data//maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 257 "data//maps/VermilionCity/scripts.pory"
	end
# 258 "data//maps/VermilionCity/scripts.pory"

# 259 "data//maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_GymSign::
# 260 "data//maps/VermilionCity/scripts.pory"
	lockall
# 261 "data//maps/VermilionCity/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 0
# 262 "data//maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_GymSign
# 263 "data//maps/VermilionCity/scripts.pory"
	releaseall
# 264 "data//maps/VermilionCity/scripts.pory"
	end
# 265 "data//maps/VermilionCity/scripts.pory"

# 266 "data//maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_HarborSign::
# 267 "data//maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_VermilionHarbor, MSGBOX_SIGN
# 268 "data//maps/VermilionCity/scripts.pory"
	end
