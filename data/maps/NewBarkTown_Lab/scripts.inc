# 1 "data/maps/NewBarkTown_Lab/scripts.pory"

# 2 "data/maps/NewBarkTown_Lab/scripts.pory"
.set PLAYER_STARTER_SPECIES,  VAR_TEMP_2
# 3 "data/maps/NewBarkTown_Lab/scripts.pory"

# 4 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_MapScripts::
# 5 "data/maps/NewBarkTown_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewBarkTown_Lab_OnTransition
# 6 "data/maps/NewBarkTown_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NewBarkTown_Lab_OnFrame
# 7 "data/maps/NewBarkTown_Lab/scripts.pory"
	.byte 0
# 8 "data/maps/NewBarkTown_Lab/scripts.pory"

# 9 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_OnTransition::
# 10 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 6, NewBarkTown_Lab_EventScript_ElmAtComputer
# 11 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 2, NewBarkTown_Lab_EventScript_ElmAtComputer
# 12 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 3, NewBarkTown_Lab_EventScript_ElmAtComputer
# 13 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 14 "data/maps/NewBarkTown_Lab/scripts.pory"
	
# 15 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_OnFrame::
# 16 "data/maps/NewBarkTown_Lab/scripts.pory"
	map_script_2 VAR_NEWBARKTOWN_LABSTATE, 4, NewBarkTown_Lab_EventScript_PoliceEpisode
# 17 "data/maps/NewBarkTown_Lab/scripts.pory"
	.2byte 0
# 18 "data/maps/NewBarkTown_Lab/scripts.pory"

# 19 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_ElmAtComputer::
# 20 "data/maps/NewBarkTown_Lab/scripts.pory"
	setobjectxyperm LOCALID_ELM, 3, 2
# 21 "data/maps/NewBarkTown_Lab/scripts.pory"
	setobjectmovementtype LOCALID_ELM, MOVEMENT_TYPE_FACE_UP
# 22 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 23 "data/maps/NewBarkTown_Lab/scripts.pory"

# 24 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_TriggerStartLabLeft::	
# 25 "data/maps/NewBarkTown_Lab/scripts.pory"
	lock
# 26 "data/maps/NewBarkTown_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewBarkTown_Lab_Movement_WalkRight
# 27 "data/maps/NewBarkTown_Lab/scripts.pory"
	waitmovement 0
# 28 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto NewBarkTown_Lab_EventScript_TriggerStartLab
# 29 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 30 "data/maps/NewBarkTown_Lab/scripts.pory"

# 31 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_TriggerStartLabRight::
# 32 "data/maps/NewBarkTown_Lab/scripts.pory"
	lock
# 33 "data/maps/NewBarkTown_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewBarkTown_Lab_Movement_WalkLeft
# 34 "data/maps/NewBarkTown_Lab/scripts.pory"
	waitmovement 0
# 35 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto NewBarkTown_Lab_EventScript_TriggerStartLab
# 36 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 37 "data/maps/NewBarkTown_Lab/scripts.pory"

# 38 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_TriggerStartLab::
# 39 "data/maps/NewBarkTown_Lab/scripts.pory"
	lock
# 40 "data/maps/NewBarkTown_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewBarkTown_LabMovement_WalkToElm
# 41 "data/maps/NewBarkTown_Lab/scripts.pory"
	waitmovement 0
# 42 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto NewBarkTown_Lab_EventScript_ElmIntro
# 43 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 44 "data/maps/NewBarkTown_Lab/scripts.pory"

# 45 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_EventScript_Aide1::
# 46 "data/maps/NewBarkTown_Lab/scripts.pory"
	lock
# 47 "data/maps/NewBarkTown_Lab/scripts.pory"
	faceplayer
# 48 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_AideAlwaysBusy, MSGBOX_DEFAULT
# 49 "data/maps/NewBarkTown_Lab/scripts.pory"
	closemessage
# 50 "data/maps/NewBarkTown_Lab/scripts.pory"
	release
# 51 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 52 "data/maps/NewBarkTown_Lab/scripts.pory"

# 53 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_EventScript_Aide2::
# 54 "data/maps/NewBarkTown_Lab/scripts.pory"
	lock
# 55 "data/maps/NewBarkTown_Lab/scripts.pory"
	faceplayer
# 56 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 5, NewBarkTown_EventScript_Aide2Testimony
# 57 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_AideSave, MSGBOX_DEFAULT
# 58 "data/maps/NewBarkTown_Lab/scripts.pory"
	closemessage
# 59 "data/maps/NewBarkTown_Lab/scripts.pory"
	release
# 60 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 61 "data/maps/NewBarkTown_Lab/scripts.pory"

# 62 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_EventScript_Aide2Testimony::
# 63 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_AideTheftTestimony, MSGBOX_DEFAULT
# 64 "data/maps/NewBarkTown_Lab/scripts.pory"
	closemessage
# 65 "data/maps/NewBarkTown_Lab/scripts.pory"
	release
# 66 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 67 "data/maps/NewBarkTown_Lab/scripts.pory"

# 68 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_Elm::
# 69 "data/maps/NewBarkTown_Lab/scripts.pory"
	lock
# 70 "data/maps/NewBarkTown_Lab/scripts.pory"
	faceplayer
# 71 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_set FLAG_HIDE_NEWBARKTOWN_LAB_AIDE, NewBarkTown_Lab_EventScript_ElmAideIsWaiting
# 72 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 7, NewBarkTown_Lab_EventScript_ElmMasterBall
# 73 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 8, NewBarkTown_Lab_EventScript_ElmKimono
# 74 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 9, NewBarkTown_Lab_EventScript_ElmLeague
# 75 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 10, NewBarkTown_Lab_EventScript_ElmSSTicket
# 76 "data/maps/NewBarkTown_Lab/scripts.pory"

# 77 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_set FLAG_SHOWN_ELM_TOGEPI, NewBarkTown_Lab_EventScript_Elm_CallMe
# 78 "data/maps/NewBarkTown_Lab/scripts.pory"
	call_if_unset FLAG_SHOWN_ELM_TOGEPI, NewBarkTown_Lab_EventScript_Elm_Check_Togepi
# 79 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_ge VAR_GOLDENROD_CITY_STATE, 1, NewBarkTown_Lab_EventScript_Elm_Check_WhereIsEgg
# 80 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 5, NewBarkTown_Lab_EventScript_ElmState5
# 81 "data/maps/NewBarkTown_Lab/scripts.pory"

# 82 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_ge VAR_NEWBARKTOWN_LABSTATE, 6, NewBarkTown_Lab_EventScript_ElmState5
# 83 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 2, CopNewBarkTown_Lab_EventScript_ElmState2
# 84 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 3, CopNewBarkTown_Lab_EventScript_ElmState2
# 85 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, NewBarkTown_Lab_EventScript_MrPokemon
# 86 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 1, NewBarkTown_Lab_EventScript_ElmChoosePokemon
# 87 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 88 "data/maps/NewBarkTown_Lab/scripts.pory"

# 89 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_ElmAideIsWaiting::
# 90 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ElmAideIsWaiting, MSGBOX_DEFAULT
# 91 "data/maps/NewBarkTown_Lab/scripts.pory"
	closemessage
# 92 "data/maps/NewBarkTown_Lab/scripts.pory"
	release
# 93 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 94 "data/maps/NewBarkTown_Lab/scripts.pory"

# 95 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ElmAideIsWaiting:
# 96 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "{PLAYER}!\p"
# 97 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "What are you doing here?\p"
# 98 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "My aide is still waiting for you\n"
# 99 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "In VIOLET CITY!$"
# 100 "data/maps/NewBarkTown_Lab/scripts.pory"

# 101 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_ElmIntro::
# 102 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ElmIntro, MSGBOX_YESNO
# 103 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, NewBarkTown_Lab_EventScript_ElmAccepted
# 104 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, NewBarkTown_Lab_EventScript_ElmRefused
# 105 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 106 "data/maps/NewBarkTown_Lab/scripts.pory"

# 107 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_ElmRefused::
# 108 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ElmRefused, MSGBOX_YESNO
# 109 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, NewBarkTown_Lab_EventScript_ElmAccepted
# 110 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, NewBarkTown_Lab_EventScript_ElmRefused
# 111 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 112 "data/maps/NewBarkTown_Lab/scripts.pory"

# 113 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_ElmAccepted::
# 114 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ElmAccepted, MSGBOX_DEFAULT
# 115 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ElmResearchAmbitions, MSGBOX_DEFAULT
# 116 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 30
# 117 "data/maps/NewBarkTown_Lab/scripts.pory"
	playse SE_PC_LOGIN
# 118 "data/maps/NewBarkTown_Lab/scripts.pory"
	waitse
# 119 "data/maps/NewBarkTown_Lab/scripts.pory"
	playse SE_PIN
# 120 "data/maps/NewBarkTown_Lab/scripts.pory"
	applymovement LOCALID_ELM, Common_Movement_QuestionMark
# 121 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 60
# 122 "data/maps/NewBarkTown_Lab/scripts.pory"
	applymovement LOCALID_ELM, NewBarkTown_Lab_Movement_CheckEmail
# 123 "data/maps/NewBarkTown_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewBarkTown_Lab_Movement_Look_Left
# 124 "data/maps/NewBarkTown_Lab/scripts.pory"
	waitmovement 0
# 125 "data/maps/NewBarkTown_Lab/scripts.pory"
	waitmovement 0
# 126 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ElmGotAnEmail, MSGBOX_DEFAULT
# 127 "data/maps/NewBarkTown_Lab/scripts.pory"
	closemessage
# 128 "data/maps/NewBarkTown_Lab/scripts.pory"
	applymovement LOCALID_ELM, NewBarkTown_Lab_Movement_ReturnFromEmail
# 129 "data/maps/NewBarkTown_Lab/scripts.pory"
	waitmovement 0
# 130 "data/maps/NewBarkTown_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewBarkTown_Lab_Movement_Look_Up
# 131 "data/maps/NewBarkTown_Lab/scripts.pory"
	waitmovement 0
# 132 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 30
# 133 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ElmMissionFromMrPokemon, MSGBOX_DEFAULT
# 134 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto NewBarkTown_Lab_EventScript_ElmChoosePokemon
# 135 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 136 "data/maps/NewBarkTown_Lab/scripts.pory"

# 137 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_ElmChoosePokemon::
# 138 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ElmChooseAPokemon, MSGBOX_DEFAULT
# 139 "data/maps/NewBarkTown_Lab/scripts.pory"
	closemessage
# 140 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_NEWBARKTOWN_LABSTATE, 1
# 141 "data/maps/NewBarkTown_Lab/scripts.pory"
	release
# 142 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 143 "data/maps/NewBarkTown_Lab/scripts.pory"

# 144 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_TriggerReturnPlayer::
# 145 "data/maps/NewBarkTown_Lab/scripts.pory"
	lock
# 146 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ElmWhereGoing, MSGBOX_DEFAULT
# 147 "data/maps/NewBarkTown_Lab/scripts.pory"
	closemessage
