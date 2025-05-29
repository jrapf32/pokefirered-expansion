# 1 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 2 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_MapScripts::
# 3 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.byte 0
# 4 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 5 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_Mom::
# 6 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	lock
# 7 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	faceplayer
# 8 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	goto_if_set FLAG_BEAT_RIVAL_IN_OAKS_LAB, PalletTown_PlayersHouse_1F_EventScript_MomHeal
# 9 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	checkplayergender
# 10 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouMale
# 11 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouFemale
# 12 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 13 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_FaceOriginalDirection
# 14 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 15 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	release
# 16 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	end
# 17 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 18 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouMale::
# 19 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_AllBoysLeaveOakLookingForYou
# 20 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	return
# 21 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 22 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouFemale::
# 23 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_AllGirlsLeaveOakLookingForYou
# 24 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	return
# 25 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 26 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_MomHeal::
# 27 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_YouShouldTakeQuickRest
# 28 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 29 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call EventScript_OutOfCenterPartyHeal
# 30 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_LookingGreatTakeCare
# 31 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	release
# 32 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	end
# 33 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 34 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
@ Displays special text if interacted with from side or back (which are normally inaccessible)
# 35 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TV::
# 36 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	lockall
# 37 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_NORTH, PalletTown_PlayersHouse_1F_EventScript_TVScreen
# 38 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_OopsWrongSide
# 39 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	releaseall
# 40 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	end
# 41 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 42 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreen::
# 43 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	checkplayergender
# 44 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, PalletTown_PlayersHouse_1F_EventScript_TVScreenMale
# 45 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, PalletTown_PlayersHouse_1F_EventScript_TVScreenFemale
# 46 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	releaseall
# 47 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	end
# 48 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 49 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreenMale::
# 50 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_MovieOnTVFourBoysOnRailroad
# 51 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	return
# 52 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 53 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreenFemale::
# 54 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_MovieOnTVGirlOnBrickRoad
# 55 "data//maps/PalletTown_PlayersHouse_1F/scripts.pory"
	return
