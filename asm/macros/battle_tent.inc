@ Verdanturf Tent

	@ Initialize the Verdanturf Battle Tent challenge
	.macro verdanturftent_init
	setvar VAR_0x8004, VERDANTURF_TENT_FUNC_INIT
	special CallVerdanturfTentFunction
	.endm

	@ Get the current prize item id
	.macro verdanturftent_getprize
	setvar VAR_0x8004, VERDANTURF_TENT_FUNC_GET_PRIZE
	special CallVerdanturfTentFunction
	.endm

	@ Unused. Set the prize item to be given
	.macro verdanturftent_setprize unusedArg:req, itemId:req
	setvar VAR_0x8004, VERDANTURF_TENT_FUNC_SET_PRIZE
	setvar VAR_0x8005, \unusedArg
	setvar VAR_0x8006, \itemId
	special CallVerdanturfTentFunction
	.endm

	@ Unused. Set the opponent trainer and gfx. SetNextBattleTentOpponent is used through tower_setopponent instead
	.macro verdanturftent_setopponentgfx
	setvar VAR_0x8004, VERDANTURF_TENT_FUNC_SET_OPPONENT_GFX
	special CallVerdanturfTentFunction
	.endm

	@ Buffers the opponents intro speech to STR_VAR_4. Despite being a Verdanturf Tent function, it serves the same purpose for all 3 tents.
	.macro battletent_getopponentintro
	setvar VAR_0x8004, VERDANTURF_TENT_FUNC_GET_OPPONENT_INTRO
	special CallVerdanturfTentFunction
	.endm

	@ Save the game and set the challenge status
	.macro verdanturftent_save challengeStatus:req
	setvar VAR_0x8004, VERDANTURF_TENT_FUNC_SAVE
	setvar VAR_0x8005, \challengeStatus
	special CallVerdanturfTentFunction
	.endm

	@ Set the prize item as randomly selected from a list. Randomness unnecessary, as the list is only 1 item
	.macro verdanturftent_setrandomprize
	setvar VAR_0x8004, VERDANTURF_TENT_FUNC_SET_RANDOM_PRIZE
	special CallVerdanturfTentFunction
	.endm

	@ Give the current prize item. FALSE if no room for prize
	.macro verdanturftent_giveprize
	setvar VAR_0x8004, VERDANTURF_TENT_FUNC_GIVE_PRIZE
	special CallVerdanturfTentFunction
	.endm


@ Fallarbor Tent

	@ Initialize the Fallarbor Battle Tent challenge
	.macro fallarbortent_init
	setvar VAR_0x8004, FALLARBOR_TENT_FUNC_INIT
	special CallFallarborTentFunction
	.endm

	@ Get the current prize item id
	.macro fallarbortent_getprize
	setvar VAR_0x8004, FALLARBOR_TENT_FUNC_GET_PRIZE
	special CallFallarborTentFunction
	.endm

	@ Unused. Set the prize item to be given
	.macro fallarbortent_setprize unusedArg:req, itemId:req
	setvar VAR_0x8004, FALLARBOR_TENT_FUNC_SET_PRIZE
	setvar VAR_0x8005, \unusedArg
	setvar VAR_0x8006, \itemId
	special CallFallarborTentFunction
	.endm

	@ Save the game and set the challenge status
	.macro fallarbortent_save challengeStatus:req
	setvar VAR_0x8004, FALLARBOR_TENT_FUNC_SAVE
	setvar VAR_0x8005, \challengeStatus
	special CallFallarborTentFunction
	.endm

	@ Set the prize item as randomly selected from a list. Randomness unnecessary, as the list is only 1 item
	.macro fallarbortent_setrandomprize
	setvar VAR_0x8004, FALLARBOR_TENT_FUNC_SET_RANDOM_PRIZE
	special CallFallarborTentFunction
	.endm

	@ Give the current prize item. FALSE if no room for prize
	.macro fallarbortent_giveprize
	setvar VAR_0x8004, FALLARBOR_TENT_FUNC_GIVE_PRIZE
	special CallFallarborTentFunction
	.endm

	@ Buffer the opponent trainers name to STR_VAR_1
	.macro fallarbortent_getopponentname
	setvar VAR_0x8004, FALLARBOR_TENT_FUNC_GET_OPPONENT_NAME
	special CallFallarborTentFunction
	.endm


