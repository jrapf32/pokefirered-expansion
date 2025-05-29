# 1 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 2 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_MapScripts::
# 3 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	.byte 0
# 4 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 5 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl::
# 6 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	
# 7 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	lock
# 8 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	faceplayer
# 9 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	call CeladonCity_DepartmentStore_Roof_EventScript_CheckPlayerHasDrinks
# 10 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_TEMP_1, 0, CeladonCity_DepartmentStore_Roof_EventScript_IWantDrink
# 11 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveDrink
# 12 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	end
# 13 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 14 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_CheckPlayerHasDrinks::
# 15 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	setvar VAR_TEMP_1, 0
# 16 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	checkitem ITEM_FRESH_WATER
# 17 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, CeladonCity_DepartmentStore_Roof_EventScript_SetHasFreshWater
# 18 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	checkitem ITEM_SODA_POP
# 19 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, CeladonCity_DepartmentStore_Roof_EventScript_SetHasSodaPop
# 20 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	checkitem ITEM_LEMONADE
# 21 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, CeladonCity_DepartmentStore_Roof_EventScript_SetHasLemonade
# 22 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	return
# 23 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 24 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_SetHasFreshWater::
# 25 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	addvar VAR_TEMP_1, 1
# 26 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	return
# 27 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 28 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_SetHasSodaPop::
# 29 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	addvar VAR_TEMP_1, 2
# 30 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	return
# 31 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 32 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_SetHasLemonade::
# 33 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	addvar VAR_TEMP_1, 4
# 34 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	return
# 35 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 36 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveDrink::
# 37 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_ImThirstyGiveHerDrink, MSGBOX_YESNO
# 38 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 39 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 40 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	message CeladonCity_DepartmentStore_Roof_Text_GiveWhichDrink
# 41 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	waitmessage
# 42 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 43 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	switch VAR_TEMP_1
# 44 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 1, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWater
# 45 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 2, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPop
# 46 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 3, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterSodaPop
# 47 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 4, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveLemonade
# 48 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 5, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterLemonade
# 49 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 6, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPopLemonade
# 50 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 7, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveAllDrinks
# 51 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	end
# 52 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 53 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWater::
# 54 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	multichoice 0, 0, MULTICHOICE_THIRSTY_GIRL_FRESH_WATER, FALSE
# 55 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	switch VAR_RESULT
# 56 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 0, CeladonCity_DepartmentStore_Roof_EventScript_GiveFreshWater
# 57 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 1, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 58 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 127, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 59 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	end
# 60 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 61 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPop::
# 62 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	multichoice 0, 0, MULTICHOICE_THIRSTY_GIRL_SODA_POP, FALSE
# 63 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	switch VAR_RESULT
# 64 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 0, CeladonCity_DepartmentStore_Roof_EventScript_GiveSodaPop
# 65 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 1, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 66 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 127, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 67 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	end
# 68 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 69 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterSodaPop::
# 70 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	multichoice 0, 0, MULTICHOICE_THIRSTY_GIRL_FRESH_WATER_SODA_POP, FALSE
# 71 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	switch VAR_RESULT
# 72 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 0, CeladonCity_DepartmentStore_Roof_EventScript_GiveFreshWater
# 73 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 1, CeladonCity_DepartmentStore_Roof_EventScript_GiveSodaPop
# 74 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 2, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 75 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 127, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 76 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	end
# 77 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 78 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveLemonade::
# 79 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	multichoice 0, 0, MULTICHOICE_THIRSTY_GIRL_LEMONADE, FALSE
# 80 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	switch VAR_RESULT
# 81 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 0, CeladonCity_DepartmentStore_Roof_EventScript_GiveLemonade
# 82 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 1, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 83 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 127, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 84 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	end
# 85 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 86 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterLemonade::
# 87 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	multichoice 0, 0, MULTICHOICE_THIRSTY_GIRL_FRESH_WATER_LEMONADE, FALSE
# 88 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	switch VAR_RESULT
# 89 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 0, CeladonCity_DepartmentStore_Roof_EventScript_GiveFreshWater
# 90 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 1, CeladonCity_DepartmentStore_Roof_EventScript_GiveLemonade
# 91 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 2, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 92 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 127, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 93 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	end
# 94 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 95 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPopLemonade::
# 96 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	multichoice 0, 0, MULTICHOICE_THIRSTY_GIRL_SODA_POP_LEMONADE, FALSE
# 97 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	switch VAR_RESULT
# 98 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 0, CeladonCity_DepartmentStore_Roof_EventScript_GiveSodaPop
# 99 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 1, CeladonCity_DepartmentStore_Roof_EventScript_GiveLemonade
# 100 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 2, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 101 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 127, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 102 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	end
# 103 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 104 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveAllDrinks::
# 105 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	multichoice 0, 0, MULTICHOICE_THIRSTY_GIRL_FRESH_WATER_SODA_POP_LEMONADE, FALSE
# 106 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	switch VAR_RESULT
# 107 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 0, CeladonCity_DepartmentStore_Roof_EventScript_GiveFreshWater
# 108 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 1, CeladonCity_DepartmentStore_Roof_EventScript_GiveSodaPop
# 109 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 2, CeladonCity_DepartmentStore_Roof_EventScript_GiveLemonade
# 110 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 3, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 111 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 127, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 112 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	end
# 113 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 114 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_GiveFreshWater::
# 115 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	setvar VAR_0x8008, ITEM_FRESH_WATER
# 116 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	setvar VAR_0x8009, ITEM_TM16
# 117 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_set FLAG_GOT_TM16_FROM_THIRSTY_GIRL, CeladonCity_DepartmentStore_Roof_EventScript_NotThirstyAfterAll
# 118 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_YayFreshWaterHaveThis
# 119 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink
# 120 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	end
# 121 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 122 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_GiveSodaPop::
# 123 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	setvar VAR_0x8008, ITEM_SODA_POP
# 124 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	setvar VAR_0x8009, ITEM_TM20
# 125 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_set FLAG_GOT_TM20_FROM_THIRSTY_GIRL, CeladonCity_DepartmentStore_Roof_EventScript_NotThirstyAfterAll
# 126 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_YaySodaPopHaveThis
# 127 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink
# 128 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	end
# 129 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 130 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_GiveLemonade::
# 131 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	setvar VAR_0x8008, ITEM_LEMONADE
# 132 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	setvar VAR_0x8009, ITEM_TM33
# 133 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_set FLAG_GOT_TM33_FROM_THIRSTY_GIRL, CeladonCity_DepartmentStore_Roof_EventScript_NotThirstyAfterAll
# 134 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_YayLemonadeHaveThis
# 135 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink
# 136 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	end
# 137 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 138 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink::
# 139 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 140 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	bufferitemname STR_VAR_2, VAR_0x8009
# 141 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	removeitem VAR_0x8008
# 142 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	checkitemspace VAR_0x8009
# 143 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_DepartmentStore_Roof_EventScript_NoRoomForReward
# 144 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	additem VAR_0x8009
# 145 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 146 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 147 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	message Text_ReceivedItemFromLittleGirl
# 148 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	waitmessage
# 149 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	waitfanfare
# 150 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	putitemaway VAR_0x8009
# 151 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	call EventScript_RestorePrevTextColor
# 152 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	call_if_eq VAR_0x8008, ITEM_FRESH_WATER, CeladonCity_DepartmentStore_Roof_EventScript_ExplainTM16
# 153 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	call_if_eq VAR_0x8008, ITEM_SODA_POP, CeladonCity_DepartmentStore_Roof_EventScript_ExplainTM20
# 154 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	call_if_eq VAR_0x8008, ITEM_LEMONADE, CeladonCity_DepartmentStore_Roof_EventScript_ExplainTM33
# 155 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	release
# 156 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	end
# 157 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 158 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_ExplainTM16::
# 159 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	setflag FLAG_GOT_TM16_FROM_THIRSTY_GIRL
# 160 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_ExplainTM16
# 161 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	return
# 162 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 163 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_ExplainTM20::
# 164 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	setflag FLAG_GOT_TM20_FROM_THIRSTY_GIRL
# 165 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_ExplainTM20
# 166 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	return
# 167 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 168 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_ExplainTM33::
# 169 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	setflag FLAG_GOT_TM33_FROM_THIRSTY_GIRL
# 170 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_ExplainTM33
# 171 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	return
# 172 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 173 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_NoRoomForReward::
# 174 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_DontHaveSpaceForThis
# 175 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	release
# 176 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	end
# 177 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 178 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink::
# 179 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	release
# 180 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	end
# 181 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 182 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_IWantDrink::
# 183 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_ImThirstyIWantDrink
# 184 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	release
# 185 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	end
# 186 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 187 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_NotThirstyAfterAll::
# 188 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_ImNotThirstyAfterAll
# 189 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	release
# 190 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	end
# 191 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 192 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_CooltrainerM::
# 193 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_MySisterIsImmature, MSGBOX_NPC
# 194 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	end
# 195 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 196 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_FloorSign::
# 197 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_FloorSign, MSGBOX_SIGN
# 198 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	end
# 199 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 200 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_VendingMachine::
# 201 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	lockall
# 202 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	message CeladonCity_DepartmentStore_Roof_Text_VendingMachineWhatDoesItHave
# 203 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	waitmessage
# 204 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	showmoneybox 0, 0
# 205 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink
# 206 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	end
# 207 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 208 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink::
# 209 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	multichoice 12, 0, MULTICHOICE_CELADON_VENDING_MACHINE, FALSE
# 210 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 211 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	switch VAR_TEMP_1
# 212 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 0, CeladonCity_DepartmentStore_Roof_EventScript_BuyFreshWater
# 213 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 1, CeladonCity_DepartmentStore_Roof_EventScript_BuySodaPop
# 214 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	case 2, CeladonCity_DepartmentStore_Roof_EventScript_BuyLemonade
# 215 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_NotThirsty
# 216 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_ExitVendingMachine
# 217 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	end
# 218 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 219 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_BuyFreshWater::
# 220 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	setvar VAR_TEMP_0, ITEM_FRESH_WATER
# 221 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	checkmoney 200
# 222 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink
# 223 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	end
# 224 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 225 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_BuySodaPop::
# 226 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	setvar VAR_TEMP_0, ITEM_SODA_POP
# 227 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	checkmoney 300
# 228 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink
# 229 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	end
# 230 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 231 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_BuyLemonade::
# 232 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	setvar VAR_TEMP_0, ITEM_LEMONADE
# 233 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	checkmoney 350
# 234 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink
# 235 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	end
# 236 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 237 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_RemoveMoneyFreshWater::
# 238 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	removemoney 200
# 239 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	return
# 240 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 241 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_RemoveMoneySodaPop::
# 242 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	removemoney 300
# 243 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	return
# 244 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 245 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_RemoveMoneyLemonade::
# 246 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	removemoney 350
# 247 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	return
# 248 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 249 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink::
# 250 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_DepartmentStore_Roof_EventScript_NotEnoughMoney
# 251 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	checkitemspace VAR_TEMP_0
# 252 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_DepartmentStore_Roof_EventScript_NoRoomForDrink
# 253 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CeladonCity_DepartmentStore_Roof_EventScript_RemoveMoneyFreshWater
# 254 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CeladonCity_DepartmentStore_Roof_EventScript_RemoveMoneySodaPop
# 255 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, CeladonCity_DepartmentStore_Roof_EventScript_RemoveMoneyLemonade
# 256 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	updatemoneybox
# 257 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_0
# 258 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	playse SE_VEND
# 259 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_DrinkCanPoppedOut
# 260 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	additem VAR_TEMP_0
# 261 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_ChooseNewDrink
# 262 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	end
# 263 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 264 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_ChooseNewDrink::
# 265 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	message CeladonCity_DepartmentStore_Roof_Text_VendingMachineWhatDoesItHave
# 266 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	waitmessage
# 267 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink
# 268 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	end
# 269 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 270 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_NotEnoughMoney::
# 271 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_NotEnoughMoney
# 272 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_ExitVendingMachine
# 273 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	end
# 274 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 275 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_NoRoomForDrink::
# 276 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_NoMoreRoomForStuff
# 277 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_ExitVendingMachine
# 278 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	end
# 279 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"

# 280 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_ExitVendingMachine::
# 281 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	hidemoneybox
# 282 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	releaseall
# 283 "data//maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	end
