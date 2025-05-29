# 1 "data//maps/ViridianCity_School/scripts.pory"

# 2 "data//maps/ViridianCity_School/scripts.pory"
ViridianCity_School_MapScripts::
# 3 "data//maps/ViridianCity_School/scripts.pory"
	.byte 0
# 4 "data//maps/ViridianCity_School/scripts.pory"

# 5 "data//maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_Lass::
# 6 "data//maps/ViridianCity_School/scripts.pory"
	lock
# 7 "data//maps/ViridianCity_School/scripts.pory"
	faceplayer
# 8 "data//maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_TryingToMemorizeNotes
# 9 "data//maps/ViridianCity_School/scripts.pory"
	closemessage
# 10 "data//maps/ViridianCity_School/scripts.pory"
	applymovement LOCALID_SCHOOL_LASS, Common_Movement_WalkInPlaceFasterUp
# 11 "data//maps/ViridianCity_School/scripts.pory"
	waitmovement 0
# 12 "data//maps/ViridianCity_School/scripts.pory"
	release
# 13 "data//maps/ViridianCity_School/scripts.pory"
	end
# 14 "data//maps/ViridianCity_School/scripts.pory"

# 15 "data//maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_Woman::
# 16 "data//maps/ViridianCity_School/scripts.pory"
	lock
# 17 "data//maps/ViridianCity_School/scripts.pory"
	faceplayer
# 18 "data//maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_ReadBlackboardCarefully
# 19 "data//maps/ViridianCity_School/scripts.pory"
	closemessage
# 20 "data//maps/ViridianCity_School/scripts.pory"
	applymovement LOCALID_SCHOOL_WOMAN, Common_Movement_FaceOriginalDirection
# 21 "data//maps/ViridianCity_School/scripts.pory"
	waitmovement 0
# 22 "data//maps/ViridianCity_School/scripts.pory"
	release
# 23 "data//maps/ViridianCity_School/scripts.pory"
	end
# 24 "data//maps/ViridianCity_School/scripts.pory"

# 25 "data//maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_Notebook::
# 26 "data//maps/ViridianCity_School/scripts.pory"
	lockall
# 27 "data//maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_NotebookFirstPage
# 28 "data//maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_TurnThePage, MSGBOX_YESNO
# 29 "data//maps/ViridianCity_School/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_School_EventScript_StopReadingNotebook
# 30 "data//maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_NotebookSecondPage
# 31 "data//maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_TurnThePage, MSGBOX_YESNO
# 32 "data//maps/ViridianCity_School/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_School_EventScript_StopReadingNotebook
# 33 "data//maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_NotebookThirdPage
# 34 "data//maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_TurnThePage, MSGBOX_YESNO
# 35 "data//maps/ViridianCity_School/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_School_EventScript_StopReadingNotebook
# 36 "data//maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_NotebookFourthPage
# 37 "data//maps/ViridianCity_School/scripts.pory"
	applymovement LOCALID_SCHOOL_LASS, Common_Movement_WalkInPlaceFasterUp
# 38 "data//maps/ViridianCity_School/scripts.pory"
	waitmovement 0
# 39 "data//maps/ViridianCity_School/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 40 "data//maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_HeyDontLookAtMyNotes
# 41 "data//maps/ViridianCity_School/scripts.pory"
	releaseall
# 42 "data//maps/ViridianCity_School/scripts.pory"
	end
# 43 "data//maps/ViridianCity_School/scripts.pory"

# 44 "data//maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_StopReadingNotebook::
# 45 "data//maps/ViridianCity_School/scripts.pory"
	releaseall
# 46 "data//maps/ViridianCity_School/scripts.pory"
	end
# 47 "data//maps/ViridianCity_School/scripts.pory"

# 48 "data//maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_Blackboard::
# 49 "data//maps/ViridianCity_School/scripts.pory"
	lockall
# 50 "data//maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_BlackboardListsStatusProblems
# 51 "data//maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
# 52 "data//maps/ViridianCity_School/scripts.pory"
	end
# 53 "data//maps/ViridianCity_School/scripts.pory"

# 54 "data//maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_ChooseBlackboardTopic::
# 55 "data//maps/ViridianCity_School/scripts.pory"
	message ViridianCity_School_Text_ReadWhichTopic
# 56 "data//maps/ViridianCity_School/scripts.pory"
	waitmessage
# 57 "data//maps/ViridianCity_School/scripts.pory"
	multichoicegrid 7, 1, MULTICHOICE_TRAINER_SCHOOL_WHITEBOARD, 3, FALSE
# 58 "data//maps/ViridianCity_School/scripts.pory"
	switch VAR_RESULT
# 59 "data//maps/ViridianCity_School/scripts.pory"
	case 0, ViridianCity_School_EventScript_ReadSleep
# 60 "data//maps/ViridianCity_School/scripts.pory"
	case 1, ViridianCity_School_EventScript_ReadPoison
# 61 "data//maps/ViridianCity_School/scripts.pory"
	case 2, ViridianCity_School_EventScript_ReadParalysis
# 62 "data//maps/ViridianCity_School/scripts.pory"
	case 3, ViridianCity_School_EventScript_ReadBurn
# 63 "data//maps/ViridianCity_School/scripts.pory"
	case 4, ViridianCity_School_EventScript_ReadFreeze
# 64 "data//maps/ViridianCity_School/scripts.pory"
	case 5, ViridianCity_School_EventScript_ExitBlackboard
# 65 "data//maps/ViridianCity_School/scripts.pory"
	case 127, ViridianCity_School_EventScript_ExitBlackboard
# 66 "data//maps/ViridianCity_School/scripts.pory"
	end
# 67 "data//maps/ViridianCity_School/scripts.pory"

# 68 "data//maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_ReadSleep::
# 69 "data//maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainSleep
# 70 "data//maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
# 71 "data//maps/ViridianCity_School/scripts.pory"
	end
# 72 "data//maps/ViridianCity_School/scripts.pory"

# 73 "data//maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_ReadBurn::
# 74 "data//maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainBurn
# 75 "data//maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
# 76 "data//maps/ViridianCity_School/scripts.pory"
	end
# 77 "data//maps/ViridianCity_School/scripts.pory"

# 78 "data//maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_ReadPoison::
# 79 "data//maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainPoison
# 80 "data//maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
# 81 "data//maps/ViridianCity_School/scripts.pory"
	end
# 82 "data//maps/ViridianCity_School/scripts.pory"

# 83 "data//maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_ReadFreeze::
# 84 "data//maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainFreeze
# 85 "data//maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
# 86 "data//maps/ViridianCity_School/scripts.pory"
	end
# 87 "data//maps/ViridianCity_School/scripts.pory"

# 88 "data//maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_ReadParalysis::
# 89 "data//maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainParalysis
# 90 "data//maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
# 91 "data//maps/ViridianCity_School/scripts.pory"
	end
# 92 "data//maps/ViridianCity_School/scripts.pory"

# 93 "data//maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_ExitBlackboard::
# 94 "data//maps/ViridianCity_School/scripts.pory"
	releaseall
# 95 "data//maps/ViridianCity_School/scripts.pory"
	end