@ Slateport Tent

	@ Initialize the Slateport Battle Tent challenge
	.macro slateporttent_init
	setvar VAR_0x8004, SLATEPORT_TENT_FUNC_INIT
	special CallSlateportTentFunction
	.endm

	@ Get the current prize item id
	.macro slateporttent_getprize
	setvar VAR_0x8004, SLATEPORT_TENT_FUNC_GET_PRIZE
	special CallSlateportTentFunction
	.endm

	@ Unused. Set the prize item to be given
	.macro slateporttent_setprize unusedArg:req, itemId:req
	setvar VAR_0x8004, SLATEPORT_TENT_FUNC_SET_PRIZE
	setvar VAR_0x8005, \unusedArg
	setvar VAR_0x8006, \itemId
	special CallSlateportTentFunction
	.endm

	@ Save the game and set the challenge status
	.macro slateporttent_save challengeStatus:req
	setvar VAR_0x8004, SLATEPORT_TENT_FUNC_SAVE
	setvar VAR_0x8005, \challengeStatus
	special CallSlateportTentFunction
	.endm

	@ Set the prize item as randomly selected from a list. Randomness unnecessary, as the list is only 1 item
	.macro slateporttent_setrandomprize
	setvar VAR_0x8004, SLATEPORT_TENT_FUNC_SET_RANDOM_PRIZE
	special CallSlateportTentFunction
	.endm

	@ Give the current prize item. FALSE if no room for prize
	.macro slateporttent_giveprize
	setvar VAR_0x8004, SLATEPORT_TENT_FUNC_GIVE_PRIZE
	special CallSlateportTentFunction
	.endm

	@ Slateport Tent's version of factory_rentmons
	.macro slateporttent_rentmons
	setvar VAR_0x8004, SLATEPORT_TENT_FUNC_SELECT_RENT_MONS
	special CallSlateportTentFunction
	.endm

	@ Slateport Tent's version of factory_swapmons
	.macro slateporttent_swapmons
	setvar VAR_0x8004, SLATEPORT_TENT_FUNC_SWAP_RENT_MONS
	special CallSlateportTentFunction
	.endm

	@ Slateport Tent's version of factory_generateopponentmons
	.macro slateporttent_generateopponentmons
	setvar VAR_0x8004, SLATEPORT_TENT_FUNC_GENERATE_OPPONENT_MONS
	special CallSlateportTentFunction
	.endm

	@ Slateport Tent's version of factory_generaterentalmons
	.macro slateporttent_generaterentalmons
	setvar VAR_0x8004, SLATEPORT_TENT_FUNC_GENERATE_RENTAL_MONS
	special CallSlateportTentFunction
	.endm


@ Champions Dome Tent

	@ Initialize the Champions Dome Tent challenge
	.macro championsdometent_init
	setvar VAR_0x8004, CHAMPIONS_DOME_TENT_FUNC_INIT
	special CallChampionsDomeTentFunction
	.endm

	@ Get the current prize item id
	.macro championsdometent_getprize
	setvar VAR_0x8004, CHAMPIONS_DOME_TENT_FUNC_GET_PRIZE
	special CallChampionsDomeTentFunction
	.endm

	@ Save the game and set the challenge status
	.macro championsdometent_save challengeStatus:req
	setvar VAR_0x8004, CHAMPIONS_DOME_TENT_FUNC_SAVE
	setvar VAR_0x8005, \challengeStatus
	special CallChampionsDomeTentFunction
	.endm

	@ Set the prize item as randomly selected from a list. Randomness unnecessary, as the list is only 1 item
	.macro championsdometent_setrandomprize
	setvar VAR_0x8004, CHAMPIONS_DOME_TENT_FUNC_SET_RANDOM_PRIZE
	special CallChampionsDomeTentFunction
	.endm

	@ Give the current prize item. FALSE if no room for prize
	.macro championsdometent_giveprize
	setvar VAR_0x8004, CHAMPIONS_DOME_TENT_FUNC_GIVE_PRIZE
	special CallChampionsDomeTentFunction
	.endm

	@ Roll the 8-slot mini bracket and record the player's Round of 8/Semifinal/Final opponents
	.macro championsdometent_generatebracket
	setvar VAR_0x8004, CHAMPIONS_DOME_TENT_FUNC_GENERATE_BRACKET
	special CallChampionsDomeTentFunction
	.endm

	@ Buffer the opponent trainer's name to STR_VAR_1
	.macro championsdometent_getopponentname
	setvar VAR_0x8004, CHAMPIONS_DOME_TENT_FUNC_GET_OPPONENT_NAME
	special CallChampionsDomeTentFunction
	.endm