# 148 "data/maps/NewBarkTown_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewBarkTown_Lab_Movement_ReturnPlayer
# 149 "data/maps/NewBarkTown_Lab/scripts.pory"
	waitmovement 0
# 150 "data/maps/NewBarkTown_Lab/scripts.pory"
	release
# 151 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 152 "data/maps/NewBarkTown_Lab/scripts.pory"

# 153 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_ShouldntTouch::
# 154 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ShouldntTouch, MSGBOX_DEFAULT
# 155 "data/maps/NewBarkTown_Lab/scripts.pory"
	closemessage
# 156 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 157 "data/maps/NewBarkTown_Lab/scripts.pory"

# 158 "data/maps/NewBarkTown_Lab/scripts.pory"

# 159 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_ChikoritaBall::
# 160 "data/maps/NewBarkTown_Lab/scripts.pory"
	lock
# 161 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, NewBarkTown_Lab_EventScript_ShouldntTouch
# 162 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 1, NewBarkTown_Lab_EventScript_ChikoritaBall_Choice
# 163 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ShouldntTouch, MSGBOX_DEFAULT
# 164 "data/maps/NewBarkTown_Lab/scripts.pory"
	release
# 165 "data/maps/NewBarkTown_Lab/scripts.pory"
	closemessage
# 166 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 167 "data/maps/NewBarkTown_Lab/scripts.pory"

# 168 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_ChikoritaBall_Choice::
# 169 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_CHIKORITA
# 170 "data/maps/NewBarkTown_Lab/scripts.pory"
	showmonpic PLAYER_STARTER_SPECIES, 10, 3
# 171 "data/maps/NewBarkTown_Lab/scripts.pory"
	playmoncry PLAYER_STARTER_SPECIES, CRY_MODE_NORMAL
# 172 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ChooseChikorita, MSGBOX_YESNO
# 173 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 174 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, NewBarkTown_Lab_EventScript_ChoseStarter
# 175 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, NewBarkTown_Lab_EventScript_DeclinedStarter
# 176 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 177 "data/maps/NewBarkTown_Lab/scripts.pory"

# 178 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_CyndaquilBall::
# 179 "data/maps/NewBarkTown_Lab/scripts.pory"
	lock
# 180 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, NewBarkTown_Lab_EventScript_ShouldntTouch
# 181 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 1, NewBarkTown_Lab_EventScript_CyndaquilBall_Choice
# 182 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ShouldntTouch, MSGBOX_DEFAULT
# 183 "data/maps/NewBarkTown_Lab/scripts.pory"
	closemessage
# 184 "data/maps/NewBarkTown_Lab/scripts.pory"
	release
# 185 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 186 "data/maps/NewBarkTown_Lab/scripts.pory"

# 187 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_CyndaquilBall_Choice::
# 188 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_CYNDAQUIL
# 189 "data/maps/NewBarkTown_Lab/scripts.pory"
	showmonpic PLAYER_STARTER_SPECIES, 10, 3
# 190 "data/maps/NewBarkTown_Lab/scripts.pory"
	playmoncry PLAYER_STARTER_SPECIES, CRY_MODE_NORMAL
# 191 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ChooseCyndaquil, MSGBOX_YESNO
# 192 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 193 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, NewBarkTown_Lab_EventScript_ChoseStarter
# 194 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, NewBarkTown_Lab_EventScript_DeclinedStarter
# 195 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 196 "data/maps/NewBarkTown_Lab/scripts.pory"

# 197 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_TotodileBall::
# 198 "data/maps/NewBarkTown_Lab/scripts.pory"
	lock
# 199 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, NewBarkTown_Lab_EventScript_ShouldntTouch
# 200 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_NEWBARKTOWN_LABSTATE, 1, NewBarkTown_Lab_EventScript_TotodileBall_Choice
# 201 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ShouldntTouch, MSGBOX_DEFAULT
# 202 "data/maps/NewBarkTown_Lab/scripts.pory"
	release
# 203 "data/maps/NewBarkTown_Lab/scripts.pory"
	closemessage
# 204 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 205 "data/maps/NewBarkTown_Lab/scripts.pory"

# 206 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_TotodileBall_Choice::
# 207 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_TOTODILE
# 208 "data/maps/NewBarkTown_Lab/scripts.pory"
	showmonpic PLAYER_STARTER_SPECIES, 10, 3
# 209 "data/maps/NewBarkTown_Lab/scripts.pory"
	playmoncry PLAYER_STARTER_SPECIES, CRY_MODE_NORMAL
# 210 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ChooseTotodile, MSGBOX_YESNO
# 211 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 212 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, NewBarkTown_Lab_EventScript_ChoseStarter
# 213 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, NewBarkTown_Lab_EventScript_DeclinedStarter
# 214 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 215 "data/maps/NewBarkTown_Lab/scripts.pory"

# 216 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_DeclinedStarter::
# 217 "data/maps/NewBarkTown_Lab/scripts.pory"
	hidemonpic
# 218 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_DidntChooseStarter, MSGBOX_DEFAULT
# 219 "data/maps/NewBarkTown_Lab/scripts.pory"
	closemessage
# 220 "data/maps/NewBarkTown_Lab/scripts.pory"
	release
# 221 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 222 "data/maps/NewBarkTown_Lab/scripts.pory"

# 223 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_ChoseStarter::
# 224 "data/maps/NewBarkTown_Lab/scripts.pory"
	hidemonpic
# 225 "data/maps/NewBarkTown_Lab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 226 "data/maps/NewBarkTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 227 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ChoseStarter, MSGBOX_DEFAULT
# 228 "data/maps/NewBarkTown_Lab/scripts.pory"
	givemon PLAYER_STARTER_SPECIES, 5
# 229 "data/maps/NewBarkTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 230 "data/maps/NewBarkTown_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, PLAYER_STARTER_SPECIES
# 231 "data/maps/NewBarkTown_Lab/scripts.pory"
	message NewBarkTown_Lab_Text_ReceivedStarter
# 232 "data/maps/NewBarkTown_Lab/scripts.pory"
	waitfanfare
# 233 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_Nickname, MSGBOX_YESNO
# 234 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, NewBarkTown_Lab_EventScript_NicknameStarter
# 235 "data/maps/NewBarkTown_Lab/scripts.pory"
	release
# 236 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 237 "data/maps/NewBarkTown_Lab/scripts.pory"

# 238 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_NicknameStarter::
# 239 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_0x8004, 0
# 240 "data/maps/NewBarkTown_Lab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 241 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 242 "data/maps/NewBarkTown_Lab/scripts.pory"

# 243 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_MrPokemon::
# 244 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_NEWBARKTOWN_LABSTATE, 2
# 245 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_NEWBARK_TOWN_STATE, 3
# 246 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ElmDirections1, MSGBOX_DEFAULT
# 247 "data/maps/NewBarkTown_Lab/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 248 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ElmDirections2, MSGBOX_DEFAULT
# 249 "data/maps/NewBarkTown_Lab/scripts.pory"
	closemessage
# 250 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_FACING, DIR_EAST, NewBarkTown_Lab_EventScript_MrPokemonMovementSafe
# 251 "data/maps/NewBarkTown_Lab/scripts.pory"
	applymovement LOCALID_ELM, NewBarkTown_Lab_Movement_CheckEmailSlow
# 252 "data/maps/NewBarkTown_Lab/scripts.pory"
	waitmovement 0
# 253 "data/maps/NewBarkTown_Lab/scripts.pory"
	clearflag FLAG_RECEIVED_FIRST_BALLS
# 254 "data/maps/NewBarkTown_Lab/scripts.pory"
	clearflag FLAG_RECEIVED_FIRST_POTION
# 255 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_NEWBARK_TOWN_STATE, 3
# 256 "data/maps/NewBarkTown_Lab/scripts.pory"
	release
# 257 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 258 "data/maps/NewBarkTown_Lab/scripts.pory"

# 259 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_MrPokemonMovementSafe::
# 260 "data/maps/NewBarkTown_Lab/scripts.pory"
	applymovement LOCALID_ELM, NewBarkTown_Lab_Movement_GotoComputerSafe
# 261 "data/maps/NewBarkTown_Lab/scripts.pory"
	waitmovement 0
# 262 "data/maps/NewBarkTown_Lab/scripts.pory"
	clearflag FLAG_RECEIVED_FIRST_BALLS
# 263 "data/maps/NewBarkTown_Lab/scripts.pory"
	clearflag FLAG_RECEIVED_FIRST_POTION
# 264 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_NEWBARK_TOWN_STATE, 3
# 265 "data/maps/NewBarkTown_Lab/scripts.pory"
	release
# 266 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 267 "data/maps/NewBarkTown_Lab/scripts.pory"

# 268 "data/maps/NewBarkTown_Lab/scripts.pory"
CopNewBarkTown_Lab_EventScript_ElmState2::
# 269 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ElmDirections1, MSGBOX_DEFAULT
# 270 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ElmDirections2, MSGBOX_DEFAULT
# 271 "data/maps/NewBarkTown_Lab/scripts.pory"
	applymovement LOCALID_ELM, Common_Movement_WalkInPlaceFasterUp
# 272 "data/maps/NewBarkTown_Lab/scripts.pory"
	waitmovement 0
# 273 "data/maps/NewBarkTown_Lab/scripts.pory"
	closemessage
# 274 "data/maps/NewBarkTown_Lab/scripts.pory"
	release
# 275 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 276 "data/maps/NewBarkTown_Lab/scripts.pory"

# 277 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_HealingMachine1::
# 278 "data/maps/NewBarkTown_Lab/scripts.pory"
	lock
# 279 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, NewBarkTown_Lab_EventScript_HealingMachine2
# 280 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine, MSGBOX_SIGN
# 281 "data/maps/NewBarkTown_Lab/scripts.pory"
	closemessage
# 282 "data/maps/NewBarkTown_Lab/scripts.pory"
	release
# 283 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 284 "data/maps/NewBarkTown_Lab/scripts.pory"

# 285 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_HealingMachine2::
# 286 "data/maps/NewBarkTown_Lab/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 287 "data/maps/NewBarkTown_Lab/scripts.pory"
	release
# 288 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 289 "data/maps/NewBarkTown_Lab/scripts.pory"

# 290 "data/maps/NewBarkTown_Lab/scripts.pory"

# 291 "data/maps/NewBarkTown_Lab/scripts.pory"

# 292 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_TriggerAideGivePotion::
# 293 "data/maps/NewBarkTown_Lab/scripts.pory"
	lock
# 294 "data/maps/NewBarkTown_Lab/scripts.pory"
	applymovement LOCALID_AIDE1, NewBarkTown_Lab_Movement_Aide1WalkToPlayer
# 295 "data/maps/NewBarkTown_Lab/scripts.pory"
	waitmovement 0
# 296 "data/maps/NewBarkTown_Lab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 297 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_AideGivePotion, MSGBOX_DEFAULT
# 298 "data/maps/NewBarkTown_Lab/scripts.pory"
	closemessage
# 299 "data/maps/NewBarkTown_Lab/scripts.pory"
	giveitem ITEM_POTION
