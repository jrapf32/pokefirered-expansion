# 1 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 2 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_MapScripts::
# 3 "data//maps/CeladonCity_GameCorner/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CeladonCity_GameCorner_OnLoad
# 4 "data//maps/CeladonCity_GameCorner/scripts.pory"
	.byte 0
# 5 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 6 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_OnLoad::
# 7 "data//maps/CeladonCity_GameCorner/scripts.pory"
	call_if_unset FLAG_OPENED_ROCKET_HIDEOUT, CeladonCity_GameCorner_EventScript_HideRocketHideout
# 8 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 9 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 10 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_HideRocketHideout::
# 11 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setmetatile 15, 2, METATILE_GameCorner_Floor_ShadeFull, 0
# 12 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setmetatile 16, 2, METATILE_GameCorner_Floor_ShadeFull, 0
# 13 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setmetatile 17, 2, METATILE_GameCorner_Floor_ShadeFull, 0
# 14 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setmetatile 16, 3, METATILE_GameCorner_PurpleWall_Floor, 1
# 15 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setmetatile 17, 3, METATILE_GameCorner_PurpleWall_Floor, 1
# 16 "data//maps/CeladonCity_GameCorner/scripts.pory"
	return
# 17 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 18 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_InfoClerk::
# 19 "data//maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_CanExchangeCoinsNextDoor, MSGBOX_NPC
# 20 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 21 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 22 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_CoinsClerk::
# 23 "data//maps/CeladonCity_GameCorner/scripts.pory"
	
# 24 "data//maps/CeladonCity_GameCorner/scripts.pory"
	lock
# 25 "data//maps/CeladonCity_GameCorner/scripts.pory"
	faceplayer
# 26 "data//maps/CeladonCity_GameCorner/scripts.pory"
	showmoneybox 0, 0
# 27 "data//maps/CeladonCity_GameCorner/scripts.pory"
	showcoinsbox 0, 5
# 28 "data//maps/CeladonCity_GameCorner/scripts.pory"
	message CeladonCity_GameCorner_Text_WelcomeBuySomeCoins
# 29 "data//maps/CeladonCity_GameCorner/scripts.pory"
	waitmessage
# 30 "data//maps/CeladonCity_GameCorner/scripts.pory"
	multichoice 13, 0, MULTICHOICE_GAME_CORNER_COIN_PURCHASE_COUNTER, FALSE
# 31 "data//maps/CeladonCity_GameCorner/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 32 "data//maps/CeladonCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 33 "data//maps/CeladonCity_GameCorner/scripts.pory"
	case 0, CeladonCity_GameCorner_EventScript_BuyCoins
# 34 "data//maps/CeladonCity_GameCorner/scripts.pory"
	case 1, CeladonCity_GameCorner_EventScript_BuyCoins
# 35 "data//maps/CeladonCity_GameCorner/scripts.pory"
	case 2, CeladonCity_GameCorner_EventScript_ClerkDeclineBuy
# 36 "data//maps/CeladonCity_GameCorner/scripts.pory"
	case 127, CeladonCity_GameCorner_EventScript_ClerkDeclineBuy
# 37 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 38 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 39 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_BuyCoins::
# 40 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_EventScript_ClerkNoCoinCase
# 41 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_eq VAR_0x8009, 0, CeladonCity_GameCorner_EventScript_Buy50Coins
# 42 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_eq VAR_0x8009, 1, CeladonCity_GameCorner_EventScript_Buy500Coins
# 43 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 44 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 45 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_Buy500Coins::
# 46 "data//maps/CeladonCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 47 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1) - 500, CeladonCity_GameCorner_EventScript_ClerkNoRoomForCoins
# 48 "data//maps/CeladonCity_GameCorner/scripts.pory"
	checkmoney 10000
# 49 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_GameCorner_EventScript_ClerkNotEnoughMoney
# 50 "data//maps/CeladonCity_GameCorner/scripts.pory"
	addcoins 500
# 51 "data//maps/CeladonCity_GameCorner/scripts.pory"
	removemoney 10000
# 52 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_BoughtCoins
# 53 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 54 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 55 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_Buy50Coins::
# 56 "data//maps/CeladonCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 57 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1) - 50, CeladonCity_GameCorner_EventScript_ClerkNoRoomForCoins
# 58 "data//maps/CeladonCity_GameCorner/scripts.pory"
	checkmoney 1000