@ Champions Pike Tent

	@ Initialize the Champions Pike Tent challenge
	.macro championspiketent_init
	setvar VAR_0x8004, CHAMPIONS_PIKE_TENT_FUNC_INIT
	special CallChampionsPikeTentFunction
	.endm

	@ Get the current prize item id
	.macro championspiketent_getprize
	setvar VAR_0x8004, CHAMPIONS_PIKE_TENT_FUNC_GET_PRIZE
	special CallChampionsPikeTentFunction
	.endm

	@ Save the game and set the challenge status
	.macro championspiketent_save challengeStatus:req
	setvar VAR_0x8004, CHAMPIONS_PIKE_TENT_FUNC_SAVE
	setvar VAR_0x8005, \challengeStatus
	special CallChampionsPikeTentFunction
	.endm

	@ Set the prize item as randomly selected from a list. Randomness unnecessary, as the list is only 1 item
	.macro championspiketent_setrandomprize
	setvar VAR_0x8004, CHAMPIONS_PIKE_TENT_FUNC_SET_RANDOM_PRIZE
	special CallChampionsPikeTentFunction
	.endm

	@ Give the current prize item. FALSE if no room for prize
	.macro championspiketent_giveprize
	setvar VAR_0x8004, CHAMPIONS_PIKE_TENT_FUNC_GIVE_PRIZE
	special CallChampionsPikeTentFunction
	.endm

	@ Buffer the opponent trainer's name to STR_VAR_1
	.macro championspiketent_getopponentname
	setvar VAR_0x8004, CHAMPIONS_PIKE_TENT_FUNC_GET_OPPONENT_NAME
	special CallChampionsPikeTentFunction
	.endm

	@ Roll the curse-or-treasure mystery room that replaces the 2nd battle. Result in VAR_RESULT (CHAMPIONS_PIKE_MYSTERY_*)
	.macro championspiketent_trymysteryroom
	setvar VAR_0x8004, CHAMPIONS_PIKE_TENT_FUNC_TRY_MYSTERY_ROOM
	special CallChampionsPikeTentFunction
	.endm


@ Champions Pyramid Tent

	@ Initialize the Champions Pyramid Tent challenge
	.macro championspyramidtent_init
	setvar VAR_0x8004, CHAMPIONS_PYRAMID_TENT_FUNC_INIT
	special CallChampionsPyramidTentFunction
	.endm

	@ Get the current prize item id
	.macro championspyramidtent_getprize
	setvar VAR_0x8004, CHAMPIONS_PYRAMID_TENT_FUNC_GET_PRIZE
	special CallChampionsPyramidTentFunction
	.endm

	@ Save the game and set the challenge status
	.macro championspyramidtent_save challengeStatus:req
	setvar VAR_0x8004, CHAMPIONS_PYRAMID_TENT_FUNC_SAVE
	setvar VAR_0x8005, \challengeStatus
	special CallChampionsPyramidTentFunction
	.endm

	@ Set the prize item as randomly selected from a list. Randomness unnecessary, as the list is only 1 item
	.macro championspyramidtent_setrandomprize
	setvar VAR_0x8004, CHAMPIONS_PYRAMID_TENT_FUNC_SET_RANDOM_PRIZE
	special CallChampionsPyramidTentFunction
	.endm

	@ Give the current prize item. FALSE if no room for prize
	.macro championspyramidtent_giveprize
	setvar VAR_0x8004, CHAMPIONS_PYRAMID_TENT_FUNC_GIVE_PRIZE
	special CallChampionsPyramidTentFunction
	.endm

	@ Buffer the opponent trainer's name to STR_VAR_1
	.macro championspyramidtent_getopponentname
	setvar VAR_0x8004, CHAMPIONS_PYRAMID_TENT_FUNC_GET_OPPONENT_NAME
	special CallChampionsPyramidTentFunction
	.endm