# 300 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 301 "data/maps/NewBarkTown_Lab/scripts.pory"
	setflag FLAG_RECEIVED_FIRST_POTION
# 302 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_NEWBARKTOWN_LABSTATE, 3
# 303 "data/maps/NewBarkTown_Lab/scripts.pory"
	applymovement LOCALID_AIDE1, NewBarkTown_Lab_Movement_Aide1LeavePlayer
# 304 "data/maps/NewBarkTown_Lab/scripts.pory"
	waitmovement 0
# 305 "data/maps/NewBarkTown_Lab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 306 "data/maps/NewBarkTown_Lab/scripts.pory"
	release
# 307 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 308 "data/maps/NewBarkTown_Lab/scripts.pory"

# 309 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_HideCyndaquil::
# 310 "data/maps/NewBarkTown_Lab/scripts.pory"
	setflag FLAG_HIDE_CYNDAQUILBALL
# 311 "data/maps/NewBarkTown_Lab/scripts.pory"
	return
# 312 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_HideTotodile::
# 313 "data/maps/NewBarkTown_Lab/scripts.pory"
	setflag FLAG_HIDE_TOTODILEBALL
# 314 "data/maps/NewBarkTown_Lab/scripts.pory"
	return
# 315 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_HideChikorita::
# 316 "data/maps/NewBarkTown_Lab/scripts.pory"
	setflag FLAG_HIDE_CHIKORITABALL
# 317 "data/maps/NewBarkTown_Lab/scripts.pory"
	return
# 318 "data/maps/NewBarkTown_Lab/scripts.pory"

# 319 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_PoliceEpisode::
# 320 "data/maps/NewBarkTown_Lab/scripts.pory"
	lock
# 321 "data/maps/NewBarkTown_Lab/scripts.pory"
	setmetatile 7, 1, METATILE_R26_21_Broken_Window, TRUE
# 322 "data/maps/NewBarkTown_Lab/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0 NewBarkTown_Lab_EventScript_HideCyndaquil
# 323 "data/maps/NewBarkTown_Lab/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1 NewBarkTown_Lab_EventScript_HideTotodile
# 324 "data/maps/NewBarkTown_Lab/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2 NewBarkTown_Lab_EventScript_HideChikorita
# 325 "data/maps/NewBarkTown_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NeBarkTownLab_Movement_PlayerWalkToCop
# 326 "data/maps/NewBarkTown_Lab/scripts.pory"
	waitmovement 0
# 327 "data/maps/NewBarkTown_Lab/scripts.pory"
	setflag FLAG_HIDE_LAB_POLICEMAN
# 328 "data/maps/NewBarkTown_Lab/scripts.pory"
	turnobject LOCALID_COP DIR_WEST
# 329 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_Officer1, MSGBOX_YESNO
# 330 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, NewBarkTown_Lab_EventScript_PoliceYes
# 331 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, NewBarkTown_Lab_EventScript_PoliceNo
# 332 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 333 "data/maps/NewBarkTown_Lab/scripts.pory"

# 334 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_PoliceNo::
# 335 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_OfficerNo, MSGBOX_YESNO
# 336 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, NewBarkTown_Lab_EventScript_PoliceYes
# 337 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, NewBarkTown_Lab_EventScript_PoliceNo
# 338 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 339 "data/maps/NewBarkTown_Lab/scripts.pory"

# 340 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_PoliceYes::
# 341 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_Officer2, MSGBOX_DEFAULT
# 342 "data/maps/NewBarkTown_Lab/scripts.pory"
	closemessage
# 343 "data/maps/NewBarkTown_Lab/scripts.pory"
	applymovement LOCALID_COP, NewBarkTown_Lab_Movement_CopLeaves
# 344 "data/maps/NewBarkTown_Lab/scripts.pory"
	waitmovement 0
# 345 "data/maps/NewBarkTown_Lab/scripts.pory"
	removeobject LOCALID_COP
# 346 "data/maps/NewBarkTown_Lab/scripts.pory"

# 347 "data/maps/NewBarkTown_Lab/scripts.pory"
	@ setobjectxyperm LOCALID_COP, 25, 4
# 348 "data/maps/NewBarkTown_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewBarkTown_Lab_Movement_PlayerStepsToElm
# 349 "data/maps/NewBarkTown_Lab/scripts.pory"
	waitmovement 0
# 350 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ElmAfterTheft1, MSGBOX_DEFAULT
# 351 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ElmAfterTheft2, MSGBOX_DEFAULT
# 352 "data/maps/NewBarkTown_Lab/scripts.pory"
	closemessage
# 353 "data/maps/NewBarkTown_Lab/scripts.pory"
	applymovement LOCALID_ELM, NewBarkTown_Lab_Movement_ElmStepBack
# 354 "data/maps/NewBarkTown_Lab/scripts.pory"
	waitmovement 0
# 355 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ElmAfterTheft3, MSGBOX_DEFAULT
# 356 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 20
# 357 "data/maps/NewBarkTown_Lab/scripts.pory"
	closemessage
# 358 "data/maps/NewBarkTown_Lab/scripts.pory"
	applymovement LOCALID_ELM, NewBarkTown_Lab_Movement_ElmStepForward
# 359 "data/maps/NewBarkTown_Lab/scripts.pory"
	waitmovement 0
# 360 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ElmAfterTheft4, MSGBOX_DEFAULT
# 361 "data/maps/NewBarkTown_Lab/scripts.pory"
	closemessage
# 362 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_NEWBARKTOWN_LABSTATE, 5
# 363 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_NEWBARK_TOWN_STATE, 4
# 364 "data/maps/NewBarkTown_Lab/scripts.pory"
	setflag FLAG_HIDE_MOMS_FRIEND
# 365 "data/maps/NewBarkTown_Lab/scripts.pory"
	clearflag FLAG_HIDE_MOMS_FRIEND2
# 366 "data/maps/NewBarkTown_Lab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 367 "data/maps/NewBarkTown_Lab/scripts.pory"
	setflag FLAG_EXP_SHARE
# 368 "data/maps/NewBarkTown_Lab/scripts.pory"
	removeitem ITEM_MYSTERY_EGG
# 369 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 370 "data/maps/NewBarkTown_Lab/scripts.pory"

# 371 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_ElmState5::
# 372 "data/maps/NewBarkTown_Lab/scripts.pory"
	lock
# 373 "data/maps/NewBarkTown_Lab/scripts.pory"
	faceplayer
# 374 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ElmStudyingEgg, MSGBOX_DEFAULT
# 375 "data/maps/NewBarkTown_Lab/scripts.pory"
	closemessage
# 376 "data/maps/NewBarkTown_Lab/scripts.pory"
	applymovement LOCALID_ELM Common_Movement_FaceOriginalDirection
# 377 "data/maps/NewBarkTown_Lab/scripts.pory"
	release
# 378 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 379 "data/maps/NewBarkTown_Lab/scripts.pory"
	
# 380 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_ElmMasterBall::
# 381 "data/maps/NewBarkTown_Lab/scripts.pory"
	lock
# 382 "data/maps/NewBarkTown_Lab/scripts.pory"
	faceplayer
# 383 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ElmGiveMasterBall1, MSGBOX_DEFAULT
# 384 "data/maps/NewBarkTown_Lab/scripts.pory"
	giveitem ITEM_MASTER_BALL
# 385 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ElmGiveMasterBall2, MSGBOX_DEFAULT
# 386 "data/maps/NewBarkTown_Lab/scripts.pory"
	closemessage
# 387 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 20
# 388 "data/maps/NewBarkTown_Lab/scripts.pory"
	playse SE_PIN
# 389 "data/maps/NewBarkTown_Lab/scripts.pory"
	applymovement LOCALID_ELM, Common_Movement_ExclamationMark
# 390 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 60
# 391 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_KimonoGirls, MSGBOX_DEFAULT
# 392 "data/maps/NewBarkTown_Lab/scripts.pory"
	closemessage
# 393 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_NEWBARKTOWN_LABSTATE, 8
# 394 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_ECRUTEAK_CITY_THEATER, 4
# 395 "data/maps/NewBarkTown_Lab/scripts.pory"
	setflag FLAG_HIDE_ECRUTEAK_SILVER
# 396 "data/maps/NewBarkTown_Lab/scripts.pory"
	setflag FLAG_HIDE_ECRUTEAK_CITY_THEATER_NPCS
# 397 "data/maps/NewBarkTown_Lab/scripts.pory"
	clearflag FLAG_HIDE_ECRUTEAK_CITY_THEATER_KIMONOS
# 398 "data/maps/NewBarkTown_Lab/scripts.pory"
	release
# 399 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 400 "data/maps/NewBarkTown_Lab/scripts.pory"

# 401 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_ElmKimono::
# 402 "data/maps/NewBarkTown_Lab/scripts.pory"
	lock
# 403 "data/maps/NewBarkTown_Lab/scripts.pory"
	faceplayer
# 404 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_KimonoWaiting, MSGBOX_DEFAULT
# 405 "data/maps/NewBarkTown_Lab/scripts.pory"
	closemessage
# 406 "data/maps/NewBarkTown_Lab/scripts.pory"
	release
# 407 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 408 "data/maps/NewBarkTown_Lab/scripts.pory"

# 409 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_ElmLeague::
# 410 "data/maps/NewBarkTown_Lab/scripts.pory"
	lock
# 411 "data/maps/NewBarkTown_Lab/scripts.pory"
	faceplayer
# 412 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_League, MSGBOX_DEFAULT
# 413 "data/maps/NewBarkTown_Lab/scripts.pory"
	closemessage
# 414 "data/maps/NewBarkTown_Lab/scripts.pory"
	release
# 415 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 416 "data/maps/NewBarkTown_Lab/scripts.pory"

# 417 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_ElmSSTicket::
# 418 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ElmGiveTicket1, MSGBOX_DEFAULT
# 419 "data/maps/NewBarkTown_Lab/scripts.pory"
	giveitem ITEM_SS_TICKET
# 420 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ElmGiveTicket2, MSGBOX_DEFAULT
# 421 "data/maps/NewBarkTown_Lab/scripts.pory"
	closemessage
# 422 "data/maps/NewBarkTown_Lab/scripts.pory"
	clearflag FLAG_HIDE_SSAQUA_1F_GRANDPA
# 423 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_NEWBARKTOWN_LABSTATE, 11
# 424 "data/maps/NewBarkTown_Lab/scripts.pory"
	clearflag FLAG_HIDE_OLIVINE_PORT_OAK
# 425 "data/maps/NewBarkTown_Lab/scripts.pory"
	release
# 426 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 427 "data/maps/NewBarkTown_Lab/scripts.pory"

# 428 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_TriggerAideGiveBalls::
# 429 "data/maps/NewBarkTown_Lab/scripts.pory"
	lock
# 430 "data/maps/NewBarkTown_Lab/scripts.pory"
	applymovement LOCALID_AIDE1, NewBarkTown_Lab_Movement_Aide1WalkToPlayer
# 431 "data/maps/NewBarkTown_Lab/scripts.pory"
	waitmovement 0
