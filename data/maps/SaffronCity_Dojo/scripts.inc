# 1 "data//maps/SaffronCity_Dojo/scripts.pory"

# 2 "data//maps/SaffronCity_Dojo/scripts.pory"

# 3 "data//maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_MapScripts::
# 4 "data//maps/SaffronCity_Dojo/scripts.pory"
	.byte 0
# 5 "data//maps/SaffronCity_Dojo/scripts.pory"

# 6 "data//maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_TriggerMasterBattleLeft::
# 7 "data//maps/SaffronCity_Dojo/scripts.pory"
	lockall
# 8 "data//maps/SaffronCity_Dojo/scripts.pory"
	setvar VAR_MAP_SCENE_SAFFRON_CITY_DOJO, 1
# 9 "data//maps/SaffronCity_Dojo/scripts.pory"
	applymovement LOCALID_KARATE_MASTER, Common_Movement_WalkInPlaceFasterLeft
# 10 "data//maps/SaffronCity_Dojo/scripts.pory"
	waitmovement 0
# 11 "data//maps/SaffronCity_Dojo/scripts.pory"
	releaseall
# 12 "data//maps/SaffronCity_Dojo/scripts.pory"
	end
# 13 "data//maps/SaffronCity_Dojo/scripts.pory"

# 14 "data//maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_TriggerMasterBattleRight::
# 15 "data//maps/SaffronCity_Dojo/scripts.pory"
	lockall
# 16 "data//maps/SaffronCity_Dojo/scripts.pory"
	setvar VAR_MAP_SCENE_SAFFRON_CITY_DOJO, 1
# 17 "data//maps/SaffronCity_Dojo/scripts.pory"
	applymovement LOCALID_KARATE_MASTER, Common_Movement_WalkInPlaceFasterRight
# 18 "data//maps/SaffronCity_Dojo/scripts.pory"
	waitmovement 0
# 19 "data//maps/SaffronCity_Dojo/scripts.pory"
	releaseall
# 20 "data//maps/SaffronCity_Dojo/scripts.pory"
	end
# 21 "data//maps/SaffronCity_Dojo/scripts.pory"

# 22 "data//maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_HitmonleeBall::
# 23 "data//maps/SaffronCity_Dojo/scripts.pory"
	lock
# 24 "data//maps/SaffronCity_Dojo/scripts.pory"
	faceplayer
# 25 "data//maps/SaffronCity_Dojo/scripts.pory"
	goto_if_set FLAG_GOT_HITMON_FROM_DOJO, SaffronCity_Dojo_EventScript_AlreadyGotHitmon
# 26 "data//maps/SaffronCity_Dojo/scripts.pory"
	showmonpic SPECIES_HITMONLEE, 10, 3
# 27 "data//maps/SaffronCity_Dojo/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_HITMONLEE
# 28 "data//maps/SaffronCity_Dojo/scripts.pory"
	applymovement LOCALID_KARATE_MASTER, Common_Movement_WalkInPlaceFasterUp
# 29 "data//maps/SaffronCity_Dojo/scripts.pory"
	waitmovement 0
# 30 "data//maps/SaffronCity_Dojo/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 31 "data//maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_YouWantHitmonlee, MSGBOX_YESNO
# 32 "data//maps/SaffronCity_Dojo/scripts.pory"
	call EventScript_RestorePrevTextColor
# 33 "data//maps/SaffronCity_Dojo/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SaffronCity_Dojo_EventScript_GiveHitmon
# 34 "data//maps/SaffronCity_Dojo/scripts.pory"
	hidemonpic
# 35 "data//maps/SaffronCity_Dojo/scripts.pory"
	release
# 36 "data//maps/SaffronCity_Dojo/scripts.pory"
	end
# 37 "data//maps/SaffronCity_Dojo/scripts.pory"

# 38 "data//maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_AlreadyGotHitmon::
# 39 "data//maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_BetterNotGetGreedy
# 40 "data//maps/SaffronCity_Dojo/scripts.pory"
	release
# 41 "data//maps/SaffronCity_Dojo/scripts.pory"
	end
# 42 "data//maps/SaffronCity_Dojo/scripts.pory"

# 43 "data//maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_HitmonchanBall::
# 44 "data//maps/SaffronCity_Dojo/scripts.pory"
	lock
# 45 "data//maps/SaffronCity_Dojo/scripts.pory"
	faceplayer
# 46 "data//maps/SaffronCity_Dojo/scripts.pory"
	goto_if_set FLAG_GOT_HITMON_FROM_DOJO, SaffronCity_Dojo_EventScript_AlreadyGotHitmon
# 47 "data//maps/SaffronCity_Dojo/scripts.pory"
	showmonpic SPECIES_HITMONCHAN, 10, 3
# 48 "data//maps/SaffronCity_Dojo/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_HITMONCHAN
# 49 "data//maps/SaffronCity_Dojo/scripts.pory"
	applymovement LOCALID_KARATE_MASTER, Common_Movement_WalkInPlaceFasterUp
