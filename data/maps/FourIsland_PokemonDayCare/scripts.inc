# 1 "data//maps/FourIsland_PokemonDayCare/scripts.pory"

# 2 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_MapScripts::
# 3 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	.byte 0
# 4 "data//maps/FourIsland_PokemonDayCare/scripts.pory"

# 5 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EventScript_DaycareWoman::
# 6 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	
# 7 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	lock
# 8 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	faceplayer
# 9 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 10 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_EGG_WAITING, FourIsland_PokemonDayCare_EggWaiting
# 11 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, FourIsland_PokemonDayCare_OneMonInDaycare
# 12 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_TWO_MONS, FourIsland_PokemonDayCare_TwoMonsInDaycare
# 13 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_WouldYouLikeUsToRaiseMon, MSGBOX_YESNO
# 14 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_GiveMonToRaise
# 15 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_FineThenComeAgain
# 16 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	release
# 17 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 18 "data//maps/FourIsland_PokemonDayCare/scripts.pory"

# 19 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_GiveMonToRaise::
# 20 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 21 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, 1, FourIsland_PokemonDayCare_OnlyOneMonInParty
# 22 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_WhichMonShouldWeRaise
# 23 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	fadescreen FADE_TO_BLACK
# 24 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	special ChooseSendDaycareMon
# 25 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	waitstate
# 26 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, FourIsland_PokemonDayCare_ComeAgain
# 27 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, CountPartyAliveNonEggMons_IgnoreVar0x8004Slot
# 28 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, 0, FourIsland_PokemonDayCare_OnlyOneAliveMonInParty
# 29 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_0x8005, GetSelectedMonNicknameAndSpecies
# 30 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	waitse
# 31 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	playmoncry VAR_0x8005, CRY_MODE_NORMAL
# 32 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_WellRaiseYourMon
# 33 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	waitmoncry
# 34 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	special StoreSelectedPokemonInDaycare
# 35 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	callnative UpdateFollowingPokemon
# 36 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	incrementgamestat GAME_STAT_USED_DAYCARE
# 37 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 38 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, FourIsland_PokemonDayCare_CanRaiseOneMore
# 39 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	release
# 40 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 41 "data//maps/FourIsland_PokemonDayCare/scripts.pory"

# 42 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_ComeAgain::
# 43 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_ComeAgain
# 44 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	release
# 45 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 46 "data//maps/FourIsland_PokemonDayCare/scripts.pory"

# 47 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_CanRaiseOneMore::
# 48 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
# 49 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_GiveMonToRaise
# 50 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
# 51 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 52 "data//maps/FourIsland_PokemonDayCare/scripts.pory"

# 53 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_OnlyOneMonInParty::
# 54 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_YouHaveJustOneMon
# 55 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	release
# 56 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 57 "data//maps/FourIsland_PokemonDayCare/scripts.pory"

# 58 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_OnlyOneAliveMonInParty::
# 59 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_WhatWillYouBattleWith
# 60 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	release
# 61 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 62 "data//maps/FourIsland_PokemonDayCare/scripts.pory"

# 63 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EggWaiting::
# 64 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_HusbandWasLookingForYou
# 65 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	release
# 66 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 67 "data//maps/FourIsland_PokemonDayCare/scripts.pory"

# 68 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_MonHasGrownXLevels::
# 69 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_YourMonHasGrownXLevels
# 70 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	return
# 71 "data//maps/FourIsland_PokemonDayCare/scripts.pory"

# 72 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_DisplayLevelsGained::
# 73 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, GetNumLevelsGainedFromDaycare
# 74 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	call_if_ne VAR_RESULT, 0, FourIsland_PokemonDayCare_MonHasGrownXLevels
# 75 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	return
# 76 "data//maps/FourIsland_PokemonDayCare/scripts.pory"

# 77 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_OneMonInDaycare::
# 78 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_GoodToSeeYou
# 79 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	setvar VAR_0x8004, 0
# 80 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	call FourIsland_PokemonDayCare_DisplayLevelsGained
# 81 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
# 82 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_GiveMonToRaise
# 83 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_TakeYourMonBack, MSGBOX_YESNO
# 84 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_TryRetrieveMon
# 85 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
# 86 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 87 "data//maps/FourIsland_PokemonDayCare/scripts.pory"