# 432 "data/maps/NewBarkTown_Lab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 433 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_AideGiveBalls, MSGBOX_DEFAULT
# 434 "data/maps/NewBarkTown_Lab/scripts.pory"
	closemessage
# 435 "data/maps/NewBarkTown_Lab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 436 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 437 "data/maps/NewBarkTown_Lab/scripts.pory"
	setflag FLAG_RECEIVED_FIRST_BALLS
# 438 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_NEWBARKTOWN_LABSTATE, 6
# 439 "data/maps/NewBarkTown_Lab/scripts.pory"
	applymovement LOCALID_AIDE1, NewBarkTown_Lab_Movement_Aide1LeavePlayer
# 440 "data/maps/NewBarkTown_Lab/scripts.pory"
	waitmovement 0
# 441 "data/maps/NewBarkTown_Lab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 442 "data/maps/NewBarkTown_Lab/scripts.pory"
	release
# 443 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 444 "data/maps/NewBarkTown_Lab/scripts.pory"

# 445 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_Elm_Check_WhereIsEgg::
# 446 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ElmWaitingEggHatch, MSGBOX_DEFAULT
# 447 "data/maps/NewBarkTown_Lab/scripts.pory"
	closemessage
# 448 "data/maps/NewBarkTown_Lab/scripts.pory"
	release
# 449 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 450 "data/maps/NewBarkTown_Lab/scripts.pory"

# 451 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_Elm_Check_Togepi::
# 452 "data/maps/NewBarkTown_Lab/scripts.pory"
	specialvar VAR_RESULT, CheckTogepi
# 453 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, NewBarkTown_Lab_EventScript_Elm_Togepi_Seen
# 454 "data/maps/NewBarkTown_Lab/scripts.pory"
	return
# 455 "data/maps/NewBarkTown_Lab/scripts.pory"

# 456 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_Elm_Togepi_Seen::
# 457 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ShowTogepi1, MSGBOX_DEFAULT
# 458 "data/maps/NewBarkTown_Lab/scripts.pory"
	waitmessage
# 459 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ShowTogepi2, MSGBOX_DEFAULT
# 460 "data/maps/NewBarkTown_Lab/scripts.pory"
	waitmessage
# 461 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ShowTogepi3, MSGBOX_DEFAULT
# 462 "data/maps/NewBarkTown_Lab/scripts.pory"
	waitmessage
# 463 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ElmGiveEverstone1, MSGBOX_DEFAULT
# 464 "data/maps/NewBarkTown_Lab/scripts.pory"
	waitmessage
# 465 "data/maps/NewBarkTown_Lab/scripts.pory"
	giveitem ITEM_EVERSTONE
# 466 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 467 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_ElmGiveEverstone2, MSGBOX_DEFAULT
# 468 "data/maps/NewBarkTown_Lab/scripts.pory"
	closemessage
# 469 "data/maps/NewBarkTown_Lab/scripts.pory"
	setflag FLAG_SHOWN_ELM_TOGEPI
# 470 "data/maps/NewBarkTown_Lab/scripts.pory"
	release
# 471 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 472 "data/maps/NewBarkTown_Lab/scripts.pory"

# 473 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_EventScript_Elm_CallMe::
# 474 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NewBarkTown_Lab_Text_Elm_CallMe, MSGBOX_DEFAULT
# 475 "data/maps/NewBarkTown_Lab/scripts.pory"
	closemessage
# 476 "data/maps/NewBarkTown_Lab/scripts.pory"
	release
# 477 "data/maps/NewBarkTown_Lab/scripts.pory"
	end
# 478 "data/maps/NewBarkTown_Lab/scripts.pory"

# 479 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Movement_WalkRight:
# 480 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_right
# 481 "data/maps/NewBarkTown_Lab/scripts.pory"
	step_end
# 482 "data/maps/NewBarkTown_Lab/scripts.pory"

# 483 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Movement_WalkLeft:
# 484 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_left
# 485 "data/maps/NewBarkTown_Lab/scripts.pory"
	step_end
# 486 "data/maps/NewBarkTown_Lab/scripts.pory"

# 487 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_LabMovement_WalkToElm:
# 488 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_up
# 489 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_up
# 490 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_up
# 491 "data/maps/NewBarkTown_Lab/scripts.pory"
	step_end
# 492 "data/maps/NewBarkTown_Lab/scripts.pory"

# 493 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Movement_ReturnPlayer:
# 494 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_up
# 495 "data/maps/NewBarkTown_Lab/scripts.pory"
	step_end
# 496 "data/maps/NewBarkTown_Lab/scripts.pory"

# 497 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Movement_CheckEmail:
# 498 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_fast_left
# 499 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_fast_left
# 500 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_fast_left
# 501 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_fast_up
# 502 "data/maps/NewBarkTown_Lab/scripts.pory"
	step_end
# 503 "data/maps/NewBarkTown_Lab/scripts.pory"

# 504 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Movement_CheckEmailSlow:
# 505 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_left
# 506 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_left
# 507 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_left
# 508 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_up
# 509 "data/maps/NewBarkTown_Lab/scripts.pory"
	step_end
# 510 "data/maps/NewBarkTown_Lab/scripts.pory"

# 511 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Movement_GotoComputerSafe:
# 512 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_up
# 513 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_left
# 514 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_left
# 515 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_left
# 516 "data/maps/NewBarkTown_Lab/scripts.pory"
	face_up
# 517 "data/maps/NewBarkTown_Lab/scripts.pory"
	step_end
# 518 "data/maps/NewBarkTown_Lab/scripts.pory"

# 519 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Movement_ReturnFromEmail:
# 520 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_fast_down
# 521 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_fast_right
# 522 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_fast_right
# 523 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_fast_right
# 524 "data/maps/NewBarkTown_Lab/scripts.pory"
	face_down
# 525 "data/maps/NewBarkTown_Lab/scripts.pory"
	step_end
# 526 "data/maps/NewBarkTown_Lab/scripts.pory"

# 527 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Movement_Look_Left:
# 528 "data/maps/NewBarkTown_Lab/scripts.pory"
	face_left
# 529 "data/maps/NewBarkTown_Lab/scripts.pory"
	step_end
# 530 "data/maps/NewBarkTown_Lab/scripts.pory"

# 531 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Movement_Look_Up:
# 532 "data/maps/NewBarkTown_Lab/scripts.pory"
	face_up
# 533 "data/maps/NewBarkTown_Lab/scripts.pory"
	step_end
# 534 "data/maps/NewBarkTown_Lab/scripts.pory"

# 535 "data/maps/NewBarkTown_Lab/scripts.pory"

# 536 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Movement_Aide1WalkToPlayer:
# 537 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_down
# 538 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_down
# 539 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_right
# 540 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_right
# 541 "data/maps/NewBarkTown_Lab/scripts.pory"
	step_end
# 542 "data/maps/NewBarkTown_Lab/scripts.pory"

# 543 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Movement_Aide1LeavePlayer:
# 544 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_left
# 545 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_left
# 546 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_up
# 547 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_up
# 548 "data/maps/NewBarkTown_Lab/scripts.pory"
	face_down
# 549 "data/maps/NewBarkTown_Lab/scripts.pory"
	step_end
# 550 "data/maps/NewBarkTown_Lab/scripts.pory"

# 551 "data/maps/NewBarkTown_Lab/scripts.pory"
NeBarkTownLab_Movement_PlayerWalkToCop:
# 552 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_fast_up
# 553 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_fast_up
# 554 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_fast_up
# 555 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_fast_up
# 556 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_fast_up
# 557 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_fast_up
# 558 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_fast_up
# 559 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_fast_left
# 560 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_fast_up
# 561 "data/maps/NewBarkTown_Lab/scripts.pory"
	face_right
# 562 "data/maps/NewBarkTown_Lab/scripts.pory"
	step_end
# 563 "data/maps/NewBarkTown_Lab/scripts.pory"

# 564 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Movement_CopLeaves:
# 565 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_down
# 566 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_down
# 567 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_down
# 568 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_down
# 569 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_down
# 570 "data/maps/NewBarkTown_Lab/scripts.pory"
	step_end
# 571 "data/maps/NewBarkTown_Lab/scripts.pory"

# 572 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Movement_PlayerStepsToElm:
# 573 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_right
# 574 "data/maps/NewBarkTown_Lab/scripts.pory"
	face_up
# 575 "data/maps/NewBarkTown_Lab/scripts.pory"
	step_end
# 576 "data/maps/NewBarkTown_Lab/scripts.pory"

# 577 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Movement_ElmStepBack:
# 578 "data/maps/NewBarkTown_Lab/scripts.pory"
	lock_facing_direction
# 579 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_fast_up
# 580 "data/maps/NewBarkTown_Lab/scripts.pory"
	unlock_facing_direction
# 581 "data/maps/NewBarkTown_Lab/scripts.pory"
	step_end
# 582 "data/maps/NewBarkTown_Lab/scripts.pory"

# 583 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Movement_ElmStepForward:
# 584 "data/maps/NewBarkTown_Lab/scripts.pory"
	walk_fast_down
# 585 "data/maps/NewBarkTown_Lab/scripts.pory"
	step_end
# 586 "data/maps/NewBarkTown_Lab/scripts.pory"

# 587 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ShouldntTouch:
# 588 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Probably shouldn't touch!$"
# 589 "data/maps/NewBarkTown_Lab/scripts.pory"

# 590 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ElmIntro:
# 591 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "ELM: {PLAYER}! There you are!\p"
# 592 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "I needed to ask you a favor.\p"
# 593 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "I'm conducting new POKéMON\n"
# 594 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "research right now. I was\l"
# 595 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "wondering if you could help\l"
# 596 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "me with it, {PLAYER}.\p"
# 597 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "You see…\p"
# 598 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "I'm writing a paper that I\n"
# 599 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "want to present at a conference.\p"
# 600 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "But there are some things I\n"
# 601 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "don't quite understand yet.\p"
# 602 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "So!\p"
# 603 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "I'd like you to raise a\n"
# 604 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "POKéMON that I recently caught.$"
# 605 "data/maps/NewBarkTown_Lab/scripts.pory"

# 606 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ElmAccepted:
# 607 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Thanks, {PLAYER}!\n"
# 608 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "You're a great help!$"
# 609 "data/maps/NewBarkTown_Lab/scripts.pory"

# 610 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ElmRefused:
# 611 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "But… Please, I need your\n"
# 612 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "help!$"
# 613 "data/maps/NewBarkTown_Lab/scripts.pory"

# 614 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ElmResearchAmbitions:
# 615 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "When I announce my findings,\n"
# 616 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "I'm sure we'll delve deeper\p"
# 617 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "into the many mysteries of\n"
# 618 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "POKéMON.\p"
# 619 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "You can count on it!$"
# 620 "data/maps/NewBarkTown_Lab/scripts.pory"

# 621 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ElmGotAnEmail:
# 622 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Oh, hey! I got an e-mail!\p"
# 623 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "… … … … … … … …\n"
# 624 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Hm… Uh-huh…\p"
# 625 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Okay…$"
# 626 "data/maps/NewBarkTown_Lab/scripts.pory"

