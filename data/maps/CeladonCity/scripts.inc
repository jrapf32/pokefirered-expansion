# 1 "data//maps/CeladonCity/scripts.pory"

# 2 "data//maps/CeladonCity/scripts.pory"
CeladonCity_MapScripts::
# 3 "data//maps/CeladonCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeladonCity_OnTransition
# 4 "data//maps/CeladonCity/scripts.pory"
	.byte 0
# 5 "data//maps/CeladonCity/scripts.pory"

# 6 "data//maps/CeladonCity/scripts.pory"
CeladonCity_OnTransition::
# 7 "data//maps/CeladonCity/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_CELADON_CITY
# 8 "data//maps/CeladonCity/scripts.pory"
	end
# 9 "data//maps/CeladonCity/scripts.pory"

# 10 "data//maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_LittleGirl::
# 11 "data//maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_GotMyKoffingInCinnabar, MSGBOX_NPC
# 12 "data//maps/CeladonCity/scripts.pory"
	end
# 13 "data//maps/CeladonCity/scripts.pory"

# 14 "data//maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_OldMan1::
# 15 "data//maps/CeladonCity/scripts.pory"
	lock
# 16 "data//maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_GymIsGreatFullOfWomen
# 17 "data//maps/CeladonCity/scripts.pory"
	release
# 18 "data//maps/CeladonCity/scripts.pory"
	end
# 19 "data//maps/CeladonCity/scripts.pory"

# 20 "data//maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_Woman::
# 21 "data//maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_GameCornerIsBadForCitysImage, MSGBOX_NPC
# 22 "data//maps/CeladonCity/scripts.pory"
	end
# 23 "data//maps/CeladonCity/scripts.pory"

# 24 "data//maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_OldMan2::
# 25 "data//maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_BlewItAllAtSlots, MSGBOX_NPC
# 26 "data//maps/CeladonCity/scripts.pory"
	end
# 27 "data//maps/CeladonCity/scripts.pory"

# 28 "data//maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_SoftboiledTutor::
# 29 "data//maps/CeladonCity/scripts.pory"
	goto EventScript_SoftboiledTutor
# 30 "data//maps/CeladonCity/scripts.pory"
	end
# 31 "data//maps/CeladonCity/scripts.pory"

# 32 "data//maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_FatMan::
# 33 "data//maps/CeladonCity/scripts.pory"
	lock
# 34 "data//maps/CeladonCity/scripts.pory"
	faceplayer
# 35 "data//maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_MyTrustedPalPoliwrath
# 36 "data//maps/CeladonCity/scripts.pory"
	closemessage
# 37 "data//maps/CeladonCity/scripts.pory"
	applymovement LOCALID_CELADON_FAT_MAN, Common_Movement_FaceOriginalDirection
# 38 "data//maps/CeladonCity/scripts.pory"
	waitmovement 0
# 39 "data//maps/CeladonCity/scripts.pory"
	release
# 40 "data//maps/CeladonCity/scripts.pory"
	end
# 41 "data//maps/CeladonCity/scripts.pory"

# 42 "data//maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_Poliwrath::
# 43 "data//maps/CeladonCity/scripts.pory"
	lock
# 44 "data//maps/CeladonCity/scripts.pory"
	faceplayer
# 45 "data//maps/CeladonCity/scripts.pory"
	waitse
# 46 "data//maps/CeladonCity/scripts.pory"
	playmoncry SPECIES_POLIWRATH, CRY_MODE_NORMAL
# 47 "data//maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_Poliwrath
# 48 "data//maps/CeladonCity/scripts.pory"
	closemessage
# 49 "data//maps/CeladonCity/scripts.pory"
	waitmoncry
# 50 "data//maps/CeladonCity/scripts.pory"
	applymovement LOCALID_CELADON_POLIWRATH, Common_Movement_FaceOriginalDirection
# 51 "data//maps/CeladonCity/scripts.pory"
	waitmovement 0
# 52 "data//maps/CeladonCity/scripts.pory"
	release
# 53 "data//maps/CeladonCity/scripts.pory"
	end
# 54 "data//maps/CeladonCity/scripts.pory"

# 55 "data//maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_RocketGrunt1::
# 56 "data//maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_KeepOutOfTeamRocketsWay, MSGBOX_NPC
# 57 "data//maps/CeladonCity/scripts.pory"
	end
# 58 "data//maps/CeladonCity/scripts.pory"

# 59 "data//maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_RocketGrunt2::
# 60 "data//maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_GetLostOrIllPunchYou, MSGBOX_NPC
# 61 "data//maps/CeladonCity/scripts.pory"
	end
# 62 "data//maps/CeladonCity/scripts.pory"

# 63 "data//maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_Boy::
# 64 "data//maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_ScaldedTongueOnTea, MSGBOX_NPC
# 65 "data//maps/CeladonCity/scripts.pory"
	end
# 66 "data//maps/CeladonCity/scripts.pory"

# 67 "data//maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_SilphCoScientist::
# 68 "data//maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_SomeoneStoleSilphScope, MSGBOX_NPC
# 69 "data//maps/CeladonCity/scripts.pory"
	end
# 70 "data//maps/CeladonCity/scripts.pory"

# 71 "data//maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_TrainerTips1::
# 72 "data//maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_ExplainXAccuracyDireHit, MSGBOX_SIGN
# 73 "data//maps/CeladonCity/scripts.pory"
	end
# 74 "data//maps/CeladonCity/scripts.pory"

# 75 "data//maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_CitySign::
# 76 "data//maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_CitySign, MSGBOX_SIGN
# 77 "data//maps/CeladonCity/scripts.pory"
	end
# 78 "data//maps/CeladonCity/scripts.pory"

# 79 "data//maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_GymSign::
# 80 "data//maps/CeladonCity/scripts.pory"
	lockall
# 81 "data//maps/CeladonCity/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 0
# 82 "data//maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_GymSign
# 83 "data//maps/CeladonCity/scripts.pory"
	releaseall
# 84 "data//maps/CeladonCity/scripts.pory"
	end
# 85 "data//maps/CeladonCity/scripts.pory"

# 86 "data//maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_MansionSign::
# 87 "data//maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_MansionSign, MSGBOX_SIGN
# 88 "data//maps/CeladonCity/scripts.pory"
	end
# 89 "data//maps/CeladonCity/scripts.pory"

# 90 "data//maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_DeptStoreSign::
# 91 "data//maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_DeptStoreSign, MSGBOX_SIGN
# 92 "data//maps/CeladonCity/scripts.pory"
	end
# 93 "data//maps/CeladonCity/scripts.pory"

# 94 "data//maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_TrainerTips2::
# 95 "data//maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_GuardSpecProtectsFromStatus, MSGBOX_SIGN
# 96 "data//maps/CeladonCity/scripts.pory"
	end
# 97 "data//maps/CeladonCity/scripts.pory"

# 98 "data//maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_PrizeExchangeSign::
# 99 "data//maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_PrizeExchangeSign, MSGBOX_SIGN
# 100 "data//maps/CeladonCity/scripts.pory"
	end
# 101 "data//maps/CeladonCity/scripts.pory"

# 102 "data//maps/CeladonCity/scripts.pory"
CeladonCity_EventScript_GameCornerSign::
# 103 "data//maps/CeladonCity/scripts.pory"
	msgbox CeladonCity_Text_GameCornerSign, MSGBOX_SIGN
# 104 "data//maps/CeladonCity/scripts.pory"
	end