# 59 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_GameCorner_EventScript_ClerkNotEnoughMoney
# 60 "data//maps/CeladonCity_GameCorner/scripts.pory"
	addcoins 50
# 61 "data//maps/CeladonCity_GameCorner/scripts.pory"
	removemoney 1000
# 62 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_BoughtCoins
# 63 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 64 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 65 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_BoughtCoins::
# 66 "data//maps/CeladonCity_GameCorner/scripts.pory"
	updatemoneybox
# 67 "data//maps/CeladonCity_GameCorner/scripts.pory"
	updatecoinsbox 0, 5
# 68 "data//maps/CeladonCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 69 "data//maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_HereAreYourCoins
# 70 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkEnd
# 71 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 72 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 73 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_ClerkEnd::
# 74 "data//maps/CeladonCity_GameCorner/scripts.pory"
	hidemoneybox
# 75 "data//maps/CeladonCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 76 "data//maps/CeladonCity_GameCorner/scripts.pory"
	release
# 77 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 78 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 79 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_ClerkDeclineBuy::
# 80 "data//maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_ComePlaySometime
# 81 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkEnd
# 82 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 83 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 84 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_ClerkNoCoinCase::
# 85 "data//maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_SorryDontHaveCoinCase
# 86 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkEnd
# 87 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 88 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 89 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_ClerkNoRoomForCoins::
# 90 "data//maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_CoinCaseIsFull
# 91 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkEnd
# 92 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 93 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 94 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_ClerkNotEnoughMoney::
# 95 "data//maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_CantAffordCoins
# 96 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkEnd
# 97 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 98 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 99 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_BaldingMan::
# 100 "data//maps/CeladonCity_GameCorner/scripts.pory"
	lock
# 101 "data//maps/CeladonCity_GameCorner/scripts.pory"
	faceplayer
# 102 "data//maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_RumoredTeamRocketRunsThisPlace
# 103 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 104 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 105 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 106 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_FaceSlotMachine::
# 107 "data//maps/CeladonCity_GameCorner/scripts.pory"
	closemessage
# 108 "data//maps/CeladonCity_GameCorner/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 109 "data//maps/CeladonCity_GameCorner/scripts.pory"
	waitmovement 0
# 110 "data//maps/CeladonCity_GameCorner/scripts.pory"
	release
# 111 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 112 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 113 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_Woman1::
# 114 "data//maps/CeladonCity_GameCorner/scripts.pory"
	lock
# 115 "data//maps/CeladonCity_GameCorner/scripts.pory"
	faceplayer
# 116 "data//maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_ThinkMachinesHaveDifferentOdds
# 117 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 118 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 119 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 120 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_Fisher::
# 121 "data//maps/CeladonCity_GameCorner/scripts.pory"
	lock
# 122 "data//maps/CeladonCity_GameCorner/scripts.pory"
	faceplayer
# 123 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_set FLAG_GOT_10_COINS_FROM_GAMBLER, CeladonCity_GameCorner_EventScript_FisherAlreadyGotCoins
# 124 "data//maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_DoYouWantToPlay
# 125 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_EventScript_GamblerNoCoinCase
# 126 "data//maps/CeladonCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 127 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1) - 10, CeladonCity_GameCorner_EventScript_FisherNoRoomForCoins
# 128 "data//maps/CeladonCity_GameCorner/scripts.pory"
	addcoins 10
# 129 "data//maps/CeladonCity_GameCorner/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 130 "data//maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_Received10CoinsFromMan
# 131 "data//maps/CeladonCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 132 "data//maps/CeladonCity_GameCorner/scripts.pory"
	waitse
# 133 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setflag FLAG_GOT_10_COINS_FROM_GAMBLER
# 134 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 135 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 136 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 137 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_FisherNoRoomForCoins::
# 138 "data//maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_DontNeedMyCoins
# 139 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 140 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 141 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 142 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_GamblerNoCoinCase::
# 143 "data//maps/CeladonCity_GameCorner/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 144 "data//maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_DontHaveCoinCase
# 145 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 146 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 147 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 148 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_FisherAlreadyGotCoins::
# 149 "data//maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_WinsComeAndGo
# 150 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 151 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 152 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 153 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_GymGuy::
# 154 "data//maps/CeladonCity_GameCorner/scripts.pory"
	lock