# 627 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ElmMissionFromMrPokemon:
# 628 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Hey, listen.\p"
# 629 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "I have an acquaintance called\n"
# 630 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "MR. POKéMON.\p"
# 631 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "He keeps finding weird things and\n"
# 632 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "raving about his discoveries.\p"
# 633 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Anyway, I just got an e-mail\n"
# 634 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "from him saying that this\l"
# 635 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "time it's real.\p"
# 636 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "It is intriguing, but we're\n"
# 637 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "busy with our POKéMON research...\p"
# 638 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Wait!\n"
# 639 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "I know!\p"
# 640 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "{PLAYER}, can you go in our\n"
# 641 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "place?$"
# 642 "data/maps/NewBarkTown_Lab/scripts.pory"

# 643 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ElmChooseAPokemon:
# 644 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "I want you to raise one of\n"
# 645 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "my POKéMON contained in these Balls.\p"
# 646 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "The first 3 are ready on the table.\p"
# 647 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "If you want to see POKéMON from a\n"
# 648 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "different region, use the PC.\p"
# 649 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "You'll be that POKéMON's\n"
# 650 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "first partner, {PLAYER}!\p"
# 651 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Go on. Pick one!$"
# 652 "data/maps/NewBarkTown_Lab/scripts.pory"

# 653 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ElmWhereGoing:
# 654 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "ELM: Wait! Where are you\n"
# 655 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "going?$"
# 656 "data/maps/NewBarkTown_Lab/scripts.pory"

# 657 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ChooseCyndaquil:
# 658 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "ELM: You'll take CYNDAQUIL,\n"
# 659 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "the fire POKéMON?$"
# 660 "data/maps/NewBarkTown_Lab/scripts.pory"

# 661 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ChooseTotodile:
# 662 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "ELM: Do you want TOTODILE,\n"
# 663 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "the water POKéMON?$"
# 664 "data/maps/NewBarkTown_Lab/scripts.pory"

# 665 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ChooseChikorita:
# 666 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "ELM: So, you like CHIKORITA,\n"
# 667 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "the grass POKéMON?$"
# 668 "data/maps/NewBarkTown_Lab/scripts.pory"

# 669 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_DidntChooseStarter:
# 670 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "ELM: Think it over carefully.\p"
# 671 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Your partner is important.$"
# 672 "data/maps/NewBarkTown_Lab/scripts.pory"

# 673 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ChoseStarter:
# 674 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "ELM: I think that's a great\n"
# 675 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "POKéMON too!$"
# 676 "data/maps/NewBarkTown_Lab/scripts.pory"

# 677 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ReceivedStarter:
# 678 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "{PLAYER} received {STR_VAR_1}!$"
# 679 "data/maps/NewBarkTown_Lab/scripts.pory"

# 680 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_Nickname:
# 681 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Would you like to give your\n"
# 682 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "{STR_VAR_1} a nickname?$"
# 683 "data/maps/NewBarkTown_Lab/scripts.pory"

# 684 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ElmDirections1:
# 685 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "MR. POKéMON lives a little bit\n"
# 686 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "beyond CHERRYGROVE, the next\l"
# 687 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "city over.\p"
# 688 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "It's almost a direct route\n"
# 689 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "there, so you can't miss it.\p"
# 690 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "But just in case, you have my\n"
# 691 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "phone number. Call me if\l"
# 692 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "anything comes up!$"
# 693 "data/maps/NewBarkTown_Lab/scripts.pory"

# 694 "data/maps/NewBarkTown_Lab/scripts.pory"

# 695 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ElmLetYourMonBattle:
# 696 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "If a wild POKéMON appears,\n"
# 697 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "let your POKéMON battle it!$"
# 698 "data/maps/NewBarkTown_Lab/scripts.pory"

# 699 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ElmDirections2:
# 700 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "If a wild POKéMON appears, let\n"
# 701 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "your POKéMON battle it!\p"
# 702 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "If your POKéMON is hurt, you\n"
# 703 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "should heal it with the machine\l"
# 704 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "to my right, or at the POKéCENTER.\p"
# 705 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "I'm counting on you!$"
# 706 "data/maps/NewBarkTown_Lab/scripts.pory"

# 707 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_GotElmsNumber:
# 708 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "{PLAYER} got ELM's phone\n"
# 709 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "number.$"
# 710 "data/maps/NewBarkTown_Lab/scripts.pory"

# 711 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ElmDescribesMrPokemon:
# 712 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "MR. POKéMON goes everywhere and\n"
# 713 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "finds rarities.\p"
# 714 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Too bad they're just rare and\n"
# 715 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "not very useful…$"
# 716 "data/maps/NewBarkTown_Lab/scripts.pory"

# 717 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ElmPokeBall:
# 718 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "It contains a POKéMON caught\n"
# 719 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "by PROF.ELM.$"
# 720 "data/maps/NewBarkTown_Lab/scripts.pory"

# 721 "data/maps/NewBarkTown_Lab/scripts.pory"
@THEFT================================================================================
# 722 "data/maps/NewBarkTown_Lab/scripts.pory"

# 723 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ElmAfterTheft1:
# 724 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "ELM: {PLAYER}, this is terrible…\p"
# 725 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Oh, yes, what was MR. POKéMON's\n"
# 726 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "big discovery?$"
# 727 "data/maps/NewBarkTown_Lab/scripts.pory"

# 728 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ElmAfterTheft2:
# 729 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "{PLAYER} handed the MYSTERY EGG\n"
# 730 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "to PROF.ELM.$"
# 731 "data/maps/NewBarkTown_Lab/scripts.pory"

# 732 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ElmAfterTheft3:
# 733 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "ELM: This?$"
# 734 "data/maps/NewBarkTown_Lab/scripts.pory"

# 735 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ElmAfterTheft4:
# 736 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "But… Is it a POKéMON EGG?\p"
# 737 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "If it is, it is a great\n"
# 738 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "discovery!\p"
# 739 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "ELM: What?!?\p"
# 740 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "PROF.OAK gave you a POKéDEX?\p"
# 741 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "{PLAYER}, is that true?\n"
# 742 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Th-that's incredible!\p"
# 743 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "He is superb at seeing the\n"
# 744 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "potential of people as trainers.\p"
# 745 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Wow, {PLAYER}. You may have what\n"
# 746 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "it takes to become the CHAMPION.\p"
# 747 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "You seem to be getting on\n"
# 748 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "great with POKéMON too.\p"
# 749 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "You should take the POKéMON\n"
# 750 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "GYM challenge.\p"
# 751 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "The closest GYM would be the\n"
# 752 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "one in VIOLET CITY.\p"
# 753 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "…{PLAYER}. The road to the\n"
# 754 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "championship will be a long one.\p"
# 755 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Before you leave, make sure\n"
# 756 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "that you talk to your mom.$"
# 757 "data/maps/NewBarkTown_Lab/scripts.pory"

# 758 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ElmStudyingEgg:
# 759 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "ELM: Don't give up!\n"
# 760 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "I'll call if I learn anything\l"
# 761 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "about that EGG!$"
# 762 "data/maps/NewBarkTown_Lab/scripts.pory"

# 763 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ElmAideHasEgg:
# 764 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "ELM: {PLAYER}? Didn't you meet\n"
# 765 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "my assistant?\p"
# 766 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "He should have met you with\n"
# 767 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "the EGG at VIOLET CITY's\p"
# 768 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "POKéMON CENTER.\p"
# 769 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "You must have just missed him.\n"
# 770 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Try to catch him there.$"
# 771 "data/maps/NewBarkTown_Lab/scripts.pory"

# 772 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ElmWaitingEggHatch:
# 773 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "ELM: Hey, has that EGG changed\n"
# 774 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "any?$"
# 775 "data/maps/NewBarkTown_Lab/scripts.pory"

# 776 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ElmThoughtEggHatched:
# 777 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "{PLAYER}? I thought the EGG\n"
# 778 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "hatched.\p"
# 779 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Where is the POKéMON?$"
# 780 "data/maps/NewBarkTown_Lab/scripts.pory"

# 781 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ShowTogepi1:
# 782 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "ELM: {PLAYER}, you look great!$"
# 783 "data/maps/NewBarkTown_Lab/scripts.pory"

# 784 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ShowTogepi2:
# 785 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "What? That POKéMON!?!$"
# 786 "data/maps/NewBarkTown_Lab/scripts.pory"

# 787 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ShowTogepi3:
# 788 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "The EGG hatched! So, POKéMON\n"
# 789 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "are born from EGGS…\p"
# 790 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "No, perhaps not all POKéMON\n"
# 791 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "are.\p"
# 792 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Wow, there's still a lot of\n"
# 793 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "research to be done.$"
# 794 "data/maps/NewBarkTown_Lab/scripts.pory"

# 795 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ElmGiveEverstone1:
# 796 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Thanks, {PLAYER}! You're helping\n"
# 797 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "unravel POKéMON mysteries for us!\p"
# 798 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "I want you to have this as a\n"
# 799 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "token of our appreciation.$"
# 800 "data/maps/NewBarkTown_Lab/scripts.pory"

# 801 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ElmGiveEverstone2:
# 802 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "That's an EVERSTONE.\p"
# 803 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Some species of POKéMON evolve\n"
# 804 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "when they grow to certain levels.\p"
# 805 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "A POKéMON holding the EVERSTONE\n"
# 806 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "won't evolve.\p"
# 807 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Give it to a POKéMON you don't\n"
# 808 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "want to evolve.$"
# 809 "data/maps/NewBarkTown_Lab/scripts.pory"

# 810 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ElmCallYou:
# 811 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "ELM: {PLAYER}, I'll call you if\n"
# 812 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "anything comes up.$"
# 813 "data/maps/NewBarkTown_Lab/scripts.pory"

# 814 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_AideAfterTheft:
# 815 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "…sigh… That stolen POKéMON.\p"
# 816 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "I wonder how it's doing.\p"
# 817 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "They say a POKéMON raised by a\n"
# 818 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "bad person turns bad itself.$"
# 819 "data/maps/NewBarkTown_Lab/scripts.pory"

# 820 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ElmGiveMasterBall1:
# 821 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "ELM: Hi, {PLAYER}!\p"
# 822 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Thanks to you, my research is\n"
# 823 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "going great!\p"
# 824 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Take this as a token of my\n"
# 825 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "appreciation.$"
# 826 "data/maps/NewBarkTown_Lab/scripts.pory"

# 827 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ElmGiveMasterBall2:
# 828 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "The MASTER BALL is the best!\p"
# 829 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "It's the ultimate BALL! It'll\n"
# 830 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "catch any POKéMON without fail.\p"
# 831 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "It's given only to recognized\n"
# 832 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "POKéMON researchers.\p"
# 833 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "I think you can make much better\n"
# 834 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "use of it than I can, {PLAYER}!$"
# 835 "data/maps/NewBarkTown_Lab/scripts.pory"