# 50 "data//maps/SaffronCity_Dojo/scripts.pory"
	waitmovement 0
# 51 "data//maps/SaffronCity_Dojo/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 52 "data//maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_YouWantHitmonchan, MSGBOX_YESNO
# 53 "data//maps/SaffronCity_Dojo/scripts.pory"
	call EventScript_RestorePrevTextColor
# 54 "data//maps/SaffronCity_Dojo/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SaffronCity_Dojo_EventScript_GiveHitmon
# 55 "data//maps/SaffronCity_Dojo/scripts.pory"
	hidemonpic
# 56 "data//maps/SaffronCity_Dojo/scripts.pory"
	release
# 57 "data//maps/SaffronCity_Dojo/scripts.pory"
	end
# 58 "data//maps/SaffronCity_Dojo/scripts.pory"

# 59 "data//maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_GiveHitmon::
# 60 "data//maps/SaffronCity_Dojo/scripts.pory"
	hidemonpic
# 61 "data//maps/SaffronCity_Dojo/scripts.pory"
	givemon VAR_TEMP_1, 25
# 62 "data//maps/SaffronCity_Dojo/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SaffronCity_Dojo_EventScript_ReceivedHitmonParty
# 63 "data//maps/SaffronCity_Dojo/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_Dojo_EventScript_ReceivedHitmonPC
# 64 "data//maps/SaffronCity_Dojo/scripts.pory"
	goto_if_eq VAR_RESULT, 2, EventScript_NoMoreRoomForPokemon
# 65 "data//maps/SaffronCity_Dojo/scripts.pory"
	release
# 66 "data//maps/SaffronCity_Dojo/scripts.pory"
	end
# 67 "data//maps/SaffronCity_Dojo/scripts.pory"

# 68 "data//maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_ReceivedHitmonParty::
# 69 "data//maps/SaffronCity_Dojo/scripts.pory"
	removeobject VAR_LAST_TALKED
# 70 "data//maps/SaffronCity_Dojo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 71 "data//maps/SaffronCity_Dojo/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 72 "data//maps/SaffronCity_Dojo/scripts.pory"
	message SaffronCity_Dojo_Text_ReceivedMonFromKarateMaster
# 73 "data//maps/SaffronCity_Dojo/scripts.pory"
	waitmessage
# 74 "data//maps/SaffronCity_Dojo/scripts.pory"
	waitfanfare
# 75 "data//maps/SaffronCity_Dojo/scripts.pory"
	setflag FLAG_GOT_HITMON_FROM_DOJO
# 76 "data//maps/SaffronCity_Dojo/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 77 "data//maps/SaffronCity_Dojo/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SaffronCity_Dojo_EventScript_EndGiveMon
# 78 "data//maps/SaffronCity_Dojo/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 79 "data//maps/SaffronCity_Dojo/scripts.pory"
	call EventScript_ChangePokemonNickname
# 80 "data//maps/SaffronCity_Dojo/scripts.pory"
	goto SaffronCity_Dojo_EventScript_EndGiveMon
# 81 "data//maps/SaffronCity_Dojo/scripts.pory"
	end
# 82 "data//maps/SaffronCity_Dojo/scripts.pory"

# 83 "data//maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_ReceivedHitmonPC::
# 84 "data//maps/SaffronCity_Dojo/scripts.pory"
	removeobject VAR_LAST_TALKED
# 85 "data//maps/SaffronCity_Dojo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 86 "data//maps/SaffronCity_Dojo/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 87 "data//maps/SaffronCity_Dojo/scripts.pory"
	message SaffronCity_Dojo_Text_ReceivedMonFromKarateMaster
# 88 "data//maps/SaffronCity_Dojo/scripts.pory"
	waitmessage
# 89 "data//maps/SaffronCity_Dojo/scripts.pory"
	waitfanfare
# 90 "data//maps/SaffronCity_Dojo/scripts.pory"
	setflag FLAG_GOT_HITMON_FROM_DOJO
# 91 "data//maps/SaffronCity_Dojo/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 92 "data//maps/SaffronCity_Dojo/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SaffronCity_Dojo_EventScript_TransferredHitmonToPC
# 93 "data//maps/SaffronCity_Dojo/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 94 "data//maps/SaffronCity_Dojo/scripts.pory"
	goto SaffronCity_Dojo_EventScript_TransferredHitmonToPC
# 95 "data//maps/SaffronCity_Dojo/scripts.pory"
	end
# 96 "data//maps/SaffronCity_Dojo/scripts.pory"

# 97 "data//maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_TransferredHitmonToPC::
# 98 "data//maps/SaffronCity_Dojo/scripts.pory"
	call EventScript_TransferredToPC
# 99 "data//maps/SaffronCity_Dojo/scripts.pory"
	goto SaffronCity_Dojo_EventScript_EndGiveMon