# 155 "data//maps/CeladonCity_GameCorner/scripts.pory"
	faceplayer
# 156 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_set FLAG_DEFEATED_ERIKA, CeladonCity_GameCorner_EventScript_GymGuyPostVictory
# 157 "data//maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_GymGuyAdvice
# 158 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 159 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 160 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 161 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_GymGuyPostVictory::
# 162 "data//maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_RareMonsForCoins
# 163 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 164 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 165 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 166 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_Woman2::
# 167 "data//maps/CeladonCity_GameCorner/scripts.pory"
	lock
# 168 "data//maps/CeladonCity_GameCorner/scripts.pory"
	faceplayer
# 169 "data//maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_WinOrLoseItsOnlyLuck
# 170 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 171 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 172 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 173 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_OldMan::
# 174 "data//maps/CeladonCity_GameCorner/scripts.pory"
	lock
# 175 "data//maps/CeladonCity_GameCorner/scripts.pory"
	faceplayer
# 176 "data//maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_SoEasyToGetHooked
# 177 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 178 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 179 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 180 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_Scientist::
# 181 "data//maps/CeladonCity_GameCorner/scripts.pory"
	lock
# 182 "data//maps/CeladonCity_GameCorner/scripts.pory"
	faceplayer
# 183 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_set FLAG_GOT_20_COINS_FROM_GAMBLER, CeladonCity_GameCorner_EventScript_ScientistAlreadyGotCoins
# 184 "data//maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_WantSomeCoins
# 185 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_EventScript_GamblerNoCoinCase
# 186 "data//maps/CeladonCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 187 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1) - 20, CeladonCity_GameCorner_EventScript_ScientistNoRoomForCoins
# 188 "data//maps/CeladonCity_GameCorner/scripts.pory"
	addcoins 20
# 189 "data//maps/CeladonCity_GameCorner/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 190 "data//maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_Received20CoinsFromNiceGuy
# 191 "data//maps/CeladonCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 192 "data//maps/CeladonCity_GameCorner/scripts.pory"
	waitse
# 193 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setflag FLAG_GOT_20_COINS_FROM_GAMBLER
# 194 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 195 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 196 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 197 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_ScientistNoRoomForCoins::
# 198 "data//maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_YouHaveLotsOfCoins
# 199 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 200 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 201 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 202 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_ScientistAlreadyGotCoins::
# 203 "data//maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_NeedMoreCoinsForMonIWant
# 204 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 205 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 206 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 207 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_Gentleman::
# 208 "data//maps/CeladonCity_GameCorner/scripts.pory"
	lock
# 209 "data//maps/CeladonCity_GameCorner/scripts.pory"
	faceplayer
# 210 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_set FLAG_GOT_20_COINS_FROM_GAMBLER_2, CeladonCity_GameCorner_EventScript_GentlemanAlreadyGotCoins
# 211 "data//maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_HereAreSomeCoinsShoo
# 212 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_EventScript_GamblerNoCoinCase
# 213 "data//maps/CeladonCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 214 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1) - 20, CeladonCity_GameCorner_EventScript_GentlemanNoRoomForCoins
# 215 "data//maps/CeladonCity_GameCorner/scripts.pory"
	addcoins 20
# 216 "data//maps/CeladonCity_GameCorner/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 217 "data//maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_Received20CoinsFromMan
# 218 "data//maps/CeladonCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 219 "data//maps/CeladonCity_GameCorner/scripts.pory"
	waitse
# 220 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setflag FLAG_GOT_20_COINS_FROM_GAMBLER_2
# 221 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 222 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 223 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 224 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_GentlemanNoRoomForCoins::
# 225 "data//maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_YouveGotPlentyCoins
# 226 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 227 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 228 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 229 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_GentlemanAlreadyGotCoins::
# 230 "data//maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_WatchReelsClosely
# 231 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 232 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 233 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 234 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine0::
# 235 "data//maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 236 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 0
# 237 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 238 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 239 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 240 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_DontPlaySlotMachine::
# 241 "data//maps/CeladonCity_GameCorner/scripts.pory"
	releaseall