# 836 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_KimonoGirls:
# 837 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "By the way...\n"
# 838 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "A group of beautiful KIMONO\l"
# 839 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "GIRLS were looking for you.\p"
# 840 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "They told me they are\n"
# 841 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "waiting for you at the\l" 
# 842 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "ECRUTEAK DANCE THEATER.\p"
# 843 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "I know you've gone through many\n"
# 844 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "things since that EGG got you\l"
# 845 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "involved in all this...\p"
# 846 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "I hope you'll carry through it.$"
# 847 "data/maps/NewBarkTown_Lab/scripts.pory"

# 848 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_KimonoWaiting:
# 849 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "PROF. ELM: The KIMONO\n"
# 850 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "GIRLS are waiting for you at\l"
# 851 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "the ECRUTEAK DANCE THEATER.$"
# 852 "data/maps/NewBarkTown_Lab/scripts.pory"

# 853 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_League:
# 854 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "PROF. ELM: Hahaha...\n"
# 855 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Good job!\p"
# 856 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "That rare Egg has brought you\n"
# 857 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "a lot of trouble, huh?\p"
# 858 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "The KIMONO GIRLS said something\n"
# 859 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "about me?\p"
# 860 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "I have nothing to do with it.\p"
# 861 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "You made your decision and went\n"
# 862 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "through with it.\p"
# 863 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Having done so much, you should\n"
# 864 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "be able to face the League now!\p"
# 865 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "You should head for Indigo\n"
# 866 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Plateau!\p"
# 867 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Do you know how to get there?\n"
# 868 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Follow ROUTE 27 to ROUTE 26.\p"
# 869 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Once there, go straight north!$"
# 870 "data/maps/NewBarkTown_Lab/scripts.pory"

# 871 "data/maps/NewBarkTown_Lab/scripts.pory"

# 872 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ElmGiveTicket1:
# 873 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "ELM: {PLAYER}! There you are!\p"
# 874 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "I called because I have\n"
# 875 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "something for you.\p"
# 876 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "See? It's an S.S.TICKET.\p"
# 877 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Now you can catch POKéMON in\n"
# 878 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "KANTO.$"
# 879 "data/maps/NewBarkTown_Lab/scripts.pory"

# 880 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_ElmGiveTicket2:
# 881 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "The ship departs from OLIVINE\n"
# 882 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "CITY.\p"
# 883 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "But you knew that already,\n"
# 884 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "{PLAYER}.\p"
# 885 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "After all, you've traveled all\n"
# 886 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "over with your POKéMON.\p"
# 887 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Give my regards to PROF.OAK in\n"
# 888 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "KANTO!$"
# 889 "data/maps/NewBarkTown_Lab/scripts.pory"

# 890 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_LabMonEgg:
# 891 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "It's the POKéMON EGG being\n"
# 892 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "studied by PROF.ELM.$"
# 893 "data/maps/NewBarkTown_Lab/scripts.pory"

# 894 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_AideGivePotion:
# 895 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "{PLAYER}, I want you to have\n"
# 896 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "this for your errand.$"
# 897 "data/maps/NewBarkTown_Lab/scripts.pory"

# 898 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_AideAlwaysBusy:
# 899 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "There are only three of us, so\n"
# 900 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "we're always busy.$"
# 901 "data/maps/NewBarkTown_Lab/scripts.pory"

# 902 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_AideSave:
# 903 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Don't forget to save your game\n"
# 904 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "regularly!\p"
# 905 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Press the START button, then\n"
# 906 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "SAVE the game!$"
# 907 "data/maps/NewBarkTown_Lab/scripts.pory"

# 908 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_AideTheftTestimony:
# 909 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "There was a loud noise\n"
# 910 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "outside…\p"
# 911 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "When we went to look,\n"
# 912 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "someone stole a POKéMON.\p"
# 913 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "It's unbelievable that anyone\n"
# 914 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "would do that!\p"
# 915 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "…sigh… That stolen POKéMON.\p"
# 916 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "I wonder how it's doing.\p"
# 917 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "They say a POKéMON raised by a\n"
# 918 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "bad person turns bad itself.$"
# 919 "data/maps/NewBarkTown_Lab/scripts.pory"

# 920 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_AideGiveBalls:
# 921 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "{PLAYER}!\p"
# 922 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Use these on your POKéDEX\n"
# 923 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "quest!$"
# 924 "data/maps/NewBarkTown_Lab/scripts.pory"

# 925 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_AideExplainBalls:
# 926 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "To add to your POKéDEX, you\n"
# 927 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "have to catch POKéMON.\p"
# 928 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Throw POKé BALLS at wild\n"
# 929 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "POKéMON to get them.$"
# 930 "data/maps/NewBarkTown_Lab/scripts.pory"

# 931 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_Officer1:
# 932 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "I heard a POKéMON was stolen\n"
# 933 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "here…\p"
# 934 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "I was just getting some\n"
# 935 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "information from PROF.ELM.\p"
# 936 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Apparently, it was a young\n"
# 937 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "male with long, red hair…\p"
# 938 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "What?\p"
# 939 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "You battled a trainer like\n"
# 940 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "that?\p"
# 941 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Did you happen to get his\n"
# 942 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "name?$"
# 943 "data/maps/NewBarkTown_Lab/scripts.pory"

# 944 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_Officer2:
# 945 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "OK! So SILVER was his name.\p"
# 946 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Thanks for helping my\n"
# 947 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "investigation!$"
# 948 "data/maps/NewBarkTown_Lab/scripts.pory"

# 949 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_OfficerNo:
# 950 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Surely you got his name?!$"
# 951 "data/maps/NewBarkTown_Lab/scripts.pory"

# 952 "data/maps/NewBarkTown_Lab/scripts.pory"
NewBarkTown_Lab_Text_Elm_CallMe:
# 953 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Ah, {PLAYER}!\p"
# 954 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "How's your POKéDEX coming along?\n"
# 955 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "I'm busy now, but call me sometime\l"
# 956 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "and I can check your progress!$"

NewProfessor_MapScripts::
# 960 "data/maps/NewBarkTown_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewProfessor_EventScript_BallDefault
	.byte 0


NewProfessor_EventScript_BallDefault::
# 964 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_STARTERREGION, 1
	return


StarterRegionProfessor::
# 968 "data/maps/NewBarkTown_Lab/scripts.pory"
	lockall
# 970 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox StarterRegionProfessor_Text_0, MSGBOX_YESNO
# 971 "data/maps/NewBarkTown_Lab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq StarterRegionProfessor_2
# 976 "data/maps/NewBarkTown_Lab/scripts.pory"
	message StarterRegionProfessor_Text_2
# 977 "data/maps/NewBarkTown_Lab/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, StarterRegionProfessor_Text_3, StarterRegionProfessor_Text_4, StarterRegionProfessor_Text_5, StarterRegionProfessor_Text_6, StarterRegionProfessor_Text_7, StarterRegionProfessor_Text_8, StarterRegionProfessor_Text_9, StarterRegionProfessor_Text_10, StarterRegionProfessor_Text_11
# 978 "data/maps/NewBarkTown_Lab/scripts.pory"
	closemessage
# 979 "data/maps/NewBarkTown_Lab/scripts.pory"
	call StarterFade
# 980 "data/maps/NewBarkTown_Lab/scripts.pory"
	copyvar VAR_STARTERREGION, VAR_RESULT
# 981 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox StarterRegionProfessor_Text_12
# 982 "data/maps/NewBarkTown_Lab/scripts.pory"
	releaseall
	end

StarterRegionProfessor_2:
# 972 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox StarterRegionProfessor_Text_1
# 973 "data/maps/NewBarkTown_Lab/scripts.pory"
	releaseall
	end


StarterFade::
# 987 "data/maps/NewBarkTown_Lab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 988 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 20
# 989 "data/maps/NewBarkTown_Lab/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


FadeRemoveBalls::
# 994 "data/maps/NewBarkTown_Lab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 995 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 10
# 996 "data/maps/NewBarkTown_Lab/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


WaterStarterBall::
# 1002 "data/maps/NewBarkTown_Lab/scripts.pory"
	lockall
# 1004 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_set FLAG_WATER_STARTER, WaterStarterBall_2
# 1004 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_set FLAG_GRASS_STARTER, WaterStarterBall_2
# 1004 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_set FLAG_FIRE_STARTER, WaterStarterBall_2
# 1009 "data/maps/NewBarkTown_Lab/scripts.pory"
	switch VAR_STARTERREGION
# 1010 "data/maps/NewBarkTown_Lab/scripts.pory"
	case 0, WaterStarterBall_10
# 1016 "data/maps/NewBarkTown_Lab/scripts.pory"
	case 1, WaterStarterBall_11
# 1022 "data/maps/NewBarkTown_Lab/scripts.pory"
	case 2, WaterStarterBall_12
# 1028 "data/maps/NewBarkTown_Lab/scripts.pory"
	case 3, WaterStarterBall_13
# 1034 "data/maps/NewBarkTown_Lab/scripts.pory"
	case 4, WaterStarterBall_14
# 1040 "data/maps/NewBarkTown_Lab/scripts.pory"
	case 5, WaterStarterBall_15
# 1046 "data/maps/NewBarkTown_Lab/scripts.pory"
	case 6, WaterStarterBall_16
# 1052 "data/maps/NewBarkTown_Lab/scripts.pory"
	case 7, WaterStarterBall_17
# 1058 "data/maps/NewBarkTown_Lab/scripts.pory"
	case 8, WaterStarterBall_18
WaterStarterBall_8:
# 1066 "data/maps/NewBarkTown_Lab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WaterStarterBall_20
# 1072 "data/maps/NewBarkTown_Lab/scripts.pory"
	givemon VAR_TEMP_0, 5, ITEM_NONE
# 1073 "data/maps/NewBarkTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1074 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox WaterStarterBall_Text_10
# 1075 "data/maps/NewBarkTown_Lab/scripts.pory"
	call FadeRemoveBalls
# 1076 "data/maps/NewBarkTown_Lab/scripts.pory"
	setflag FLAG_WATER_STARTER
# 1077 "data/maps/NewBarkTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1078 "data/maps/NewBarkTown_Lab/scripts.pory"
	call NicknamePartyMon
# 1080 "data/maps/NewBarkTown_Lab/scripts.pory"
	releaseall
	end

WaterStarterBall_2:
# 1005 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox WaterStarterBall_Text_0
# 1006 "data/maps/NewBarkTown_Lab/scripts.pory"
	releaseall
	end

WaterStarterBall_10:
# 1011 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SQUIRTLE
# 1012 "data/maps/NewBarkTown_Lab/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 1013 "data/maps/NewBarkTown_Lab/scripts.pory"
	playmoncry SPECIES_SQUIRTLE, CRY_MODE_NORMAL
# 1014 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 10
# 1015 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox WaterStarterBall_Text_1, MSGBOX_YESNO
	goto WaterStarterBall_8

WaterStarterBall_11:
# 1017 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_TOTODILE
# 1018 "data/maps/NewBarkTown_Lab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 1019 "data/maps/NewBarkTown_Lab/scripts.pory"
	playmoncry SPECIES_TOTODILE, CRY_MODE_NORMAL
