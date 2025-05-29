# 1 "data//maps/SSAnne_CaptainsOffice/scripts.pory"

# 2 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
SSAnne_CaptainsOffice_MapScripts::
# 3 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	.byte 0
# 4 "data//maps/SSAnne_CaptainsOffice/scripts.pory"

# 5 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
SSAnne_CaptainsOffice_EventScript_Captain::
# 6 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	lock
# 7 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	goto_if_set FLAG_GOT_HM01, SSAnne_CaptainsOffice_EventScript_AlreadyGotCut
# 8 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_CaptainIFeelSeasick
# 9 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 10 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	message SSAnne_CaptainsOffice_Text_RubbedCaptainsBack
# 11 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	waitmessage
# 12 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	playfanfare MUS_HEAL
# 13 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	waitfanfare
# 14 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	call EventScript_RestorePrevTextColor
# 15 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	delay 50
# 16 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	applymovement LOCALID_SS_ANNE_CAPTAIN, Common_Movement_FacePlayer
# 17 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	waitmovement 0
# 18 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_ThankYouHaveHMForCut
# 19 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	giveitem_msg SSAnne_CaptainsOffice_Text_ObtainedHM01FromCaptain, ITEM_HM01, 1, MUS_OBTAIN_KEY_ITEM
# 20 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_ExplainCut
# 21 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	setflag FLAG_GOT_HM01
# 22 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	setvar VAR_MAP_SCENE_VERMILION_CITY, 1
# 23 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	release
# 24 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	end
# 25 "data//maps/SSAnne_CaptainsOffice/scripts.pory"

# 26 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
@ Unused
# 27 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
SSAnne_CaptainsOffice_EventScript_NoRoomForCut::
# 28 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_YouHaveNoRoomForThis
# 29 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	closemessage
# 30 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	applymovement LOCALID_SS_ANNE_CAPTAIN, Common_Movement_FaceOriginalDirection
# 31 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	waitmovement 0
# 32 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	release
# 33 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	end
# 34 "data//maps/SSAnne_CaptainsOffice/scripts.pory"

# 35 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
SSAnne_CaptainsOffice_EventScript_AlreadyGotCut::
# 36 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	applymovement LOCALID_SS_ANNE_CAPTAIN, Common_Movement_FacePlayer
# 37 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	waitmovement 0
# 38 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_SSAnneWillSetSailSoon
# 39 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	release
# 40 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	end
# 41 "data//maps/SSAnne_CaptainsOffice/scripts.pory"

# 42 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
SSAnne_CaptainsOffice_EventScript_TrashCan::
# 43 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_YuckShouldntHaveLooked, MSGBOX_SIGN
# 44 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	end
# 45 "data//maps/SSAnne_CaptainsOffice/scripts.pory"

# 46 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
SSAnne_CaptainsOffice_EventScript_Book::
# 47 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	msgbox SSAnne_CaptainsOffice_Text_HowToConquerSeasickness, MSGBOX_SIGN
# 48 "data//maps/SSAnne_CaptainsOffice/scripts.pory"
	end