# 242 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 243 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 244 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine::
# 245 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_EventScript_SlotMachineNoCoinCase
# 246 "data//maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_SlotMachineWantToPlay, MSGBOX_YESNO
# 247 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeladonCity_GameCorner_EventScript_DontPlaySlotMachine
# 248 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setfieldeffectargument 0, LOCALID_PLAYER
# 249 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setfieldeffectargument 1, MAP_NUM(MAP_CELADON_CITY_GAME_CORNER)
# 250 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setfieldeffectargument 2, MAP_GROUP(MAP_CELADON_CITY_GAME_CORNER)
# 251 "data//maps/CeladonCity_GameCorner/scripts.pory"
	dofieldeffect FLDEFF_SMILEY_FACE_ICON
# 252 "data//maps/CeladonCity_GameCorner/scripts.pory"
	waitfieldeffect FLDEFF_SMILEY_FACE_ICON
# 253 "data//maps/CeladonCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetRandomSlotMachineId
# 254 "data//maps/CeladonCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 255 "data//maps/CeladonCity_GameCorner/scripts.pory"
	releaseall
# 256 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 257 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 258 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine1::
# 259 "data//maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 260 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 1
# 261 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 262 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 263 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 264 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine2::
# 265 "data//maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 266 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 2
# 267 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 268 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 269 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 270 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine3::
# 271 "data//maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 272 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 3
# 273 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 274 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 275 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 276 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine4::
# 277 "data//maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 278 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 4
# 279 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 280 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 281 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 282 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine5::
# 283 "data//maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 284 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 5
# 285 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 286 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 287 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 288 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine6::
# 289 "data//maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 290 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 6
# 291 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 292 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 293 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 294 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine7::
# 295 "data//maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 296 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 7
# 297 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 298 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 299 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 300 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine8::
# 301 "data//maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 302 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 8
# 303 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 304 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 305 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 306 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine9::
# 307 "data//maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 308 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 9
# 309 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 310 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 311 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 312 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine10::
# 313 "data//maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 314 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 10
# 315 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 316 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 317 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 318 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine11::
# 319 "data//maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 320 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 11
# 321 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 322 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 323 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 324 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine12::
# 325 "data//maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 326 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 12
# 327 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 328 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 329 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 330 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine13::
# 331 "data//maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 332 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 13
# 333 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 334 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 335 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 336 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine14::
# 337 "data//maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 338 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 14
# 339 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 340 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 341 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 342 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine15::
# 343 "data//maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 344 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 15
# 345 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 346 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 347 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 348 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine16::
# 349 "data//maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 350 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 16
# 351 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 352 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 353 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 354 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine17::
# 355 "data//maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 356 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 17
# 357 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 358 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 359 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 360 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine18::
# 361 "data//maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 362 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 18
# 363 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 364 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 365 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 366 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine19::
# 367 "data//maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 368 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 19
# 369 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 370 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 371 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 372 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine20::
# 373 "data//maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 374 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 20
# 375 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 376 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 377 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 378 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine21::
# 379 "data//maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 380 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 21
# 381 "data//maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 382 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 383 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 384 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachineNoCoinCase::
# 385 "data//maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_CoinCaseIsRequired
# 386 "data//maps/CeladonCity_GameCorner/scripts.pory"
	releaseall
# 387 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 388 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 389 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_Poster::
# 390 "data//maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 391 "data//maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_SwitchBehindPosterPushIt
# 392 "data//maps/CeladonCity_GameCorner/scripts.pory"
	call_if_unset FLAG_OPENED_ROCKET_HIDEOUT, CeladonCity_GameCorner_EventScript_OpenRocketHideout
# 393 "data//maps/CeladonCity_GameCorner/scripts.pory"
	releaseall
# 394 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 395 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 396 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_OpenRocketHideout::
# 397 "data//maps/CeladonCity_GameCorner/scripts.pory"
	playse SE_UNLOCK
# 398 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setmetatile 15, 2, METATILE_GameCorner_Floor_StairsTop, 0
# 399 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setmetatile 16, 2, METATILE_GameCorner_StairsTop, 1
# 400 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setmetatile 17, 2, METATILE_GameCorner_StairsBottom, 1
# 401 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setmetatile 16, 3, METATILE_GameCorner_PurpleWall_StairsTop, 1
# 402 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setmetatile 17, 3, METATILE_GameCorner_PurpleWall_stairsBottom, 1
# 403 "data//maps/CeladonCity_GameCorner/scripts.pory"
	special DrawWholeMapView