# 1020 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 10
# 1021 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox WaterStarterBall_Text_2, MSGBOX_YESNO
	goto WaterStarterBall_8

WaterStarterBall_12:
# 1023 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_MUDKIP
# 1024 "data/maps/NewBarkTown_Lab/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 1025 "data/maps/NewBarkTown_Lab/scripts.pory"
	playmoncry SPECIES_MUDKIP, CRY_MODE_NORMAL
# 1026 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 10
# 1027 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox WaterStarterBall_Text_3, MSGBOX_YESNO
	goto WaterStarterBall_8

WaterStarterBall_13:
# 1029 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_PIPLUP
# 1030 "data/maps/NewBarkTown_Lab/scripts.pory"
	showmonpic SPECIES_PIPLUP, 10, 3
# 1031 "data/maps/NewBarkTown_Lab/scripts.pory"
	playmoncry SPECIES_PIPLUP, CRY_MODE_NORMAL
# 1032 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 10
# 1033 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox WaterStarterBall_Text_4, MSGBOX_YESNO
	goto WaterStarterBall_8

WaterStarterBall_14:
# 1035 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_OSHAWOTT
# 1036 "data/maps/NewBarkTown_Lab/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 1037 "data/maps/NewBarkTown_Lab/scripts.pory"
	playmoncry SPECIES_OSHAWOTT, CRY_MODE_NORMAL
# 1038 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 10
# 1039 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox WaterStarterBall_Text_5, MSGBOX_YESNO
	goto WaterStarterBall_8

WaterStarterBall_15:
# 1041 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_FROAKIE
# 1042 "data/maps/NewBarkTown_Lab/scripts.pory"
	showmonpic SPECIES_FROAKIE, 10, 3
# 1043 "data/maps/NewBarkTown_Lab/scripts.pory"
	playmoncry SPECIES_FROAKIE, CRY_MODE_NORMAL
# 1044 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 10
# 1045 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox WaterStarterBall_Text_6, MSGBOX_YESNO
	goto WaterStarterBall_8

WaterStarterBall_16:
# 1047 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_POPPLIO
# 1048 "data/maps/NewBarkTown_Lab/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 1049 "data/maps/NewBarkTown_Lab/scripts.pory"
	playmoncry SPECIES_POPPLIO, CRY_MODE_NORMAL
# 1050 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 10
# 1051 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox WaterStarterBall_Text_7, MSGBOX_YESNO
	goto WaterStarterBall_8

WaterStarterBall_17:
# 1053 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SOBBLE
# 1054 "data/maps/NewBarkTown_Lab/scripts.pory"
	showmonpic SPECIES_SOBBLE, 10, 3
# 1055 "data/maps/NewBarkTown_Lab/scripts.pory"
	playmoncry SPECIES_SOBBLE, CRY_MODE_NORMAL
# 1056 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 10
# 1057 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox WaterStarterBall_Text_8, MSGBOX_YESNO
	goto WaterStarterBall_8

WaterStarterBall_18:
# 1059 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_QUAXLY
# 1060 "data/maps/NewBarkTown_Lab/scripts.pory"
	showmonpic SPECIES_QUAXLY, 10, 3
# 1061 "data/maps/NewBarkTown_Lab/scripts.pory"
	playmoncry SPECIES_QUAXLY, CRY_MODE_NORMAL
# 1062 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 10
# 1063 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox WaterStarterBall_Text_9, MSGBOX_YESNO
	goto WaterStarterBall_8

WaterStarterBall_20:
# 1067 "data/maps/NewBarkTown_Lab/scripts.pory"
	hidemonpic
# 1068 "data/maps/NewBarkTown_Lab/scripts.pory"
	releaseall
	end


GrassStarterBall::
# 1085 "data/maps/NewBarkTown_Lab/scripts.pory"
	lockall
# 1087 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_set FLAG_WATER_STARTER, GrassStarterBall_2
# 1087 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_set FLAG_GRASS_STARTER, GrassStarterBall_2
# 1087 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_set FLAG_FIRE_STARTER, GrassStarterBall_2
# 1092 "data/maps/NewBarkTown_Lab/scripts.pory"
	switch VAR_STARTERREGION
# 1093 "data/maps/NewBarkTown_Lab/scripts.pory"
	case 0, GrassStarterBall_10
# 1099 "data/maps/NewBarkTown_Lab/scripts.pory"
	case 1, GrassStarterBall_11
# 1105 "data/maps/NewBarkTown_Lab/scripts.pory"
	case 2, GrassStarterBall_12
# 1111 "data/maps/NewBarkTown_Lab/scripts.pory"
	case 3, GrassStarterBall_13
# 1117 "data/maps/NewBarkTown_Lab/scripts.pory"
	case 4, GrassStarterBall_14
# 1123 "data/maps/NewBarkTown_Lab/scripts.pory"
	case 5, GrassStarterBall_15
# 1129 "data/maps/NewBarkTown_Lab/scripts.pory"
	case 6, GrassStarterBall_16
# 1135 "data/maps/NewBarkTown_Lab/scripts.pory"
	case 7, GrassStarterBall_17
# 1141 "data/maps/NewBarkTown_Lab/scripts.pory"
	case 8, GrassStarterBall_18
GrassStarterBall_8:
# 1149 "data/maps/NewBarkTown_Lab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GrassStarterBall_20
# 1155 "data/maps/NewBarkTown_Lab/scripts.pory"
	givemon VAR_TEMP_0, 5, ITEM_NONE
# 1156 "data/maps/NewBarkTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1157 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox GrassStarterBall_Text_9
# 1158 "data/maps/NewBarkTown_Lab/scripts.pory"
	call FadeRemoveBalls
# 1159 "data/maps/NewBarkTown_Lab/scripts.pory"
	setflag FLAG_GRASS_STARTER
# 1160 "data/maps/NewBarkTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1161 "data/maps/NewBarkTown_Lab/scripts.pory"
	call NicknamePartyMon
# 1163 "data/maps/NewBarkTown_Lab/scripts.pory"
	releaseall
	end

GrassStarterBall_2:
# 1088 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox WaterStarterBall_Text_0
# 1089 "data/maps/NewBarkTown_Lab/scripts.pory"
	releaseall
	end

GrassStarterBall_10:
# 1094 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_BULBASAUR
# 1095 "data/maps/NewBarkTown_Lab/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 1096 "data/maps/NewBarkTown_Lab/scripts.pory"
	playmoncry SPECIES_BULBASAUR, CRY_MODE_NORMAL
# 1097 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 10
# 1098 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox GrassStarterBall_Text_0, MSGBOX_YESNO
	goto GrassStarterBall_8

GrassStarterBall_11:
# 1100 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_CHIKORITA
# 1101 "data/maps/NewBarkTown_Lab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 1102 "data/maps/NewBarkTown_Lab/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_NORMAL
# 1103 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 10
# 1104 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox GrassStarterBall_Text_1, MSGBOX_YESNO
	goto GrassStarterBall_8

GrassStarterBall_12:
# 1106 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_TREECKO
# 1107 "data/maps/NewBarkTown_Lab/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 1108 "data/maps/NewBarkTown_Lab/scripts.pory"
	playmoncry SPECIES_TREECKO, CRY_MODE_NORMAL
# 1109 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 10
# 1110 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox GrassStarterBall_Text_2, MSGBOX_YESNO
	goto GrassStarterBall_8

GrassStarterBall_13:
# 1112 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_TURTWIG
# 1113 "data/maps/NewBarkTown_Lab/scripts.pory"
	showmonpic SPECIES_TURTWIG, 10, 3
# 1114 "data/maps/NewBarkTown_Lab/scripts.pory"
	playmoncry SPECIES_TURTWIG, CRY_MODE_NORMAL
# 1115 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 10
# 1116 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox GrassStarterBall_Text_3, MSGBOX_YESNO
	goto GrassStarterBall_8

GrassStarterBall_14:
# 1118 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SNIVY
# 1119 "data/maps/NewBarkTown_Lab/scripts.pory"
	showmonpic SPECIES_SNIVY, 10, 3
# 1120 "data/maps/NewBarkTown_Lab/scripts.pory"
	playmoncry SPECIES_SNIVY, CRY_MODE_NORMAL
# 1121 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 10
# 1122 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox GrassStarterBall_Text_4, MSGBOX_YESNO
	goto GrassStarterBall_8

GrassStarterBall_15:
# 1124 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_CHESPIN
# 1125 "data/maps/NewBarkTown_Lab/scripts.pory"
	showmonpic SPECIES_CHESPIN, 10, 3
# 1126 "data/maps/NewBarkTown_Lab/scripts.pory"
	playmoncry SPECIES_CHESPIN, CRY_MODE_NORMAL
# 1127 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 10
# 1128 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox GrassStarterBall_Text_5, MSGBOX_YESNO
	goto GrassStarterBall_8

GrassStarterBall_16:
# 1130 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_ROWLET
# 1131 "data/maps/NewBarkTown_Lab/scripts.pory"
	showmonpic SPECIES_ROWLET, 10, 3
# 1132 "data/maps/NewBarkTown_Lab/scripts.pory"
	playmoncry SPECIES_ROWLET, CRY_MODE_NORMAL
# 1133 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 10
# 1134 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox GrassStarterBall_Text_6, MSGBOX_YESNO
	goto GrassStarterBall_8

GrassStarterBall_17:
# 1136 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_GROOKEY
# 1137 "data/maps/NewBarkTown_Lab/scripts.pory"
	showmonpic SPECIES_GROOKEY, 10, 3
# 1138 "data/maps/NewBarkTown_Lab/scripts.pory"
	playmoncry SPECIES_GROOKEY, CRY_MODE_NORMAL
# 1139 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 10
# 1140 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox GrassStarterBall_Text_7, MSGBOX_YESNO
	goto GrassStarterBall_8

GrassStarterBall_18:
# 1142 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SPRIGATITO
# 1143 "data/maps/NewBarkTown_Lab/scripts.pory"
	showmonpic SPECIES_SPRIGATITO, 10, 3
# 1144 "data/maps/NewBarkTown_Lab/scripts.pory"
	playmoncry SPECIES_SPRIGATITO, CRY_MODE_NORMAL
# 1145 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 10
# 1146 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox GrassStarterBall_Text_8, MSGBOX_YESNO
	goto GrassStarterBall_8

GrassStarterBall_20:
# 1150 "data/maps/NewBarkTown_Lab/scripts.pory"
	hidemonpic
# 1151 "data/maps/NewBarkTown_Lab/scripts.pory"
	releaseall
	end


FireStarterBall::
# 1168 "data/maps/NewBarkTown_Lab/scripts.pory"
	lockall
# 1170 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_set FLAG_WATER_STARTER, FireStarterBall_2
# 1170 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_set FLAG_GRASS_STARTER, FireStarterBall_2
# 1170 "data/maps/NewBarkTown_Lab/scripts.pory"
	goto_if_set FLAG_FIRE_STARTER, FireStarterBall_2
# 1175 "data/maps/NewBarkTown_Lab/scripts.pory"
	switch VAR_STARTERREGION
