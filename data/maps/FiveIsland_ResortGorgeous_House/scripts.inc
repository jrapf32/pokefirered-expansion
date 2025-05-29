# 1 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"

# 2 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"

# 3 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
.equ SHOWN_REQUESTED_MON, FLAG_TEMP_2
# 4 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"

# 5 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
FiveIsland_ResortGorgeous_House_MapScripts::
# 6 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	.byte 0
# 7 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"

# 8 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_Selphy::
# 9 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	
# 10 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	
# 11 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	lock
# 12 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	faceplayer
# 13 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	goto_if_set SHOWN_REQUESTED_MON, FiveIsland_ResortGorgeous_House_EventScript_JustFulfilledRequest
# 14 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	goto_if_eq VAR_RESORT_GORGEOUS_REQUESTED_MON, 0xFFFF, FiveIsland_ResortGorgeous_House_EventScript_RequestTookTooLong
# 15 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	goto_if_ne VAR_RESORT_GORGEOUS_REQUESTED_MON, SPECIES_NONE, FiveIsland_ResortGorgeous_House_EventScript_CheckForRequestedMon
# 16 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_PleaseHearMyWish
# 17 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	goto FiveIsland_ResortGorgeous_House_EventScript_RequestMon
# 18 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	end
# 19 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"

# 20 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_RequestMon::
# 21 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	special SampleResortGorgeousMonAndReward
# 22 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_WishToSeeMonPlease
# 23 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	release
# 24 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	end
# 25 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"

# 26 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_RequestTookTooLong::
# 27 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_OhImTiredOfWaiting
# 28 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	goto FiveIsland_ResortGorgeous_House_EventScript_RequestMon
# 29 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	end
# 30 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"

# 31 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_CheckForRequestedMon::
# 32 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	copyvar VAR_0x8004, VAR_RESORT_GORGEOUS_REQUESTED_MON
# 33 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
# 34 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon
# 35 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	goto FiveIsland_ResortGorgeous_House_EventScript_RequestMon
# 36 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	end
# 37 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"

# 38 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon::
# 39 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	special SampleResortGorgeousMonAndReward
# 40 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_MonYouCaughtForMeThankYou
# 41 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	addobject LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER
# 42 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerEnter
# 43 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	waitmovement 0
# 44 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 45 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_ButlerYesMyLady
# 46 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_SELPHY, Common_Movement_WalkInPlaceFasterUp
# 47 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	waitmovement 0
# 48 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 49 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_SelphyGiveTokenOfAppreciation
# 50 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 51 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_ButlerIShallDoAsYouBid
# 52 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	closemessage
# 53 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerNorth
# 54 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerSouth
# 55 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerEast
# 56 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerWest
# 57 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	copyobjectxytoperm LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER
# 58 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_ButlerPleaseAcceptThisAsHerThanks
# 59 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	giveitem VAR_RESORT_GORGEOUS_REWARD
# 60 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FiveIsland_ResortGorgeous_House_EventScript_NoRoomForReward
# 61 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	setflag SHOWN_REQUESTED_MON
# 62 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	setvar VAR_RESORT_GORGEOUS_REQUESTED_MON, SPECIES_NONE
# 63 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	release
# 64 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	end
# 65 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"

# 66 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerNorth::
# 67 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_SELPHY, Common_Movement_WalkInPlaceFasterDown
# 68 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerNorth
# 69 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	waitmovement 0
# 70 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 71 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	waitmovement 0
# 72 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	return
# 73 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"

# 74 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerSouth::
# 75 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerSouth
# 76 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	waitmovement 0
# 77 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 78 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	waitmovement 0
# 79 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	return
# 80 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"

# 81 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerEast::
# 82 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_SELPHY, Common_Movement_WalkInPlaceFasterLeft
# 83 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerEast
# 84 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	waitmovement 0
# 85 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 86 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	waitmovement 0
# 87 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	return
# 88 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"

# 89 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerWest::
# 90 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerWest
# 91 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	waitmovement 0
# 92 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	return
# 93 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"

# 94 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_NoRoomForReward::
# 95 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 96 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_ButlerBagAppearsToBeFull
# 97 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 98 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_OhHowDisappointing
# 99 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	setflag SHOWN_REQUESTED_MON
# 100 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	setvar VAR_RESORT_GORGEOUS_REQUESTED_MON, SPECIES_NONE
# 101 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	release
# 102 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	end
# 103 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"

# 104 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_JustFulfilledRequest::
# 105 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_SelphyWishYouBestOfLuck
# 106 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	release
# 107 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	end
# 108 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"

# 109 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerNorth::
# 110 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	walk_left
# 111 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	walk_left
# 112 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	walk_left
# 113 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	walk_down
# 114 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	walk_down
# 115 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	walk_down
# 116 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	walk_in_place_faster_right
# 117 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	step_end
# 118 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"

# 119 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerSouth::
# 120 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	walk_left
# 121 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	walk_left
# 122 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	walk_in_place_faster_down
# 123 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	step_end
# 124 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"

# 125 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerEast::
# 126 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	walk_left
# 127 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	walk_left
# 128 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	walk_left
# 129 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	walk_down
# 130 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	step_end
# 131 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"

# 132 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
@ Very odd. If the player is talking to Selphy facing West, then the player has clipped through the table
# 133 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
@ In this case rather than approach the player the Butler walks up, which clips the Butler into a wall
# 134 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerWest::
# 135 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	walk_up
# 136 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	step_end
# 137 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"

# 138 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
FiveIsland_ResortGorgeous_House_Movement_ButlerEnter::
# 139 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	walk_in_place_down
# 140 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	step_end
# 141 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"

# 142 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
@ Addressed as "Sebastian" but speaks only as "Butler"
# 143 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_Butler::
# 144 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_LadySelphySmileHasBrillianceOfSun, MSGBOX_NPC
# 145 "data//maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	end