# 100 "data//maps/SaffronCity_Dojo/scripts.pory"
	end
# 101 "data//maps/SaffronCity_Dojo/scripts.pory"

# 102 "data//maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_EndGiveMon::
# 103 "data//maps/SaffronCity_Dojo/scripts.pory"
	release
# 104 "data//maps/SaffronCity_Dojo/scripts.pory"
	end
# 105 "data//maps/SaffronCity_Dojo/scripts.pory"

# 106 "data//maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_Statue::
# 107 "data//maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_FightingDojo, MSGBOX_SIGN
# 108 "data//maps/SaffronCity_Dojo/scripts.pory"
	end
# 109 "data//maps/SaffronCity_Dojo/scripts.pory"

# 110 "data//maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_LeftScroll::
# 111 "data//maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_EnemiesOnEverySide, MSGBOX_SIGN
# 112 "data//maps/SaffronCity_Dojo/scripts.pory"
	end
# 113 "data//maps/SaffronCity_Dojo/scripts.pory"

# 114 "data//maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_RightScroll::
# 115 "data//maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_GoesAroundComesAround, MSGBOX_SIGN
# 116 "data//maps/SaffronCity_Dojo/scripts.pory"
	end
# 117 "data//maps/SaffronCity_Dojo/scripts.pory"

# 118 "data//maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_Hitoshi::
# 119 "data//maps/SaffronCity_Dojo/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_HITOSHI, SaffronCity_Dojo_Text_HitoshiIntro, SaffronCity_Dojo_Text_HitoshiDefeat
# 120 "data//maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_HitoshiPostBattle, MSGBOX_AUTOCLOSE
# 121 "data//maps/SaffronCity_Dojo/scripts.pory"
	end
# 122 "data//maps/SaffronCity_Dojo/scripts.pory"

# 123 "data//maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_Hideki::
# 124 "data//maps/SaffronCity_Dojo/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_HIDEKI, SaffronCity_Dojo_Text_HidekiIntro, SaffronCity_Dojo_Text_HidekiDefeat
# 125 "data//maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_HidekiPostBattle, MSGBOX_AUTOCLOSE
# 126 "data//maps/SaffronCity_Dojo/scripts.pory"
	end
# 127 "data//maps/SaffronCity_Dojo/scripts.pory"

# 128 "data//maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_Aaron::
# 129 "data//maps/SaffronCity_Dojo/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_AARON, SaffronCity_Dojo_Text_AaronIntro, SaffronCity_Dojo_Text_AaronDefeat
# 130 "data//maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_AaronPostBattle, MSGBOX_AUTOCLOSE
# 131 "data//maps/SaffronCity_Dojo/scripts.pory"
	end
# 132 "data//maps/SaffronCity_Dojo/scripts.pory"

# 133 "data//maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_Mike::
# 134 "data//maps/SaffronCity_Dojo/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_MIKE, SaffronCity_Dojo_Text_MikeIntro, SaffronCity_Dojo_Text_MikeDefeat
# 135 "data//maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_MikePostBattle, MSGBOX_AUTOCLOSE
# 136 "data//maps/SaffronCity_Dojo/scripts.pory"
	end
# 137 "data//maps/SaffronCity_Dojo/scripts.pory"

# 138 "data//maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_MasterKoichi::
# 139 "data//maps/SaffronCity_Dojo/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_KOICHI, SaffronCity_Dojo_Text_MasterKoichiIntro, SaffronCity_Dojo_Text_MasterKoichiDefeat, SaffronCity_Dojo_EventScript_DefeatedMasterKoichi
# 140 "data//maps/SaffronCity_Dojo/scripts.pory"
	goto_if_set FLAG_GOT_HITMON_FROM_DOJO, SaffronCity_Dojo_EventScript_MasterKoichiAlreadyGotHitmon
# 141 "data//maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_ChoosePrizedFightingMon, MSGBOX_AUTOCLOSE
# 142 "data//maps/SaffronCity_Dojo/scripts.pory"
	end
# 143 "data//maps/SaffronCity_Dojo/scripts.pory"

# 144 "data//maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_MasterKoichiAlreadyGotHitmon::
# 145 "data//maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_StayAndTrainWithUs
# 146 "data//maps/SaffronCity_Dojo/scripts.pory"
	release
# 147 "data//maps/SaffronCity_Dojo/scripts.pory"
	end
# 148 "data//maps/SaffronCity_Dojo/scripts.pory"

# 149 "data//maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_DefeatedMasterKoichi::
# 150 "data//maps/SaffronCity_Dojo/scripts.pory"
	setvar VAR_MAP_SCENE_SAFFRON_CITY_DOJO, 1
# 151 "data//maps/SaffronCity_Dojo/scripts.pory"
	release
# 152 "data//maps/SaffronCity_Dojo/scripts.pory"
	end