# 88 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_TryRetrieveMon::
# 89 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 90 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, FourIsland_PokemonDayCare_NoRoomInParty
# 91 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 92 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	setvar VAR_0x8004, 0
# 93 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, FourIsland_PokemonDayCare_CostPrompt
# 94 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	special ShowDaycareLevelMenu
# 95 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	waitstate
# 96 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 97 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_EXITED_LEVEL_MENU, FourIsland_PokemonDayCare_ComeAgain
# 98 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_CostPrompt
# 99 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 100 "data//maps/FourIsland_PokemonDayCare/scripts.pory"

# 101 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_CostPrompt::
# 102 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	special GetDaycareCost
# 103 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_ItWillCostX, MSGBOX_YESNO
# 104 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_CheckEnoughMoney
# 105 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
# 106 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 107 "data//maps/FourIsland_PokemonDayCare/scripts.pory"

# 108 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_CheckEnoughMoney::
# 109 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, IsEnoughForCostInVar0x8005
# 110 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FourIsland_PokemonDayCare_RetrieveMon
# 111 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_NotEnoughMoney
# 112 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	release
# 113 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 114 "data//maps/FourIsland_PokemonDayCare/scripts.pory"

# 115 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_RetrieveMon::
# 116 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	applymovement LOCALID_FOUR_ISLAND_DAYCARE_WOMAN, FourIsland_PokemonDayCare_Movement_RetrieveMon
# 117 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	waitmovement 0
# 118 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, TakePokemonFromDaycare
# 119 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	special SubtractMoneyFromVar0x8005
# 120 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	playse SE_RS_SHOP
# 121 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_HeresYourMon
# 122 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	waitse
# 123 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	playmoncry VAR_RESULT, CRY_MODE_NORMAL
# 124 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 125 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_TookBackMon
# 126 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	call EventScript_RestorePrevTextColor
# 127 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	waitmoncry
# 128 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 129 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, FourIsland_PokemonDayCare_AskRetrieveOtherMon
# 130 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
# 131 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 132 "data//maps/FourIsland_PokemonDayCare/scripts.pory"

# 133 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_AskRetrieveOtherMon::
# 134 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_TakeOtherOneBackToo, MSGBOX_YESNO
# 135 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_TryRetrieveMon
# 136 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
# 137 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 138 "data//maps/FourIsland_PokemonDayCare/scripts.pory"

# 139 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_NoRoomInParty::
# 140 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_YourPartyIsFull
# 141 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	release
# 142 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 143 "data//maps/FourIsland_PokemonDayCare/scripts.pory"

# 144 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_Movement_RetrieveMon::
# 145 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 146 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 147 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	face_right
# 148 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 149 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 150 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	face_left
# 151 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 152 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 153 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	face_up
# 154 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	walk_slower_up
# 155 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	set_invisible
# 156 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 157 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 158 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 159 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 160 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 161 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	face_down
# 162 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	set_visible
# 163 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	walk_slower_down
# 164 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	step_end
# 165 "data//maps/FourIsland_PokemonDayCare/scripts.pory"

# 166 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
@ Unused. Possibly a commented script, or a typo end added to the above Movement script
# 167 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EventScript_UnusedEnd::
# 168 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 169 "data//maps/FourIsland_PokemonDayCare/scripts.pory"

# 170 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_TwoMonsInDaycare::
# 171 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_GoodToSeeYou
# 172 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	setvar VAR_0x8004, 0
# 173 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	call FourIsland_PokemonDayCare_DisplayLevelsGained
# 174 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	setvar VAR_0x8004, 1
# 175 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	call FourIsland_PokemonDayCare_DisplayLevelsGained
# 176 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_TakeYourMonBack, MSGBOX_YESNO
# 177 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_TryRetrieveMon
# 178 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_ComeAgain
# 179 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	release
# 180 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 181 "data//maps/FourIsland_PokemonDayCare/scripts.pory"

# 182 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
@ Unused
# 183 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EventScript_UnusedRetrieveMon::
# 184 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	special ShowDaycareLevelMenu
# 185 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	waitstate
# 186 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, 2, FourIsland_PokemonDayCare_ComeAgain
# 187 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 188 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, TakePokemonFromDaycare
# 189 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_HeresYourMon
# 190 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_ComeAgain
# 191 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	release
# 192 "data//maps/FourIsland_PokemonDayCare/scripts.pory"
	end
