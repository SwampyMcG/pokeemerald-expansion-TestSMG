const struct BattleFrontierTrainer gBattleFrontierTrainers[FRONTIER_TRAINERS_COUNT] =
{
    [FRONTIER_TRAINER_BRADY] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("BRADY"),
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_1}
    },
    [FRONTIER_TRAINER_CONNER] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("CONNER"),
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_1}
    },
    [FRONTIER_TRAINER_BRADLEY] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("BRADLEY"),
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_1}
    },
    [FRONTIER_TRAINER_CYBIL] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("CYBIL"),
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_1}
    },
    [FRONTIER_TRAINER_RODETTE] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("RODETTE"),
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_1}
    },
    [FRONTIER_TRAINER_PEGGY] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("PEGGY"),
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_1}
    },
    [FRONTIER_TRAINER_KEITH] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_M,
        .trainerName = _("KEITH"),
        .monSet = (const u16[]){FRONTIER_MONS_SCHOOL_KID_1}
    },
    [FRONTIER_TRAINER_GRAYSON] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_M,
        .trainerName = _("GRAYSON"),
        .monSet = (const u16[]){FRONTIER_MONS_SCHOOL_KID_1}
    },
    [FRONTIER_TRAINER_GLENN] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_M,
        .trainerName = _("GLENN"),
        .monSet = (const u16[]){FRONTIER_MONS_SCHOOL_KID_1}
    },
    [FRONTIER_TRAINER_LILIANA] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_F,
        .trainerName = _("LILIANA"),
        .monSet = (const u16[]){FRONTIER_MONS_SCHOOL_KID_1}
    },
    [FRONTIER_TRAINER_ELISE] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_F,
        .trainerName = _("ELISE"),
        .monSet = (const u16[]){FRONTIER_MONS_SCHOOL_KID_1}
    },
    [FRONTIER_TRAINER_ZOEY] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_F,
        .trainerName = _("ZOEY"),
        .monSet = (const u16[]){FRONTIER_MONS_SCHOOL_KID_1}
    },
    [FRONTIER_TRAINER_MANUEL] = {
        .facilityClass = FACILITY_CLASS_RICH_BOY,
        .trainerName = _("MANUEL"),
        .monSet = (const u16[]){FRONTIER_MONS_RICH_BOY_LADY_1}
    },
    [FRONTIER_TRAINER_RUSS] = {
        .facilityClass = FACILITY_CLASS_RICH_BOY,
        .trainerName = _("RUSS"),
        .monSet = (const u16[]){FRONTIER_MONS_RICH_BOY_LADY_1}
    },
    [FRONTIER_TRAINER_DUSTIN] = {
        .facilityClass = FACILITY_CLASS_RICH_BOY,
        .trainerName = _("DUSTIN"),
        .monSet = (const u16[]){FRONTIER_MONS_RICH_BOY_LADY_1}
    },
    [FRONTIER_TRAINER_TINA] = {
        .facilityClass = FACILITY_CLASS_LADY,
        .trainerName = _("TINA"),
        .monSet = (const u16[]){FRONTIER_MONS_RICH_BOY_LADY_1}
    },
    [FRONTIER_TRAINER_GILLIAN1] = {
        .facilityClass = FACILITY_CLASS_LADY,
        .trainerName = _("GILLIAN"),
        .monSet = (const u16[]){FRONTIER_MONS_RICH_BOY_LADY_1}
    },
    [FRONTIER_TRAINER_ZOE] = {
        .facilityClass = FACILITY_CLASS_LADY,
        .trainerName = _("ZOE"),
        .monSet = (const u16[]){FRONTIER_MONS_RICH_BOY_LADY_1}
    },
    [FRONTIER_TRAINER_CHEN] = {
        .facilityClass = FACILITY_CLASS_CAMPER,
        .trainerName = _("CHEN"),
        .monSet = (const u16[]){FRONTIER_MONS_CAMPER_PICNICKER_1}
    },
    [FRONTIER_TRAINER_AL] = {
        .facilityClass = FACILITY_CLASS_CAMPER,
        .trainerName = _("AL"),
        .monSet = (const u16[]){FRONTIER_MONS_CAMPER_PICNICKER_1}
    },
    [FRONTIER_TRAINER_MITCH] = {
        .facilityClass = FACILITY_CLASS_CAMPER,
        .trainerName = _("MITCH"),
        .monSet = (const u16[]){FRONTIER_MONS_CAMPER_PICNICKER_1}
    },
    [FRONTIER_TRAINER_ANNE] = {
        .facilityClass = FACILITY_CLASS_PICNICKER,
        .trainerName = _("ANNE"),
        .monSet = (const u16[]){FRONTIER_MONS_CAMPER_PICNICKER_1}
    },
    [FRONTIER_TRAINER_ALIZE] = {
        .facilityClass = FACILITY_CLASS_PICNICKER,
        .trainerName = _("ALIZE"),
        .monSet = (const u16[]){FRONTIER_MONS_CAMPER_PICNICKER_1}
    },
    [FRONTIER_TRAINER_LAUREN] = {
        .facilityClass = FACILITY_CLASS_PICNICKER,
        .trainerName = _("LAUREN"),
        .monSet = (const u16[]){FRONTIER_MONS_CAMPER_PICNICKER_1}
    },
    [FRONTIER_TRAINER_KIPP] = {
        .facilityClass = FACILITY_CLASS_TUBER_M,
        .trainerName = _("KIPP"),
        .monSet = (const u16[]){FRONTIER_MONS_TUBER_1}
    },
    [FRONTIER_TRAINER_JASON] = {
        .facilityClass = FACILITY_CLASS_TUBER_M,
        .trainerName = _("JASON"),
        .monSet = (const u16[]){FRONTIER_MONS_TUBER_1}
    },
    [FRONTIER_TRAINER_JOHN] = {
        .facilityClass = FACILITY_CLASS_TUBER_M,
        .trainerName = _("JOHN"),
        .monSet = (const u16[]){FRONTIER_MONS_TUBER_1}
    },
    [FRONTIER_TRAINER_ANN] = {
        .facilityClass = FACILITY_CLASS_TUBER_F,
        .trainerName = _("ANN"),
        .monSet = (const u16[]){FRONTIER_MONS_TUBER_1}
    },
    [FRONTIER_TRAINER_EILEEN] = {
        .facilityClass = FACILITY_CLASS_TUBER_F,
        .trainerName = _("EILEEN"),
        .monSet = (const u16[]){FRONTIER_MONS_TUBER_1}
    },
    [FRONTIER_TRAINER_CARLIE] = {
        .facilityClass = FACILITY_CLASS_TUBER_F,
        .trainerName = _("CARLIE"),
        .monSet = (const u16[]){FRONTIER_MONS_TUBER_1}
    },
    [FRONTIER_TRAINER_GORDON] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_M,
        .trainerName = _("GORDON"),
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMER_M_1}
    },
    [FRONTIER_TRAINER_AYDEN] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_M,
        .trainerName = _("AYDEN"),
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMER_M_1}
    },
    [FRONTIER_TRAINER_MARCO] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_M,
        .trainerName = _("MARCO"),
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMER_M_1}
    },
    [FRONTIER_TRAINER_CIERRA] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_F,
        .trainerName = _("CIERRA"),
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMER_F_1}
    },
    [FRONTIER_TRAINER_MARCY] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_F,
        .trainerName = _("MARCY"),
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMER_F_1}
    },
    [FRONTIER_TRAINER_KATHY] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_F,
        .trainerName = _("KATHY"),
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMER_F_1}
    },
    [FRONTIER_TRAINER_PEYTON] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("PEYTON"),
        .monSet = (const u16[]){FRONTIER_MONS_POKEFAN_M_1}
    },
    [FRONTIER_TRAINER_JULIAN] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("JULIAN"),
        .monSet = (const u16[]){FRONTIER_MONS_POKEFAN_M_1}
    },
    [FRONTIER_TRAINER_QUINN] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("QUINN"),
        .monSet = (const u16[]){FRONTIER_MONS_POKEFAN_M_1}
    },
    [FRONTIER_TRAINER_HAYLEE] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("HAYLEE"),
        .monSet = (const u16[]){FRONTIER_MONS_POKEFAN_F_1}
    },
    [FRONTIER_TRAINER_AMANDA] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("AMANDA"),
        .monSet = (const u16[]){FRONTIER_MONS_POKEFAN_F_1}
    },
    [FRONTIER_TRAINER_STACY] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("STACY"),
        .monSet = (const u16[]){FRONTIER_MONS_POKEFAN_F_1}
    },
    // The below 6 are the early Pkmn Breeder class trainers, which use groups from other general classes
    [FRONTIER_TRAINER_RAFAEL] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("RAFAEL"),
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_1}
    },
    [FRONTIER_TRAINER_OLIVER] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("OLIVER"),
        .monSet = (const u16[]){FRONTIER_MONS_SCHOOL_KID_1}
    },
    [FRONTIER_TRAINER_PAYTON] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("PAYTON"),
        .monSet = (const u16[]){FRONTIER_MONS_CAMPER_PICNICKER_1}
    },
    [FRONTIER_TRAINER_PAMELA] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("PAMELA"),
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_1}
    },
    [FRONTIER_TRAINER_ELIZA] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("ELIZA"),
        .monSet = (const u16[]){FRONTIER_MONS_SCHOOL_KID_1}
    },
    [FRONTIER_TRAINER_MARISA] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("MARISA"),
        .monSet = (const u16[]){FRONTIER_MONS_CAMPER_PICNICKER_1}
    },
    [FRONTIER_TRAINER_LEWIS] = {
        .facilityClass = FACILITY_CLASS_BUG_CATCHER,
        .trainerName = _("LEWIS"),
        .monSet = (const u16[]){FRONTIER_MONS_BUG_CATCHER_1_EXTRA(METAPOD, BLIPBUG)}
    },
    [FRONTIER_TRAINER_YOSHI] = {
        .facilityClass = FACILITY_CLASS_BUG_CATCHER,
        .trainerName = _("YOSHI"),
        .monSet = (const u16[]){FRONTIER_MONS_BUG_CATCHER_1_EXTRA(ROLYCOLY, CASCOON)}
    },
    [FRONTIER_TRAINER_DESTIN] = {
        .facilityClass = FACILITY_CLASS_BUG_CATCHER,
        .trainerName = _("DESTIN"),
        .monSet = (const u16[]){FRONTIER_MONS_BUG_CATCHER_1}
    },
    [FRONTIER_TRAINER_KEON] = {
        .facilityClass = FACILITY_CLASS_NINJA_BOY,
        .trainerName = _("KEON"),
        .monSet = (const u16[]){FRONTIER_MONS_NINJA_BOY_1}
    },
    [FRONTIER_TRAINER_STUART] = {
        .facilityClass = FACILITY_CLASS_NINJA_BOY,
        .trainerName = _("STUART"),
        .monSet = (const u16[]){FRONTIER_MONS_NINJA_BOY_1}
    },
    [FRONTIER_TRAINER_NESTOR] = {
        .facilityClass = FACILITY_CLASS_NINJA_BOY,
        .trainerName = _("NESTOR"),
        .monSet = (const u16[]){FRONTIER_MONS_NINJA_BOY_1}
    },
    [FRONTIER_TRAINER_DERRICK] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("DERRICK"),
        .monSet = (const u16[]){FRONTIER_MONS_BUG_MANIAC_1}
    },
    [FRONTIER_TRAINER_BRYSON] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("BRYSON"),
        .monSet = (const u16[]){FRONTIER_MONS_BUG_MANIAC_1}
    },
    [FRONTIER_TRAINER_CLAYTON] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("CLAYTON"),
        .monSet = (const u16[]){FRONTIER_MONS_BUG_MANIAC_1}
    },
    [FRONTIER_TRAINER_TRENTON] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("TRENTON"),
        .monSet = (const u16[]){FRONTIER_MONS_FISHERMAN_1}
    },
    [FRONTIER_TRAINER_JENSON] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("JENSON"),
        .monSet = (const u16[]){FRONTIER_MONS_FISHERMAN_1}
    },
    [FRONTIER_TRAINER_WESLEY] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("WESLEY"),
        .monSet = (const u16[]){FRONTIER_MONS_FISHERMAN_1}
    },
    [FRONTIER_TRAINER_ANTON] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("ANTON"),
        .monSet = (const u16[]){FRONTIER_MONS_RUIN_MANIAC_1}
    },
    [FRONTIER_TRAINER_LAWSON] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("LAWSON"),
        .monSet = (const u16[]){FRONTIER_MONS_RUIN_MANIAC_1}
    },
    [FRONTIER_TRAINER_SAMMY] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("SAMMY"),
        .monSet = (const u16[]){FRONTIER_MONS_RUIN_MANIAC_1}
    },
    // The below 3 are the early Collector class trainers, which use groups from other general classes
    [FRONTIER_TRAINER_ARNIE] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("ARNIE"),
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_1}
    },
    [FRONTIER_TRAINER_ADRIAN] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("ADRIAN"),
        .monSet = (const u16[]){FRONTIER_MONS_SCHOOL_KID_1}
    },
    [FRONTIER_TRAINER_TRISTAN] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("TRISTAN"),
        .monSet = (const u16[]){FRONTIER_MONS_CAMPER_PICNICKER_1}
    },
    [FRONTIER_TRAINER_JULIANA] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("JULIANA"),
        .monSet = (const u16[]){FRONTIER_MONS_PARASOL_LADY_1}
    },
    [FRONTIER_TRAINER_RYLEE] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("RYLEE"),
        .monSet = (const u16[]){FRONTIER_MONS_PARASOL_LADY_1}
    },
    [FRONTIER_TRAINER_CHELSEA] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("CHELSEA"),
        .monSet = (const u16[]){FRONTIER_MONS_PARASOL_LADY_1}
    },
    // The below 3 are the early Beauty class trainers, which use groups from other general classes
    [FRONTIER_TRAINER_DANELA] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("DANELA"),
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_1}
    },
    [FRONTIER_TRAINER_LIZBETH] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("LIZBETH"),
        .monSet = (const u16[]){FRONTIER_MONS_SCHOOL_KID_1}
    },
    [FRONTIER_TRAINER_AMELIA] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("AMELIA"),
        .monSet = (const u16[]){FRONTIER_MONS_CAMPER_PICNICKER_1}
    },
    [FRONTIER_TRAINER_JILLIAN] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("JILLIAN"),
        .monSet = (const u16[]){FRONTIER_MONS_AROMA_LADY_1}
    },
    [FRONTIER_TRAINER_ABBIE] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("ABBIE"),
        .monSet = (const u16[]){FRONTIER_MONS_AROMA_LADY_1}
    },
    [FRONTIER_TRAINER_BRIANA] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("BRIANA"),
        .monSet = (const u16[]){FRONTIER_MONS_AROMA_LADY_1}
    },
    [FRONTIER_TRAINER_ANTONIO] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("ANTONIO"),
        .monSet = (const u16[]){FRONTIER_MONS_GUITARIST_1}
    },
    [FRONTIER_TRAINER_JADEN] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("JADEN"),
        .monSet = (const u16[]){FRONTIER_MONS_GUITARIST_1}
    },
    [FRONTIER_TRAINER_DAKOTA] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("DAKOTA"),
        .monSet = (const u16[]){FRONTIER_MONS_GUITARIST_1}
    },
    [FRONTIER_TRAINER_BRAYDEN] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("BRAYDEN"),
        .monSet = (const u16[]){FRONTIER_MONS_BIRD_KEEPER_1}
    },
    [FRONTIER_TRAINER_CORSON] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("CORSON"),
        .monSet = (const u16[]){FRONTIER_MONS_BIRD_KEEPER_1}
    },
    [FRONTIER_TRAINER_TREVIN] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("TREVIN"),
        .monSet = (const u16[]){FRONTIER_MONS_BIRD_KEEPER_1}
    },
    [FRONTIER_TRAINER_PATRICK] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("PATRICK"),
        .monSet = (const u16[]){FRONTIER_MONS_SAILOR_1}
    },
    [FRONTIER_TRAINER_KADEN] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("KADEN"),
        .monSet = (const u16[]){FRONTIER_MONS_SAILOR_1}
    },
    [FRONTIER_TRAINER_MAXWELL] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("MAXWELL"),
        .monSet = (const u16[]){FRONTIER_MONS_SAILOR_1}
    },
    [FRONTIER_TRAINER_DARYL] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("DARYL"),
        .monSet = (const u16[]){FRONTIER_MONS_HIKER_1}
    },
    [FRONTIER_TRAINER_KENNETH] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("KENNETH"),
        .monSet = (const u16[]){FRONTIER_MONS_HIKER_1}
    },
    [FRONTIER_TRAINER_RICH] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("RICH"),
        .monSet = (const u16[]){FRONTIER_MONS_HIKER_1}
    },
    [FRONTIER_TRAINER_CADEN] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("CADEN"),
        .monSet = (const u16[]){FRONTIER_MONS_KINDLER_1}
    },
    [FRONTIER_TRAINER_MARLON] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("MARLON"),
        .monSet = (const u16[]){FRONTIER_MONS_KINDLER_1}
    },
    [FRONTIER_TRAINER_NASH] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("NASH"),
        .monSet = (const u16[]){FRONTIER_MONS_KINDLER_1}
    },
    [FRONTIER_TRAINER_ROBBY] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("ROBBY"),
        .monSet = (const u16[]){FRONTIER_MONS_RUNNING_TRIATHLETE_1}
    },
    [FRONTIER_TRAINER_REECE] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("REECE"),
        .monSet = (const u16[]){FRONTIER_MONS_RUNNING_TRIATHLETE_1}
    },
    [FRONTIER_TRAINER_KATHRYN] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("KATHRYN"),
        .monSet = (const u16[]){FRONTIER_MONS_RUNNING_TRIATHLETE_1}
    },
    [FRONTIER_TRAINER_ELLEN] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("ELLEN"),
        .monSet = (const u16[]){FRONTIER_MONS_RUNNING_TRIATHLETE_1}
    },
    [FRONTIER_TRAINER_RAMON] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("RAMON"),
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMING_TRIATHLETE_1}
    },
    [FRONTIER_TRAINER_ARTHUR] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("ARTHUR"),
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMING_TRIATHLETE_1}
    },
    [FRONTIER_TRAINER_ALONDRA] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("ALONDRA"),
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMING_TRIATHLETE_1}
    },
    [FRONTIER_TRAINER_ADRIANA] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("ADRIANA"),
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMING_TRIATHLETE_1}
    },
    [FRONTIER_TRAINER_MALIK] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("MALIK"),
        .monSet = (const u16[]){FRONTIER_MONS_CYCLING_TRIATHLETE_1}
    },
    [FRONTIER_TRAINER_JILL] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("JILL"),
        .monSet = (const u16[]){FRONTIER_MONS_CYCLING_TRIATHLETE_1}
    },
    [FRONTIER_TRAINER_ERIK] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("ERIK"),
        .monSet = (const u16[]){FRONTIER_MONS_RUNNING_TRIATHLETE_2}
    },
    [FRONTIER_TRAINER_YAZMIN] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("YAZMIN"),
        .monSet = (const u16[]){FRONTIER_MONS_RUNNING_TRIATHLETE_2}
    },
    [FRONTIER_TRAINER_JAMAL] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("JAMAL"),
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMING_TRIATHLETE_2}
    },
    [FRONTIER_TRAINER_LESLIE] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("LESLIE"),
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMING_TRIATHLETE_2}
    },
    [FRONTIER_TRAINER_DAVE] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("DAVE"),
        .monSet = (const u16[]){FRONTIER_MONS_CYCLING_TRIATHLETE_2}
    },
    [FRONTIER_TRAINER_CARLO] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("CARLO"),
        .monSet = (const u16[]){FRONTIER_MONS_CYCLING_TRIATHLETE_2}
    },
    [FRONTIER_TRAINER_EMILIA] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("EMILIA"),
        .monSet = (const u16[]){FRONTIER_MONS_CYCLING_TRIATHLETE_2}
    },
    [FRONTIER_TRAINER_DALIA] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("DALIA"),
        .monSet = (const u16[]){FRONTIER_MONS_CYCLING_TRIATHLETE_2}
    },
    [FRONTIER_TRAINER_HITOMI] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("HITOMI"),
        .monSet = (const u16[]){FRONTIER_MONS_BLACK_BELT_BATTLE_GIRL_1}
    },
    [FRONTIER_TRAINER_RICARDO] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("RICARDO"),
        .monSet = (const u16[]){FRONTIER_MONS_BLACK_BELT_BATTLE_GIRL_1}
    },
    [FRONTIER_TRAINER_SHIZUKA] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("SHIZUKA"),
        .monSet = (const u16[]){FRONTIER_MONS_BLACK_BELT_BATTLE_GIRL_1}
    },
    [FRONTIER_TRAINER_JOANA] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("JOANA"),
        .monSet = (const u16[]){FRONTIER_MONS_BLACK_BELT_BATTLE_GIRL_1}
    },
    [FRONTIER_TRAINER_KELLY] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("KELLY"),
        .monSet = (const u16[]){FRONTIER_MONS_BLACK_BELT_BATTLE_GIRL_1}
    },
    [FRONTIER_TRAINER_RAYNA] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("RAYNA"),
        .monSet = (const u16[]){FRONTIER_MONS_BLACK_BELT_BATTLE_GIRL_1}
    },
    [FRONTIER_TRAINER_EVAN] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("EVAN"),
        .monSet = (const u16[]){FRONTIER_MONS_EXPERT_1A}
    },
    [FRONTIER_TRAINER_JORDAN] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("JORDAN"),
        .monSet = (const u16[]){FRONTIER_MONS_EXPERT_1B}
    },
    [FRONTIER_TRAINER_JOEL] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("JOEL"),
        .monSet = (const u16[]){FRONTIER_MONS_EXPERT_1C}
    },
    [FRONTIER_TRAINER_KRISTEN] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("KRISTEN"),
        .monSet = (const u16[]){FRONTIER_MONS_EXPERT_1A}
    },
    [FRONTIER_TRAINER_SELPHY] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("SELPHY"),
        .monSet = (const u16[]){FRONTIER_MONS_EXPERT_1B}
    },
    [FRONTIER_TRAINER_CHLOE] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("CHLOE"),
        .monSet = (const u16[]){FRONTIER_MONS_EXPERT_1C}
    },
    [FRONTIER_TRAINER_NORTON] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("NORTON"),
        .monSet = (const u16[]){FRONTIER_MONS_PSYCHIC_1}
    },
    [FRONTIER_TRAINER_LUKAS] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("LUKAS"),
        .monSet = (const u16[]){FRONTIER_MONS_PSYCHIC_1}
    },
    [FRONTIER_TRAINER_ZACH] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("ZACH"),
        .monSet = (const u16[]){FRONTIER_MONS_PSYCHIC_1}
    },
    [FRONTIER_TRAINER_KAITLYN] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("KAITLYN"),
        .monSet = (const u16[]){FRONTIER_MONS_PSYCHIC_1}
    },
    [FRONTIER_TRAINER_BREANNA] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("BREANNA"),
        .monSet = (const u16[]){FRONTIER_MONS_PSYCHIC_1}
    },
    [FRONTIER_TRAINER_KENDRA] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("KENDRA"),
        .monSet = (const u16[]){FRONTIER_MONS_PSYCHIC_1}
    },
    [FRONTIER_TRAINER_MOLLY] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("MOLLY"),
        .monSet = (const u16[]){FRONTIER_MONS_HEX_MANIAC_1}
    },
    [FRONTIER_TRAINER_JAZMIN] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("JAZMIN"),
        .monSet = (const u16[]){FRONTIER_MONS_HEX_MANIAC_1}
    },
    [FRONTIER_TRAINER_KELSEY] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("KELSEY"),
        .monSet = (const u16[]){FRONTIER_MONS_HEX_MANIAC_1}
    },
    [FRONTIER_TRAINER_JALEN] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("JALEN"),
        .monSet = (const u16[]){FRONTIER_MONS_POKEMANIAC_1}
    },
    [FRONTIER_TRAINER_GRIFFEN] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("GRIFFEN"),
        .monSet = (const u16[]){FRONTIER_MONS_POKEMANIAC_1}
    },
    [FRONTIER_TRAINER_XANDER] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("XANDER"),
        .monSet = (const u16[]){FRONTIER_MONS_POKEMANIAC_1}
    },
    [FRONTIER_TRAINER_MARVIN] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("MARVIN"),
        .monSet = (const u16[]){FRONTIER_MONS_GENTLEMAN_1A}
    },
    [FRONTIER_TRAINER_BRENNAN] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("BRENNAN"),
        .monSet = (const u16[]){FRONTIER_MONS_GENTLEMAN_1B}
    },
    [FRONTIER_TRAINER_BALEY] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("BALEY"),
        .monSet = (const u16[]){FRONTIER_MONS_BUG_MANIAC_2}
    },
    [FRONTIER_TRAINER_ZACKARY] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("ZACKARY"),
        .monSet = (const u16[]){FRONTIER_MONS_RUIN_MANIAC_2}
    },
    [FRONTIER_TRAINER_GABRIEL] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("GABRIEL"),
        .monSet = (const u16[]){FRONTIER_MONS_COLLECTOR_1}
    },
    [FRONTIER_TRAINER_EMILY] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("EMILY"),
        .monSet = (const u16[]){FRONTIER_MONS_PARASOL_LADY_2}
    },
    [FRONTIER_TRAINER_JORDYN] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("JORDYN"),
        .monSet = (const u16[]){FRONTIER_MONS_BEAUTY_1}
    },
    [FRONTIER_TRAINER_SOFIA] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("SOFIA"),
        .monSet = (const u16[]){FRONTIER_MONS_AROMA_LADY_2}
    },
    [FRONTIER_TRAINER_BRADEN] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("BRADEN"),
        .monSet = (const u16[]){FRONTIER_MONS_COOLTRAINER_1A}
    },
    [FRONTIER_TRAINER_KAYDEN] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("KAYDEN"),
        .monSet = (const u16[]){FRONTIER_MONS_COOLTRAINER_1B}
    },
    [FRONTIER_TRAINER_COOPER] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("COOPER"),
        .monSet = (const u16[]){FRONTIER_MONS_COOLTRAINER_1C}
    },
    [FRONTIER_TRAINER_JULIA] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("JULIA"),
        .monSet = (const u16[]){FRONTIER_MONS_COOLTRAINER_1A}
    },
    [FRONTIER_TRAINER_AMARA] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("AMARA"),
        .monSet = (const u16[]){FRONTIER_MONS_COOLTRAINER_1B}
    },
    [FRONTIER_TRAINER_LYNN] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("LYNN"),
        .monSet = (const u16[]){FRONTIER_MONS_COOLTRAINER_1C}
    },
    [FRONTIER_TRAINER_JOVAN] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("JOVAN"),
        .monSet = (const u16[]){FRONTIER_MONS_PKMN_RANGER_1}
    },
    [FRONTIER_TRAINER_DOMINIC] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("DOMINIC"),
        .monSet = (const u16[]){FRONTIER_MONS_PKMN_RANGER_1}
    },
    [FRONTIER_TRAINER_NIKOLAS] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("NIKOLAS"),
        .monSet = (const u16[]){FRONTIER_MONS_PKMN_RANGER_1}
    },
    [FRONTIER_TRAINER_VALERIA] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("VALERIA"),
        .monSet = (const u16[]){FRONTIER_MONS_PKMN_RANGER_1}
    },
    [FRONTIER_TRAINER_DELANEY] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("DELANEY"),
        .monSet = (const u16[]){FRONTIER_MONS_PKMN_RANGER_1}
    },
    [FRONTIER_TRAINER_MEGHAN] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("MEGHAN"),
        .monSet = (const u16[]){FRONTIER_MONS_PKMN_RANGER_1}
    },
    [FRONTIER_TRAINER_ROBERTO] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("ROBERTO"),
        .monSet = (const u16[]){FRONTIER_MONS_DRAGON_TAMER_1}
    },
    [FRONTIER_TRAINER_DAMIAN] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("DAMIAN"),
        .monSet = (const u16[]){FRONTIER_MONS_DRAGON_TAMER_1}
    },
    [FRONTIER_TRAINER_BRODY] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("BRODY"),
        .monSet = (const u16[]){FRONTIER_MONS_DRAGON_TAMER_1}
    },
    [FRONTIER_TRAINER_GRAHAM] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("GRAHAM"),
        .monSet = (const u16[]){FRONTIER_MONS_DRAGON_TAMER_1}
    },
    [FRONTIER_TRAINER_TYLOR] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("TYLOR"),
        .monSet = (const u16[]){FRONTIER_MONS_POKEFAN_2}
    },
    [FRONTIER_TRAINER_JAREN] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("JAREN"),
        .monSet = (const u16[]){FRONTIER_MONS_POKEFAN_2}
    },
    [FRONTIER_TRAINER_CORDELL] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("CORDELL"),
        .monSet = (const u16[]){FRONTIER_MONS_PKMN_BREEDER_M_1}
    },
    [FRONTIER_TRAINER_JAZLYN] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("JAZLYN"),
        .monSet = (const u16[]){FRONTIER_MONS_PKMN_BREEDER_F_1}
    },
    [FRONTIER_TRAINER_ZACHERY] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("ZACHERY"),
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_2}
    },
    [FRONTIER_TRAINER_JOHAN] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("JOHAN"),
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_2_NO_DUGTRIO}
    },
    [FRONTIER_TRAINER_SHEA] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("SHEA"),
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_2}
    },
    [FRONTIER_TRAINER_KAILA] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("KAILA"),
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_2}
    },
    [FRONTIER_TRAINER_ISIAH] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_M,
        .trainerName = _("ISIAH"),
        .monSet = (const u16[]){FRONTIER_MONS_SCHOOL_KID_2}
    },
    [FRONTIER_TRAINER_GARRETT] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_M,
        .trainerName = _("GARRETT"),
        .monSet = (const u16[]){FRONTIER_MONS_SCHOOL_KID_2}
    },
    [FRONTIER_TRAINER_HAYLIE] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_F,
        .trainerName = _("HAYLIE"),
        .monSet = (const u16[]){FRONTIER_MONS_SCHOOL_KID_2}
    },
    [FRONTIER_TRAINER_MEGAN] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_F,
        .trainerName = _("MEGAN"),
        .monSet = (const u16[]){FRONTIER_MONS_SCHOOL_KID_2}
    },
    [FRONTIER_TRAINER_ISSAC] = {
        .facilityClass = FACILITY_CLASS_RICH_BOY,
        .trainerName = _("ISSAC"),
        .monSet = (const u16[]){FRONTIER_MONS_RICH_BOY_LADY_2}
    },
    [FRONTIER_TRAINER_QUINTON] = {
        .facilityClass = FACILITY_CLASS_RICH_BOY,
        .trainerName = _("QUINTON"),
        .monSet = (const u16[]){FRONTIER_MONS_RICH_BOY_LADY_2}
    },
    [FRONTIER_TRAINER_SALMA] = {
        .facilityClass = FACILITY_CLASS_LADY,
        .trainerName = _("SALMA"),
        .monSet = (const u16[]){FRONTIER_MONS_RICH_BOY_LADY_2}
    },
    [FRONTIER_TRAINER_ANSLEY] = {
        .facilityClass = FACILITY_CLASS_LADY,
        .trainerName = _("ANSLEY"),
        .monSet = (const u16[]){FRONTIER_MONS_RICH_BOY_LADY_2}
    },
    [FRONTIER_TRAINER_HOLDEN] = {
        .facilityClass = FACILITY_CLASS_BUG_CATCHER,
        .trainerName = _("HOLDEN"),
        .monSet = (const u16[]){FRONTIER_MONS_BUG_CATCHER_2}
    },
    [FRONTIER_TRAINER_LUCA] = {
        .facilityClass = FACILITY_CLASS_BUG_CATCHER,
        .trainerName = _("LUCA"),
        .monSet = (const u16[]){FRONTIER_MONS_BUG_CATCHER_2}
    },
    [FRONTIER_TRAINER_JAMISON] = {
        .facilityClass = FACILITY_CLASS_NINJA_BOY,
        .trainerName = _("JAMISON"),
        .monSet = (const u16[]){FRONTIER_MONS_NINJA_BOY_2}
    },
    [FRONTIER_TRAINER_GUNNAR] = {
        .facilityClass = FACILITY_CLASS_NINJA_BOY,
        .trainerName = _("GUNNAR"),
        .monSet = (const u16[]){FRONTIER_MONS_NINJA_BOY_2}
    },
    [FRONTIER_TRAINER_CRAIG] = {
        .facilityClass = FACILITY_CLASS_TUBER_M,
        .trainerName = _("CRAIG"),
        .monSet = (const u16[]){FRONTIER_MONS_TUBER_2}
    },
    [FRONTIER_TRAINER_PIERCE] = {
        .facilityClass = FACILITY_CLASS_TUBER_M,
        .trainerName = _("PIERCE"),
        .monSet = (const u16[]){FRONTIER_MONS_TUBER_2}
    },
    [FRONTIER_TRAINER_REGINA] = {
        .facilityClass = FACILITY_CLASS_TUBER_F,
        .trainerName = _("REGINA"),
        .monSet = (const u16[]){FRONTIER_MONS_TUBER_2}
    },
    [FRONTIER_TRAINER_ALISON] = {
        .facilityClass = FACILITY_CLASS_TUBER_F,
        .trainerName = _("ALISON"),
        .monSet = (const u16[]){FRONTIER_MONS_TUBER_2}
    },
    [FRONTIER_TRAINER_HANK] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("HANK"),
        .monSet = (const u16[]){FRONTIER_MONS_BUG_MANIAC_3}
    },
    [FRONTIER_TRAINER_EARL] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("EARL"),
        .monSet = (const u16[]){FRONTIER_MONS_BUG_MANIAC_3}
    },
    [FRONTIER_TRAINER_RAMIRO] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("RAMIRO"),
        .monSet = (const u16[]){FRONTIER_MONS_FISHERMAN_2}
    },
    [FRONTIER_TRAINER_HUNTER] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("HUNTER"),
        .monSet = (const u16[]){FRONTIER_MONS_FISHERMAN_2}
    },
    [FRONTIER_TRAINER_AIDEN] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("AIDEN"),
        .monSet = (const u16[]){FRONTIER_MONS_RUIN_MANIAC_3}
    },
    [FRONTIER_TRAINER_XAVIER] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("XAVIER"),
        .monSet = (const u16[]){FRONTIER_MONS_RUIN_MANIAC_3}
    },
    [FRONTIER_TRAINER_CLINTON] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("CLINTON"),
        .monSet = (const u16[]){FRONTIER_MONS_COLLECTOR_2}
    },
    [FRONTIER_TRAINER_JESSE] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("JESSE"),
        .monSet = (const u16[]){FRONTIER_MONS_COLLECTOR_2}
    },
    [FRONTIER_TRAINER_EDUARDO] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("EDUARDO"),
        .monSet = (const u16[]){FRONTIER_MONS_GUITARIST_2}
    },
    [FRONTIER_TRAINER_HAL] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("HAL"),
        .monSet = (const u16[]){FRONTIER_MONS_GUITARIST_2}
    },
    [FRONTIER_TRAINER_GAGE] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("GAGE"),
        .monSet = (const u16[]){FRONTIER_MONS_BIRD_KEEPER_2}
    },
    [FRONTIER_TRAINER_ARNOLD] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("ARNOLD"),
        .monSet = (const u16[]){FRONTIER_MONS_BIRD_KEEPER_2}
    },
    [FRONTIER_TRAINER_JARRETT] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("JARRETT"),
        .monSet = (const u16[]){FRONTIER_MONS_SAILOR_2}
    },
    [FRONTIER_TRAINER_GARETT] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("GARETT"),
        .monSet = (const u16[]){FRONTIER_MONS_SAILOR_2}
    },
    [FRONTIER_TRAINER_EMANUEL] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("EMANUEL"),
        .monSet = (const u16[]){FRONTIER_MONS_HIKER_2}
    },
    [FRONTIER_TRAINER_GUSTAVO] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("GUSTAVO"),
        .monSet = (const u16[]){FRONTIER_MONS_HIKER_2}
    },
    [FRONTIER_TRAINER_KAMERON] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("KAMERON"),
        .monSet = (const u16[]){FRONTIER_MONS_KINDLER_2}
    },
    [FRONTIER_TRAINER_ALFREDO] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("ALFREDO"),
        .monSet = (const u16[]){FRONTIER_MONS_KINDLER_2}
    },
    [FRONTIER_TRAINER_RUBEN] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("RUBEN"),
        .monSet = (const u16[]){FRONTIER_MONS_GENTLEMAN_2}
    },
    [FRONTIER_TRAINER_LAMAR] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("LAMAR"),
        .monSet = (const u16[]){FRONTIER_MONS_GENTLEMAN_2}
    },
    [FRONTIER_TRAINER_JAXON] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("JAXON"),
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_3}
    },
    [FRONTIER_TRAINER_LOGAN] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("LOGAN"),
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_3}
    },
    [FRONTIER_TRAINER_EMILEE] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("EMILEE"),
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_3}
    },
    [FRONTIER_TRAINER_JOSIE] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("JOSIE"),
        .monSet = (const u16[]){FRONTIER_MONS_YOUNGSTER_LASS_3}
    },
    [FRONTIER_TRAINER_ARMANDO] = {
        .facilityClass = FACILITY_CLASS_CAMPER,
        .trainerName = _("ARMANDO"),
        .monSet = (const u16[]){FRONTIER_MONS_CAMPER_PICNICKER_2}
    },
    [FRONTIER_TRAINER_SKYLER] = {
        .facilityClass = FACILITY_CLASS_CAMPER,
        .trainerName = _("SKYLER"),
        .monSet = (const u16[]){FRONTIER_MONS_CAMPER_PICNICKER_2}
    },
    [FRONTIER_TRAINER_RUTH] = {
        .facilityClass = FACILITY_CLASS_PICNICKER,
        .trainerName = _("RUTH"),
        .monSet = (const u16[]){FRONTIER_MONS_CAMPER_PICNICKER_2}
    },
    [FRONTIER_TRAINER_MELODY] = {
        .facilityClass = FACILITY_CLASS_PICNICKER,
        .trainerName = _("MELODY"),
        .monSet = (const u16[]){FRONTIER_MONS_CAMPER_PICNICKER_2}
    },
    [FRONTIER_TRAINER_PEDRO] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_M,
        .trainerName = _("PEDRO"),
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMER_M_2}
    },
    [FRONTIER_TRAINER_ERICK] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_M,
        .trainerName = _("ERICK"),
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMER_M_2}
    },
    [FRONTIER_TRAINER_ELAINE] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_F,
        .trainerName = _("ELAINE"),
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMER_F_2}
    },
    [FRONTIER_TRAINER_JOYCE] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_F,
        .trainerName = _("JOYCE"),
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMER_F_2}
    },
    [FRONTIER_TRAINER_TODD] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("TODD"),
        .monSet = (const u16[]){FRONTIER_MONS_POKEFAN_3}
    },
    [FRONTIER_TRAINER_GAVIN] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("GAVIN"),
        .monSet = (const u16[]){FRONTIER_MONS_POKEFAN_3}
    },
    [FRONTIER_TRAINER_MALORY] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("MALORY"),
        .monSet = (const u16[]){FRONTIER_MONS_POKEFAN_3}
    },
    [FRONTIER_TRAINER_ESTHER] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("ESTHER"),
        .monSet = (const u16[]){FRONTIER_MONS_POKEFAN_3}
    },
    [FRONTIER_TRAINER_OSCAR] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("OSCAR"),
        .monSet = (const u16[]){FRONTIER_MONS_PKMN_BREEDER_2}
    },
    [FRONTIER_TRAINER_WILSON] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("WILSON"),
        .monSet = (const u16[]){FRONTIER_MONS_PKMN_BREEDER_2}
    },
    [FRONTIER_TRAINER_CLARE] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("CLARE"),
        .monSet = (const u16[]){FRONTIER_MONS_PKMN_BREEDER_2}
    },
    [FRONTIER_TRAINER_TESS] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("TESS"),
        .monSet = (const u16[]){FRONTIER_MONS_PKMN_BREEDER_2}
    },
    [FRONTIER_TRAINER_LEON] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("LEON"),
        .monSet = (const u16[]){FRONTIER_MONS_COOLTRAINER_M_2A}
    },
    [FRONTIER_TRAINER_ALONZO] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("ALONZO"),
        .monSet = (const u16[]){FRONTIER_MONS_COOLTRAINER_M_2B}
    },
    [FRONTIER_TRAINER_VINCE] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("VINCE"),
        .monSet = (const u16[]){FRONTIER_MONS_COOLTRAINER_2C(LATIOS)}
    },
    [FRONTIER_TRAINER_BRYON] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("BRYON"),
        .monSet = (const u16[]){FRONTIER_MONS_COOLTRAINER_2D(LATIOS)}
    },
    [FRONTIER_TRAINER_AVA] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("AVA"),
        .monSet = (const u16[]){FRONTIER_MONS_COOLTRAINER_F_2A}
    },
    [FRONTIER_TRAINER_MIRIAM] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("MIRIAM"),
        .monSet = (const u16[]){FRONTIER_MONS_COOLTRAINER_F_2B}
    },
    [FRONTIER_TRAINER_CARRIE] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("CARRIE"),
        .monSet = (const u16[]){FRONTIER_MONS_COOLTRAINER_2C(LATIAS)}
    },
    [FRONTIER_TRAINER_GILLIAN2] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("GILLIAN"),
        .monSet = (const u16[]){FRONTIER_MONS_COOLTRAINER_2D(LATIAS)}
    },
    [FRONTIER_TRAINER_TYLER] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("TYLER"),
        .monSet = (const u16[]){FRONTIER_MONS_GENERAL_A}
    },
    [FRONTIER_TRAINER_CHAZ] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("CHAZ"),
        .monSet = (const u16[]){FRONTIER_MONS_GENERAL_B}
    },
    [FRONTIER_TRAINER_NELSON] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("NELSON"),
        .monSet = (const u16[]){FRONTIER_MONS_COOLTRAINER_2D(LATIOS)}
    },
    [FRONTIER_TRAINER_SHANIA] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("SHANIA"),
        .monSet = (const u16[]){FRONTIER_MONS_GENERAL_C}
    },
    [FRONTIER_TRAINER_STELLA] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("STELLA"),
        .monSet = (const u16[]){FRONTIER_MONS_GENERAL_D}
    },
    [FRONTIER_TRAINER_DORINE] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("DORINE"),
        .monSet = (const u16[]){FRONTIER_MONS_COOLTRAINER_2D(LATIAS)}
    },
    [FRONTIER_TRAINER_MADDOX] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("MADDOX"),
        .monSet = (const u16[]){FRONTIER_MONS_DRAGON_TAMER_2}
    },
    [FRONTIER_TRAINER_DAVIN] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("DAVIN"),
        .monSet = (const u16[]){FRONTIER_MONS_DRAGON_TAMER_2}
    },
    [FRONTIER_TRAINER_TREVON] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("TREVON"),
        .monSet = (const u16[]){FRONTIER_MONS_DRAGON_TAMER_2}
    },
    [FRONTIER_TRAINER_MATEO] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("MATEO"),
        .monSet = (const u16[]){FRONTIER_MONS_BLACK_BELT_2A}
    },
    [FRONTIER_TRAINER_BRET] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("BRET"),
        .monSet = (const u16[]){FRONTIER_MONS_BLACK_BELT_BATTLE_GIRL_2B}
    },
    [FRONTIER_TRAINER_RAUL] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("RAUL"),
        .monSet = (const u16[]){FRONTIER_MONS_BLACK_BELT_BATTLE_GIRL_2C}
    },
    [FRONTIER_TRAINER_KAY] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("KAY"),
        .monSet = (const u16[]){FRONTIER_MONS_BATTLE_GIRL_2A}
    },
    [FRONTIER_TRAINER_ELENA] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("ELENA"),
        .monSet = (const u16[]){FRONTIER_MONS_BLACK_BELT_BATTLE_GIRL_2B}
    },
    [FRONTIER_TRAINER_ALANA] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("ALANA"),
        .monSet = (const u16[]){FRONTIER_MONS_BLACK_BELT_BATTLE_GIRL_2C}
    },
    [FRONTIER_TRAINER_ALEXAS] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("ALEXAS"),
        .monSet = (const u16[]){FRONTIER_MONS_EXPERT_2A(TYRANITAR)}
    },
    [FRONTIER_TRAINER_WESTON] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("WESTON"),
        .monSet = (const u16[]){FRONTIER_MONS_EXPERT_2B(LATIOS)}
    },
    [FRONTIER_TRAINER_JASPER] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("JASPER"),
        .monSet = (const u16[]){FRONTIER_MONS_EXPERT_2C(TYRANITAR)}
    },
    [FRONTIER_TRAINER_NADIA] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("NADIA"),
        .monSet = (const u16[]){FRONTIER_MONS_EXPERT_2A(DRAGONITE)}
    },
    [FRONTIER_TRAINER_MIRANDA] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("MIRANDA"),
        .monSet = (const u16[]){FRONTIER_MONS_EXPERT_2B(LATIAS)}
    },
    [FRONTIER_TRAINER_EMMA] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("EMMA"),
        .monSet = (const u16[]){FRONTIER_MONS_EXPERT_2C(DRAGONITE)}
    },
    [FRONTIER_TRAINER_ROLANDO] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("ROLANDO"),
        .monSet = (const u16[]){FRONTIER_MONS_PSYCHIC_2(LATIOS, ARTICUNO, ZAPDOS, MOLTRES)}
    },
    [FRONTIER_TRAINER_STANLY] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("STANLY"),
        .monSet = (const u16[]){FRONTIER_MONS_PSYCHIC_2(LATIOS, RAIKOU, ENTEI, SUICUNE)}
    },
    [FRONTIER_TRAINER_DARIO] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("DARIO"),
        .monSet = (const u16[]){FRONTIER_MONS_PSYCHIC_2(LATIOS, REGIROCK, REGICE, REGISTEEL)}
    },
    [FRONTIER_TRAINER_KARLEE] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("KARLEE"),
        .monSet = (const u16[]){FRONTIER_MONS_PSYCHIC_2(LATIAS, ARTICUNO, ZAPDOS, MOLTRES)}
    },
    [FRONTIER_TRAINER_JAYLIN] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("JAYLIN"),
        .monSet = (const u16[]){FRONTIER_MONS_PSYCHIC_2(LATIAS, RAIKOU, ENTEI, SUICUNE)}
    },
    [FRONTIER_TRAINER_INGRID] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("INGRID"),
        .monSet = (const u16[]){FRONTIER_MONS_PSYCHIC_2(LATIAS, REGIROCK, REGICE, REGISTEEL)}
    },
    [FRONTIER_TRAINER_DELILAH] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("DELILAH"),
        .monSet = (const u16[]){FRONTIER_MONS_HEX_MANIAC_2A}
    },
    [FRONTIER_TRAINER_CARLY] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("CARLY"),
        .monSet = (const u16[]){FRONTIER_MONS_HEX_MANIAC_2B}
    },
    [FRONTIER_TRAINER_LEXIE] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("LEXIE"),
        .monSet = (const u16[]){FRONTIER_MONS_HEX_MANIAC_2C}
    },
    [FRONTIER_TRAINER_MILLER] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("MILLER"),
        .monSet = (const u16[]){FRONTIER_MONS_POKEMANIAC_2A}
    },
    [FRONTIER_TRAINER_MARV] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("MARV"),
        .monSet = (const u16[]){FRONTIER_MONS_POKEMANIAC_2B}
    },
    [FRONTIER_TRAINER_LAYTON] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("LAYTON"),
        .monSet = (const u16[]){FRONTIER_MONS_POKEMANIAC_2C}
    },
    [FRONTIER_TRAINER_BROOKS] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("BROOKS"),
        .monSet = (const u16[]){FRONTIER_MONS_GENERAL_A}
    },
    [FRONTIER_TRAINER_GREGORY] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("GREGORY"),
        .monSet = (const u16[]){FRONTIER_MONS_GENTLEMAN_3A}
    },
    [FRONTIER_TRAINER_REESE] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("REESE"),
        .monSet = (const u16[]){FRONTIER_MONS_GENTLEMAN_3B}
    },
    [FRONTIER_TRAINER_MASON] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("MASON"),
        .monSet = (const u16[]){FRONTIER_MONS_GENERAL_A}
    },
    [FRONTIER_TRAINER_TOBY] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("TOBY"),
        .monSet = (const u16[]){FRONTIER_MONS_GENERAL_B}
    },
    [FRONTIER_TRAINER_DOROTHY] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("DOROTHY"),
        .monSet = (const u16[]){FRONTIER_MONS_GENERAL_C}
    },
    [FRONTIER_TRAINER_PIPER] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("PIPER"),
        .monSet = (const u16[]){FRONTIER_MONS_GENERAL_D}
    },
    [FRONTIER_TRAINER_FINN] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("FINN"),
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMING_TRIATHLETE_M_3}
    },
    [FRONTIER_TRAINER_SAMIR] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("SAMIR"),
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMING_TRIATHLETE_M_3}
    },
    [FRONTIER_TRAINER_FIONA] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("FIONA"),
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMING_TRIATHLETE_F_3}
    },
    [FRONTIER_TRAINER_GLORIA] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("GLORIA"),
        .monSet = (const u16[]){FRONTIER_MONS_SWIMMING_TRIATHLETE_F_3}
    },
    [FRONTIER_TRAINER_NICO] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("NICO"),
        .monSet = (const u16[]){FRONTIER_MONS_GENERAL_A}
    },
    [FRONTIER_TRAINER_JEREMY] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("JEREMY"),
        .monSet = (const u16[]){FRONTIER_MONS_GENERAL_B}
    },
    [FRONTIER_TRAINER_CAITLIN] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("CAITLIN"),
        .monSet = (const u16[]){FRONTIER_MONS_GENERAL_C}
    },
    [FRONTIER_TRAINER_REENA] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("REENA"),
        .monSet = (const u16[]){FRONTIER_MONS_GENERAL_D}
    },
    [FRONTIER_TRAINER_AVERY] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("AVERY"),
        .monSet = (const u16[]){FRONTIER_MONS_BUG_MANIAC_4}
    },
    [FRONTIER_TRAINER_LIAM] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("LIAM"),
        .monSet = (const u16[]){FRONTIER_MONS_BUG_MANIAC_4}
    },
    [FRONTIER_TRAINER_THEO] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("THEO"),
        .monSet = (const u16[]){FRONTIER_MONS_FISHERMAN_3}
    },
    [FRONTIER_TRAINER_BAILEY] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("BAILEY"),
        .monSet = (const u16[]){FRONTIER_MONS_FISHERMAN_3}
    },
    [FRONTIER_TRAINER_HUGO] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("HUGO"),
        .monSet = (const u16[]){FRONTIER_MONS_RUIN_MANIAC_4}
    },
    [FRONTIER_TRAINER_BRYCE] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("BRYCE"),
        .monSet = (const u16[]){FRONTIER_MONS_RUIN_MANIAC_4}
    },
    [FRONTIER_TRAINER_GIDEON] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("GIDEON"),
        .monSet = (const u16[]){FRONTIER_MONS_COLLECTOR_3}
    },
    [FRONTIER_TRAINER_TRISTON] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("TRISTON"),
        .monSet = (const u16[]){FRONTIER_MONS_COLLECTOR_3}
    },
    [FRONTIER_TRAINER_CHARLES] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("CHARLES"),
        .monSet = (const u16[]){FRONTIER_MONS_GUITARIST_3A}
    },
    [FRONTIER_TRAINER_RAYMOND] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("RAYMOND"),
        .monSet = (const u16[]){FRONTIER_MONS_GUITARIST_3B}
    },
    [FRONTIER_TRAINER_DIRK] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("DIRK"),
        .monSet = (const u16[]){FRONTIER_MONS_BIRD_KEEPER_3}
    },
    [FRONTIER_TRAINER_HAROLD] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("HAROLD"),
        .monSet = (const u16[]){FRONTIER_MONS_BIRD_KEEPER_3}
    },
    [FRONTIER_TRAINER_OMAR] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("OMAR"),
        .monSet = (const u16[]){FRONTIER_MONS_SAILOR_3}
    },
    [FRONTIER_TRAINER_PETER] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("PETER"),
        .monSet = (const u16[]){FRONTIER_MONS_SAILOR_3}
    },
    [FRONTIER_TRAINER_DEV] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("DEV"),
        .monSet = (const u16[]){FRONTIER_MONS_HIKER_3}
    },
    [FRONTIER_TRAINER_COREY] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("COREY"),
        .monSet = (const u16[]){FRONTIER_MONS_HIKER_3}
    },
    [FRONTIER_TRAINER_ANDRE] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("ANDRE"),
        .monSet = (const u16[]){FRONTIER_MONS_KINDLER_3}
    },
    [FRONTIER_TRAINER_FERRIS] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("FERRIS"),
        .monSet = (const u16[]){FRONTIER_MONS_KINDLER_3}
    },
    [FRONTIER_TRAINER_ALIVIA] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("ALIVIA"),
        .monSet = (const u16[]){FRONTIER_MONS_PARASOL_LADY_3}
    },
    [FRONTIER_TRAINER_PAIGE] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("PAIGE"),
        .monSet = (const u16[]){FRONTIER_MONS_PARASOL_LADY_3}
    },
    [FRONTIER_TRAINER_ANYA] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("ANYA"),
        .monSet = (const u16[]){FRONTIER_MONS_EEVEELUTIONS}
    },
    [FRONTIER_TRAINER_DAWN] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("DAWN"),
        .monSet = (const u16[]){FRONTIER_MONS_BEAUTY_2}
    },
    [FRONTIER_TRAINER_ABBY] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("ABBY"),
        .monSet = (const u16[]){FRONTIER_MONS_AROMA_LADY_3}
    },
    [FRONTIER_TRAINER_GRETEL] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("GRETEL"),
        .monSet = (const u16[]){FRONTIER_MONS_AROMA_LADY_3}
    },
    [FRONTIER_TRAINER_BROCK] = {
        .facilityClass = FACILITY_CLASS_LEADER_BROCK,
        .trainerName = _("BROCK"),
        .monSet = (const u16[]){FRONTIER_MONS_BROCK}
    },
    [FRONTIER_TRAINER_MISTY] = {
        .facilityClass = FACILITY_CLASS_LEADER_MISTY,
        .trainerName = _("MISTY"),
        .monSet = (const u16[]){FRONTIER_MONS_MISTY}
    },
    [FRONTIER_TRAINER_LT_SURGE] = {
        .facilityClass = FACILITY_CLASS_LEADER_LT_SURGE,
        .trainerName = _("SURGE"),
        .monSet = (const u16[]){FRONTIER_MONS_LT_SURGE}
    },
    [FRONTIER_TRAINER_ERIKA] = {
        .facilityClass = FACILITY_CLASS_LEADER_ERIKA,
        .trainerName = _("ERIKA"),
        .monSet = (const u16[]){FRONTIER_MONS_ERIKA}
    },
    [FRONTIER_TRAINER_KOGA] = {
        .facilityClass = FACILITY_CLASS_LEADER_KOGA,
        .trainerName = _("KOGA"),
        .monSet = (const u16[]){FRONTIER_MONS_KOGA}
    },
    [FRONTIER_TRAINER_SABRINA] = {
        .facilityClass = FACILITY_CLASS_LEADER_SABRINA,
        .trainerName = _("SABRINA"),
        .monSet = (const u16[]){FRONTIER_MONS_SABRINA}
    },
    [FRONTIER_TRAINER_ROXANNE] = {
        .facilityClass = FACILITY_CLASS_LEADER_ROXANNE,
        .trainerName = _("ROXANNE"),
        .monSet = (const u16[]){FRONTIER_MONS_ROXANNE}
    },
    [FRONTIER_TRAINER_BRAWLY] = {
        .facilityClass = FACILITY_CLASS_LEADER_BRAWLY,
        .trainerName = _("BRAWLY"),
        .monSet = (const u16[]){FRONTIER_MONS_BRAWLY}
    },
    [FRONTIER_TRAINER_WATTSON] = {
        .facilityClass = FACILITY_CLASS_LEADER_WATTSON,
        .trainerName = _("WATTSON"),
        .monSet = (const u16[]){FRONTIER_MONS_WATTSON}
    },
    [FRONTIER_TRAINER_FLANNERY] = {
        .facilityClass = FACILITY_CLASS_LEADER_FLANNERY,
        .trainerName = _("FLANERY"),
        .monSet = (const u16[]){FRONTIER_MONS_FLANNERY}
    },
    [FRONTIER_TRAINER_NORMAN] = {
        .facilityClass = FACILITY_CLASS_LEADER_NORMAN,
        .trainerName = _("NORMAN"),
        .monSet = (const u16[]){FRONTIER_MONS_NORMAN}
    },
    [FRONTIER_TRAINER_WINONA] = {
        .facilityClass = FACILITY_CLASS_LEADER_WINONA,
        .trainerName = _("WINONA"),
        .monSet = (const u16[]){FRONTIER_MONS_WINONA}
    },
    [FRONTIER_TRAINER_JUAN] = {
        .facilityClass = FACILITY_CLASS_LEADER_JUAN,
        .trainerName = _("JUAN"),
        .monSet = (const u16[]){FRONTIER_MONS_JUAN}
    },
    [FRONTIER_TRAINER_LORELEI] = {
        .facilityClass = FACILITY_CLASS_LEADER_LORELEI,
        .trainerName = _("LORELEI"),
        .monSet = (const u16[]){FRONTIER_MONS_LORELEI}
    },
    [FRONTIER_TRAINER_BRUNO] = {
        .facilityClass = FACILITY_CLASS_LEADER_BRUNO,
        .trainerName = _("BRUNO"),
        .monSet = (const u16[]){FRONTIER_MONS_BRUNO}
    },
    [FRONTIER_TRAINER_AGATHA] = {
        .facilityClass = FACILITY_CLASS_LEADER_AGATHA,
        .trainerName = _("AGATHA"),
        .monSet = (const u16[]){FRONTIER_MONS_AGATHA}
    },
    [FRONTIER_TRAINER_LANCE] = {
        .facilityClass = FACILITY_CLASS_LEADER_LANCE,
        .trainerName = _("LANCE"),
        .monSet = (const u16[]){FRONTIER_MONS_LANCE}
    },
    [FRONTIER_TRAINER_ROARK] = {
        .facilityClass = FACILITY_CLASS_LEADER_ROARK,
        .trainerName = _("ROARK"),
        .monSet = (const u16[]){FRONTIER_MONS_ROARK}
    },
    [FRONTIER_TRAINER_GARDENIA] = {
        .facilityClass = FACILITY_CLASS_LEADER_GARDENIA,
        .trainerName = _("GARDENA"),
        .monSet = (const u16[]){FRONTIER_MONS_GARDENIA}
    },
    [FRONTIER_TRAINER_MAYLENE] = {
        .facilityClass = FACILITY_CLASS_LEADER_MAYLENE,
        .trainerName = _("MAYLENE"),
        .monSet = (const u16[]){FRONTIER_MONS_MAYLENE}
    },
    [FRONTIER_TRAINER_CRASHER_WAKE] = {
        .facilityClass = FACILITY_CLASS_LEADER_CRASHER_WAKE,
        .trainerName = _("C. WAKE"),
        .monSet = (const u16[]){FRONTIER_MONS_CRASHER_WAKE}
    },
    [FRONTIER_TRAINER_FANTINA] = {
        .facilityClass = FACILITY_CLASS_LEADER_FANTINA,
        .trainerName = _("FANTINA"),
        .monSet = (const u16[]){FRONTIER_MONS_FANTINA}
    },
    [FRONTIER_TRAINER_BYRON] = {
        .facilityClass = FACILITY_CLASS_LEADER_BYRON,
        .trainerName = _("BYRON"),
        .monSet = (const u16[]){FRONTIER_MONS_BYRON}
    },
    [FRONTIER_TRAINER_CANDICE] = {
        .facilityClass = FACILITY_CLASS_LEADER_CANDICE,
        .trainerName = _("CANDICE"),
        .monSet = (const u16[]){FRONTIER_MONS_CANDICE}
    },
    [FRONTIER_TRAINER_VOLKNER] = {
        .facilityClass = FACILITY_CLASS_LEADER_VOLKNER,
        .trainerName = _("VOLKNER"),
        .monSet = (const u16[]){FRONTIER_MONS_VOLKNER}
    }
};
