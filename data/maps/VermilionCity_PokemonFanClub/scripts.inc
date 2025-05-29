# 1 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"

# 2 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
.set SPOKE_TO_WOMAN_LAST,   FLAG_TEMP_2
# 3 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
.set SPOKE_TO_FAT_MAN_LAST, FLAG_TEMP_3      
# 4 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"

# 5 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
VermilionCity_PokemonFanClub_MapScripts::
# 6 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	.byte 0
# 7 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"

# 8 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_Chairman::
# 9 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	lock
# 10 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	faceplayer
# 11 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_GOT_BIKE_VOUCHER, VermilionCity_PokemonFanClub_EventScript_AlreadyHeardStory
# 12 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_DidYouComeToHearAboutMyMons, MSGBOX_YESNO
# 13 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, YES, VermilionCity_PokemonFanClub_EventScript_ChairmanStory
# 14 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_ComeBackToHearStory
# 15 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	release
# 16 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	end
# 17 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"

# 18 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_AlreadyHeardStory::
# 19 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_DidntComeToSeeAboutMonsAgain
# 20 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	release
# 21 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	end
# 22 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"

# 23 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_ChairmanStory::
# 24 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_ChairmansStory
# 25 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_BIKE_VOUCHER
# 26 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, VermilionCity_PokemonFanClub_EventScript_NoRoomForBikeVoucher
# 27 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	setflag FLAG_GOT_BIKE_VOUCHER
# 28 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	giveitem_msg VermilionCity_PokemonFanClub_Text_ReceivedBikeVoucherFromChairman, ITEM_BIKE_VOUCHER, 1, MUS_OBTAIN_KEY_ITEM
# 29 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_ExplainBikeVoucher
# 30 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	release
# 31 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	end
# 32 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"

# 33 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_NoRoomForBikeVoucher::
# 34 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_MakeRoomForThis
# 35 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	release
# 36 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	end
# 37 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"

# 38 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_WorkerF::
# 39 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	lock
# 40 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	faceplayer
# 41 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, VermilionCity_PokemonFanClub_EventScript_WorkerFGameClear
# 42 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_ChairmanVeryVocalAboutPokemon
# 43 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	release
# 44 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	end
# 45 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"

# 46 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_WorkerFGameClear::
# 47 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	famechecker FAMECHECKER_DAISY, 1
# 48 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_ChairmanReallyAdoresHisMons
# 49 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	release
# 50 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	end
# 51 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"

# 52 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_Woman::
# 53 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	lock
# 54 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	faceplayer
# 55 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	goto_if_set SPOKE_TO_FAT_MAN_LAST, VermilionCity_PokemonFanClub_EventScript_WomanSpokeToFatMan
# 56 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_AdoreMySeel
# 57 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	closemessage
# 58 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	applymovement LOCALID_VIRIDIAN_WOMAN Common_Movement_FaceOriginalDirection
# 59 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	waitmovement 0
# 60 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	setflag SPOKE_TO_WOMAN_LAST
# 61 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	release
# 62 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	end
# 63 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"

# 64 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_WomanSpokeToFatMan::
# 65 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_SeelFarMoreAttractive
# 66 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	closemessage
# 67 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	applymovement LOCALID_VIRIDIAN_WOMAN Common_Movement_FaceOriginalDirection
# 68 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	waitmovement 0
# 69 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	clearflag SPOKE_TO_FAT_MAN_LAST
# 70 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	release
# 71 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	end
# 72 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"

# 73 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_FatMan::
# 74 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	lock
# 75 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	faceplayer
# 76 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	goto_if_set SPOKE_TO_WOMAN_LAST, VermilionCity_PokemonFanClub_EventScript_FatManSpokeToWoman
# 77 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_AdmirePikachusTail
# 78 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	closemessage
# 79 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	applymovement LOCALID_POKEMON_FAN_CLUB_FAT_MAN, Common_Movement_FaceOriginalDirection
# 80 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	waitmovement 0
# 81 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	setflag SPOKE_TO_FAT_MAN_LAST
# 82 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	release
# 83 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	end
# 84 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"

# 85 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_FatManSpokeToWoman::
# 86 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_PikachuTwiceAsCute
# 87 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	closemessage
# 88 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	applymovement LOCALID_POKEMON_FAN_CLUB_FAT_MAN, Common_Movement_FaceOriginalDirection
# 89 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	waitmovement 0
# 90 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	clearflag SPOKE_TO_WOMAN_LAST
# 91 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	release
# 92 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	end
# 93 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"

# 94 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_Pikachu::
# 95 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	lock
# 96 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	faceplayer
# 97 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	waitse
# 98 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 99 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_Pikachu
# 100 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	waitmoncry
# 101 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	release
# 102 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	end
# 103 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"

# 104 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_Seel::
# 105 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	lock
# 106 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	faceplayer
# 107 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	waitse
# 108 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	playmoncry SPECIES_SEEL, CRY_MODE_NORMAL
# 109 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_Seel
# 110 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	waitmoncry
# 111 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	release
# 112 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	end
# 113 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"

# 114 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_RulesSign1::
# 115 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_ListenPolitelyToOtherTrainers, MSGBOX_SIGN
# 116 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	end
# 117 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"

# 118 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_RulesSign2::
# 119 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_SomeoneBragsBragBack, MSGBOX_SIGN
# 120 "data//maps/VermilionCity_PokemonFanClub/scripts.pory"
	end