# 1176 "data/maps/NewBarkTown_Lab/scripts.pory"
	case 0, FireStarterBall_10
# 1182 "data/maps/NewBarkTown_Lab/scripts.pory"
	case 1, FireStarterBall_11
# 1188 "data/maps/NewBarkTown_Lab/scripts.pory"
	case 2, FireStarterBall_12
# 1194 "data/maps/NewBarkTown_Lab/scripts.pory"
	case 3, FireStarterBall_13
# 1200 "data/maps/NewBarkTown_Lab/scripts.pory"
	case 4, FireStarterBall_14
# 1206 "data/maps/NewBarkTown_Lab/scripts.pory"
	case 5, FireStarterBall_15
# 1212 "data/maps/NewBarkTown_Lab/scripts.pory"
	case 6, FireStarterBall_16
# 1218 "data/maps/NewBarkTown_Lab/scripts.pory"
	case 7, FireStarterBall_17
# 1224 "data/maps/NewBarkTown_Lab/scripts.pory"
	case 8, FireStarterBall_18
FireStarterBall_8:
# 1232 "data/maps/NewBarkTown_Lab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq FireStarterBall_20
# 1238 "data/maps/NewBarkTown_Lab/scripts.pory"
	givemon VAR_TEMP_0, 5, ITEM_NONE
# 1239 "data/maps/NewBarkTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1240 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox FireStarterBall_Text_9
# 1241 "data/maps/NewBarkTown_Lab/scripts.pory"
	call FadeRemoveBalls
# 1242 "data/maps/NewBarkTown_Lab/scripts.pory"
	setflag FLAG_FIRE_STARTER
# 1243 "data/maps/NewBarkTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1244 "data/maps/NewBarkTown_Lab/scripts.pory"
	call NicknamePartyMon
# 1246 "data/maps/NewBarkTown_Lab/scripts.pory"
	releaseall
	end

FireStarterBall_2:
# 1171 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox WaterStarterBall_Text_0
# 1172 "data/maps/NewBarkTown_Lab/scripts.pory"
	releaseall
	end

FireStarterBall_10:
# 1177 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_CHARMANDER
# 1178 "data/maps/NewBarkTown_Lab/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 1179 "data/maps/NewBarkTown_Lab/scripts.pory"
	playmoncry SPECIES_CHARMANDER, CRY_MODE_NORMAL
# 1180 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 10
# 1181 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox FireStarterBall_Text_0, MSGBOX_YESNO
	goto FireStarterBall_8

FireStarterBall_11:
# 1183 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_CYNDAQUIL
# 1184 "data/maps/NewBarkTown_Lab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 1185 "data/maps/NewBarkTown_Lab/scripts.pory"
	playmoncry SPECIES_CYNDAQUIL, CRY_MODE_NORMAL
# 1186 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 10
# 1187 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox FireStarterBall_Text_1, MSGBOX_YESNO
	goto FireStarterBall_8

FireStarterBall_12:
# 1189 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_TORCHIC
# 1190 "data/maps/NewBarkTown_Lab/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 1191 "data/maps/NewBarkTown_Lab/scripts.pory"
	playmoncry SPECIES_TORCHIC, CRY_MODE_NORMAL
# 1192 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 10
# 1193 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox FireStarterBall_Text_2, MSGBOX_YESNO
	goto FireStarterBall_8

FireStarterBall_13:
# 1195 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_CHIMCHAR
# 1196 "data/maps/NewBarkTown_Lab/scripts.pory"
	showmonpic SPECIES_CHIMCHAR, 10, 3
# 1197 "data/maps/NewBarkTown_Lab/scripts.pory"
	playmoncry SPECIES_CHIMCHAR, CRY_MODE_NORMAL
# 1198 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 10
# 1199 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox FireStarterBall_Text_3, MSGBOX_YESNO
	goto FireStarterBall_8

FireStarterBall_14:
# 1201 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_TEPIG
# 1202 "data/maps/NewBarkTown_Lab/scripts.pory"
	showmonpic SPECIES_TEPIG, 10, 3
# 1203 "data/maps/NewBarkTown_Lab/scripts.pory"
	playmoncry SPECIES_TEPIG, CRY_MODE_NORMAL
# 1204 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 10
# 1205 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox FireStarterBall_Text_4, MSGBOX_YESNO
	goto FireStarterBall_8

FireStarterBall_15:
# 1207 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_FENNEKIN
# 1208 "data/maps/NewBarkTown_Lab/scripts.pory"
	showmonpic SPECIES_FENNEKIN, 10, 3
# 1209 "data/maps/NewBarkTown_Lab/scripts.pory"
	playmoncry SPECIES_FENNEKIN, CRY_MODE_NORMAL
# 1210 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 10
# 1211 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox FireStarterBall_Text_5, MSGBOX_YESNO
	goto FireStarterBall_8

FireStarterBall_16:
# 1213 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_LITTEN
# 1214 "data/maps/NewBarkTown_Lab/scripts.pory"
	showmonpic SPECIES_LITTEN, 10, 3
# 1215 "data/maps/NewBarkTown_Lab/scripts.pory"
	playmoncry SPECIES_LITTEN, CRY_MODE_NORMAL
# 1216 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 10
# 1217 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox FireStarterBall_Text_6, MSGBOX_YESNO
	goto FireStarterBall_8

FireStarterBall_17:
# 1219 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SCORBUNNY
# 1220 "data/maps/NewBarkTown_Lab/scripts.pory"
	showmonpic SPECIES_SCORBUNNY, 10, 3
# 1221 "data/maps/NewBarkTown_Lab/scripts.pory"
	playmoncry SPECIES_SCORBUNNY, CRY_MODE_NORMAL
# 1222 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 10
# 1223 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox FireStarterBall_Text_7, MSGBOX_YESNO
	goto FireStarterBall_8

FireStarterBall_18:
# 1225 "data/maps/NewBarkTown_Lab/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_FUECOCO
# 1226 "data/maps/NewBarkTown_Lab/scripts.pory"
	showmonpic SPECIES_FUECOCO, 10, 3
# 1227 "data/maps/NewBarkTown_Lab/scripts.pory"
	playmoncry SPECIES_FUECOCO, CRY_MODE_NORMAL
# 1228 "data/maps/NewBarkTown_Lab/scripts.pory"
	delay 10
# 1229 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox FireStarterBall_Text_8, MSGBOX_YESNO
	goto FireStarterBall_8

FireStarterBall_20:
# 1233 "data/maps/NewBarkTown_Lab/scripts.pory"
	hidemonpic
# 1234 "data/maps/NewBarkTown_Lab/scripts.pory"
	releaseall
	end


NicknamePartyMon::
# 1251 "data/maps/NewBarkTown_Lab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 1252 "data/maps/NewBarkTown_Lab/scripts.pory"
	hidemonpic
# 1253 "data/maps/NewBarkTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_2
NicknamePartyMon_1:
# 1257 "data/maps/NewBarkTown_Lab/scripts.pory"
	call FadeRemoveBalls
	return

NicknamePartyMon_2:
# 1254 "data/maps/NewBarkTown_Lab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 1255 "data/maps/NewBarkTown_Lab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto NicknamePartyMon_1


StarterRegionProfessor_Text_0:
# 970 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Would you like to see starters from\n"
	.string "a specific region?$"

StarterRegionProfessor_Text_1:
# 972 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Choose wisely, you'll only get one!$"

StarterRegionProfessor_Text_2:
# 976 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Please choose a starter region.$"

StarterRegionProfessor_Text_3:
# 977 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Kanto$"

StarterRegionProfessor_Text_4:
# 977 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Johto$"

StarterRegionProfessor_Text_5:
# 977 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Hoenn$"

StarterRegionProfessor_Text_6:
# 977 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Sinnoh$"

StarterRegionProfessor_Text_7:
# 977 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Unova$"

StarterRegionProfessor_Text_8:
# 977 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Kalos$"

StarterRegionProfessor_Text_9:
# 977 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Alola$"

StarterRegionProfessor_Text_10:
# 977 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Galar$"

StarterRegionProfessor_Text_11:
# 977 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Paldea$"

StarterRegionProfessor_Text_12:
# 981 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Your region has been set!$"

WaterStarterBall_Text_0:
# 1005 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "You have already picked one,\n"
	.string "don't be greedy!$"

WaterStarterBall_Text_1:
# 1015 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Will you take Squirtle with you?$"

WaterStarterBall_Text_2:
# 1021 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Will you take Totodile with you?$"

WaterStarterBall_Text_3:
# 1027 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Will you take Mudkip with you?$"

WaterStarterBall_Text_4:
# 1033 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Will you take Piplup with you?$"

WaterStarterBall_Text_5:
# 1039 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Will you take Oshawott with you?$"

WaterStarterBall_Text_6:
# 1045 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Will you take Froakie with you?$"

WaterStarterBall_Text_7:
# 1051 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Will you take Popplio with you?$"

WaterStarterBall_Text_8:
# 1057 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Will you take Sobble with you?$"

WaterStarterBall_Text_9:
# 1063 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Will you take Quaxly with you?$"

WaterStarterBall_Text_10:
# 1074 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Received your water starter!$"

GrassStarterBall_Text_0:
# 1098 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Will you take Bulbasaur with you?$"

GrassStarterBall_Text_1:
# 1104 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Will you take Chikorita with you?$"

GrassStarterBall_Text_2:
# 1110 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Will you take Treecko with you?$"

GrassStarterBall_Text_3:
# 1116 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Will you take Turtwig with you?$"

GrassStarterBall_Text_4:
# 1122 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Will you take Snivy with you?$"

GrassStarterBall_Text_5:
# 1128 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Will you take Chespin with you?$"

GrassStarterBall_Text_6:
# 1134 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Will you take Rowlet with you?$"

GrassStarterBall_Text_7:
# 1140 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Will you take Grookey with you?$"

GrassStarterBall_Text_8:
# 1146 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Will you take Sprigatito with you?$"

GrassStarterBall_Text_9:
# 1157 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Received your grass starter!$"

FireStarterBall_Text_0:
# 1181 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Will you take Charmander with you?$"

FireStarterBall_Text_1:
# 1187 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Will you take Cyndaquil with you?$"

FireStarterBall_Text_2:
# 1193 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Will you take Torchic with you?$"

FireStarterBall_Text_3:
# 1199 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Will you take Chimchar with you?$"

FireStarterBall_Text_4:
# 1205 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Will you take Tepig with you?$"

FireStarterBall_Text_5:
# 1211 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Will you take Fennekin with you?$"

FireStarterBall_Text_6:
# 1217 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Will you take Litten with you?$"

FireStarterBall_Text_7:
# 1223 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Will you take Scorbunny with you?$"

FireStarterBall_Text_8:
# 1229 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Will you take Fuecoco with you?$"

FireStarterBall_Text_9:
# 1240 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Received your fire starter!$"

NicknamePartyMon_Text_0:
# 1251 "data/maps/NewBarkTown_Lab/scripts.pory"
	.string "Would you like to name your Pokémon?$"
