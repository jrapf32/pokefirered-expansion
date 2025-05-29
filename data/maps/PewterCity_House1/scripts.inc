# 1 "data//maps/PewterCity_House1/scripts.pory"

# 2 "data//maps/PewterCity_House1/scripts.pory"
PewterCity_House1_MapScripts::
# 3 "data//maps/PewterCity_House1/scripts.pory"
	.byte 0
# 4 "data//maps/PewterCity_House1/scripts.pory"

# 5 "data//maps/PewterCity_House1/scripts.pory"
PewterCity_House1_EventScript_BaldingMan::
# 6 "data//maps/PewterCity_House1/scripts.pory"
	msgbox PewterCity_House1_Text_TradeMonsAreFinicky, MSGBOX_NPC
# 7 "data//maps/PewterCity_House1/scripts.pory"
	end
# 8 "data//maps/PewterCity_House1/scripts.pory"

# 9 "data//maps/PewterCity_House1/scripts.pory"
PewterCity_House1_EventScript_LittleBoy::
# 10 "data//maps/PewterCity_House1/scripts.pory"
	lock
# 11 "data//maps/PewterCity_House1/scripts.pory"
	msgbox PewterCity_House1_Text_NidoranSit
# 12 "data//maps/PewterCity_House1/scripts.pory"
	call PewterCity_House1_EventScript_DoNidoranCry
# 13 "data//maps/PewterCity_House1/scripts.pory"
	release
# 14 "data//maps/PewterCity_House1/scripts.pory"
	end
# 15 "data//maps/PewterCity_House1/scripts.pory"

# 16 "data//maps/PewterCity_House1/scripts.pory"
PewterCity_House1_EventScript_Nidoran::
# 17 "data//maps/PewterCity_House1/scripts.pory"
	lock
# 18 "data//maps/PewterCity_House1/scripts.pory"
	faceplayer
# 19 "data//maps/PewterCity_House1/scripts.pory"
	call PewterCity_House1_EventScript_DoNidoranCry
# 20 "data//maps/PewterCity_House1/scripts.pory"
	applymovement LOCALID_PEWTER_HOUSE_NIDORAN, Common_Movement_FaceOriginalDirection
# 21 "data//maps/PewterCity_House1/scripts.pory"
	waitmovement 0
# 22 "data//maps/PewterCity_House1/scripts.pory"
	release
# 23 "data//maps/PewterCity_House1/scripts.pory"
	end
# 24 "data//maps/PewterCity_House1/scripts.pory"

# 25 "data//maps/PewterCity_House1/scripts.pory"
PewterCity_House1_EventScript_DoNidoranCry::
# 26 "data//maps/PewterCity_House1/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 27 "data//maps/PewterCity_House1/scripts.pory"
	waitse
# 28 "data//maps/PewterCity_House1/scripts.pory"
	playmoncry SPECIES_NIDORAN_M, CRY_MODE_NORMAL
# 29 "data//maps/PewterCity_House1/scripts.pory"
	msgbox PewterCity_House1_Text_Nidoran
# 30 "data//maps/PewterCity_House1/scripts.pory"
	waitmoncry
# 31 "data//maps/PewterCity_House1/scripts.pory"
	call EventScript_RestorePrevTextColor
# 32 "data//maps/PewterCity_House1/scripts.pory"
	return