# 404 "data//maps/CeladonCity_GameCorner/scripts.pory"
	setflag FLAG_OPENED_ROCKET_HIDEOUT
# 405 "data//maps/CeladonCity_GameCorner/scripts.pory"
	return
# 406 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 407 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_RocketGrunt::
# 408 "data//maps/CeladonCity_GameCorner/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_7, CeladonCity_GameCorner_Text_GruntIntro, CeladonCity_GameCorner_Text_GruntDefeat, CeladonCity_GameCorner_Text_DefeatedGrunt
# 409 "data//maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
# 410 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 411 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 412 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_Text_DefeatedGrunt::
# 413 "data//maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_GruntPostBattle
# 414 "data//maps/CeladonCity_GameCorner/scripts.pory"
	closemessage
# 415 "data//maps/CeladonCity_GameCorner/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, CeladonCity_GameCorner_Text_GruntExitWest
# 416 "data//maps/CeladonCity_GameCorner/scripts.pory"
	call_if_ne VAR_FACING, DIR_WEST, CeladonCity_GameCorner_Text_GruntExit
# 417 "data//maps/CeladonCity_GameCorner/scripts.pory"
	removeobject LOCALID_GAME_CORNER_GRUNT
# 418 "data//maps/CeladonCity_GameCorner/scripts.pory"
	release
# 419 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 420 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 421 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_Text_GruntExitWest::
# 422 "data//maps/CeladonCity_GameCorner/scripts.pory"
	applymovement LOCALID_GAME_CORNER_GRUNT, CeladonCity_GameCorner_Movement_GruntExitWest
# 423 "data//maps/CeladonCity_GameCorner/scripts.pory"
	waitmovement 0
# 424 "data//maps/CeladonCity_GameCorner/scripts.pory"
	return
# 425 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 426 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_Text_GruntExit::
# 427 "data//maps/CeladonCity_GameCorner/scripts.pory"
	applymovement LOCALID_GAME_CORNER_GRUNT, CeladonCity_GameCorner_Movement_GruntExit
# 428 "data//maps/CeladonCity_GameCorner/scripts.pory"
	waitmovement 0
# 429 "data//maps/CeladonCity_GameCorner/scripts.pory"
	return
# 430 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 431 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_Movement_GruntExitWest::
# 432 "data//maps/CeladonCity_GameCorner/scripts.pory"
	walk_down
# 433 "data//maps/CeladonCity_GameCorner/scripts.pory"
	walk_right
# 434 "data//maps/CeladonCity_GameCorner/scripts.pory"
	walk_right
# 435 "data//maps/CeladonCity_GameCorner/scripts.pory"
	walk_up
# 436 "data//maps/CeladonCity_GameCorner/scripts.pory"
	walk_right
# 437 "data//maps/CeladonCity_GameCorner/scripts.pory"
	walk_right
# 438 "data//maps/CeladonCity_GameCorner/scripts.pory"
	walk_right
# 439 "data//maps/CeladonCity_GameCorner/scripts.pory"
	walk_right
# 440 "data//maps/CeladonCity_GameCorner/scripts.pory"
	step_end
# 441 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 442 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_Movement_GruntExit::
# 443 "data//maps/CeladonCity_GameCorner/scripts.pory"
	walk_right
# 444 "data//maps/CeladonCity_GameCorner/scripts.pory"
	walk_right
# 445 "data//maps/CeladonCity_GameCorner/scripts.pory"
	walk_right
# 446 "data//maps/CeladonCity_GameCorner/scripts.pory"
	walk_right
# 447 "data//maps/CeladonCity_GameCorner/scripts.pory"
	walk_right
# 448 "data//maps/CeladonCity_GameCorner/scripts.pory"
	walk_right
# 449 "data//maps/CeladonCity_GameCorner/scripts.pory"
	step_end
# 450 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 451 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_UnusableSlotMachine1::
# 452 "data//maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_OutOfOrder, MSGBOX_SIGN
# 453 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 454 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 455 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_UnusableSlotMachine2::
# 456 "data//maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_OutToLunch, MSGBOX_SIGN
# 457 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
# 458 "data//maps/CeladonCity_GameCorner/scripts.pory"

# 459 "data//maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_UnusableSlotMachine3::
# 460 "data//maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_SomeonesKeys, MSGBOX_SIGN
# 461 "data//maps/CeladonCity_GameCorner/scripts.pory"
	end
