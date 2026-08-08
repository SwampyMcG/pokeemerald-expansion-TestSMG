const struct TrainerMon gBattleFrontierMons[NUM_FRONTIER_MONS] =
{
    [FRONTIER_MON_SUNKERN] = {
        .species = SPECIES_SUNKERN,
        .moves = {MOVE_MEGA_DRAIN, MOVE_HELPING_HAND, MOVE_SUNNY_DAY, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BUNEARY] = {
        .species = SPECIES_BUNEARY,
        .moves = {MOVE_BOUNCE, MOVE_QUICK_ATTACK, MOVE_ENDURE, MOVE_TACKLE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CATERPIE] = {
        .species = SPECIES_CATERPIE,
        .moves = {MOVE_TACKLE, MOVE_STRING_SHOT, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_JOLTIK] = {
        .species = SPECIES_JOLTIK,
        .moves = {MOVE_STRING_SHOT, MOVE_BUG_BITE, MOVE_THUNDER_SHOCK, MOVE_ELECTROWEB},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WURMPLE] = {
        .species = SPECIES_WURMPLE,
        .moves = {MOVE_TACKLE, MOVE_STRING_SHOT, MOVE_POISON_STING, MOVE_NONE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GOTHITA] = {
        .species = SPECIES_GOTHITA,
        .moves = {MOVE_CONFUSION, MOVE_PSYBEAM, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAGIKARP] = {
        .species = SPECIES_MAGIKARP,
        .moves = {MOVE_FLAIL, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WISHIWASHI] = {
        .species = SPECIES_WISHIWASHI,
        .moves = {MOVE_WATER_GUN, MOVE_TACKLE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_METAPOD] = {
        .species = SPECIES_METAPOD,
        .moves = {MOVE_HARDEN, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_BASHFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BLIPBUG] = {
        .species = SPECIES_BLIPBUG,
        .moves = {MOVE_STRUGGLE_BUG, MOVE_TACKLE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BASHFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PICHU] = {
        .species = SPECIES_PICHU,
        .moves = {MOVE_SWEET_KISS, MOVE_THUNDER_WAVE, MOVE_ATTRACT, MOVE_SHOCK_WAVE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RASH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ROLYCOLY] = {
        .species = SPECIES_ROLYCOLY,
        .moves = {MOVE_ROLLOUT, MOVE_DEFENSE_CURL, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CASCOON] = {
        .species = SPECIES_CASCOON,
        .moves = {MOVE_HARDEN, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_BASHFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FIDOUGH] = {
        .species = SPECIES_FIDOUGH,
        .moves = {MOVE_BITE, MOVE_TAIL_WHIP, MOVE_GROWL, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WOOPER] = {
        .species = SPECIES_WOOPER,
        .moves = {MOVE_YAWN, MOVE_DIG, MOVE_WATER_PULSE, MOVE_RAIN_DANCE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RIOLU] = {
        .species = SPECIES_RIOLU,
        .moves = {MOVE_COUNTER, MOVE_QUICK_ATTACK, MOVE_ENDURE, MOVE_BULK_UP},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SENTRET] = {
        .species = SPECIES_SENTRET,
        .moves = {MOVE_QUICK_ATTACK, MOVE_FOLLOW_ME, MOVE_HELPING_HAND, MOVE_ASSIST},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TANDEMAUS] = {
        .species = SPECIES_TANDEMAUS,
        .moves = {MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_GROWL, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SEEDOT] = {
        .species = SPECIES_SEEDOT,
        .moves = {MOVE_BULLET_SEED, MOVE_BIDE, MOVE_DEFENSE_CURL, MOVE_ROLLOUT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DEWPIDER] = {
        .species = SPECIES_DEWPIDER,
        .moves = {MOVE_BUBBLE, MOVE_BUG_BITE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_POOCHYENA] = {
        .species = SPECIES_POOCHYENA,
        .moves = {MOVE_CRUNCH, MOVE_SWAGGER, MOVE_ROAR, MOVE_SAND_ATTACK},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DREEPY] = {
        .species = SPECIES_DREEPY,
        .moves = {MOVE_ASTONISH, MOVE_DRAGON_BREATH, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAKUHITA] = {
        .species = SPECIES_MAKUHITA,
        .moves = {MOVE_FAKE_OUT, MOVE_SEISMIC_TOSS, MOVE_DETECT, MOVE_WHIRLWIND},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ROOKIDEE] = {
        .species = SPECIES_ROOKIDEE,
        .moves = {MOVE_PECK, MOVE_QUICK_ATTACK, MOVE_GROWL, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ZIGZAGOON] = {
        .species = SPECIES_ZIGZAGOON,
        .moves = {MOVE_HEADBUTT, MOVE_PIN_MISSILE, MOVE_SWIFT, MOVE_SAND_ATTACK},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NACLI] = {
        .species = SPECIES_NACLI,
        .moves = {MOVE_ROCK_THROW, MOVE_HARDEN, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TOGEPI] = {
        .species = SPECIES_TOGEPI,
        .moves = {MOVE_RETURN, MOVE_YAWN, MOVE_WISH, MOVE_SWEET_KISS},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TAROUNTULA] = {
        .species = SPECIES_TAROUNTULA,
        .moves = {MOVE_STRING_SHOT, MOVE_BITE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_BRAVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MARILL] = {
        .species = SPECIES_MARILL,
        .moves = {MOVE_WATER_PULSE, MOVE_RAIN_DANCE, MOVE_LIGHT_SCREEN, MOVE_RETURN},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_GENTLE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SMOLIV] = {
        .species = SPECIES_SMOLIV,
        .moves = {MOVE_GROWTH, MOVE_ABSORB, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SLUGMA] = {
        .species = SPECIES_SLUGMA,
        .moves = {MOVE_EMBER, MOVE_ROCK_SLIDE, MOVE_YAWN, MOVE_BODY_SLAM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_SASSY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SNOM] = {
        .species = SPECIES_SNOM,
        .moves = {MOVE_POWDER_SNOW, MOVE_STRING_SHOT, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_BASHFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SMEARGLE] = {
        .species = SPECIES_SMEARGLE,
        .moves = {MOVE_EXTREME_SPEED, MOVE_FAKE_OUT, MOVE_QUICK_ATTACK, MOVE_MACH_PUNCH},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WATTREL] = {
        .species = SPECIES_WATTREL,
        .moves = {MOVE_QUICK_ATTACK, MOVE_THUNDER_SHOCK, MOVE_GROWL, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RATTATA] = {
        .species = SPECIES_RATTATA,
        .moves = {MOVE_HYPER_FANG, MOVE_PURSUIT, MOVE_QUICK_ATTACK, MOVE_SWAGGER},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_INDEEDEE] = {
        .species = SPECIES_INDEEDEE,
        .moves = {MOVE_PSYBEAM, MOVE_HELPING_HAND, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SKITTY] = {
        .species = SPECIES_SKITTY,
        .moves = {MOVE_SING, MOVE_ATTRACT, MOVE_CHARM, MOVE_DOUBLE_SLAP},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PIKIPEK] = {
        .species = SPECIES_PIKIPEK,
        .moves = {MOVE_PECK, MOVE_QUICK_ATTACK, MOVE_ROCK_SMASH, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HOOTHOOT] = {
        .species = SPECIES_HOOTHOOT,
        .moves = {MOVE_CONFUSION, MOVE_HYPNOSIS, MOVE_SUPERSONIC, MOVE_REFLECT},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WIGLETT] = {
        .species = SPECIES_WIGLETT,
        .moves = {MOVE_MUD_SLAP, MOVE_WATER_GUN, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LEDYBA] = {
        .species = SPECIES_LEDYBA,
        .moves = {MOVE_PSYBEAM, MOVE_AGILITY, MOVE_BATON_PASS, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_BASHFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GRUBBIN] = {
        .species = SPECIES_GRUBBIN,
        .moves = {MOVE_STRING_SHOT, MOVE_BUG_BITE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_BRAVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SURSKIT] = {
        .species = SPECIES_SURSKIT,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_RAIN_DANCE, MOVE_SWEET_SCENT, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FLABEBE] = {
        .species = SPECIES_FLABEBE,
        .moves = {MOVE_VINE_WHIP, MOVE_FAIRY_WIND, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TAILLOW] = {
        .species = SPECIES_TAILLOW,
        .moves = {MOVE_FLY, MOVE_QUICK_ATTACK, MOVE_ENDEAVOR, MOVE_FOCUS_ENERGY},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 170, 0, 0),
        .nature = NATURE_GENTLE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARROKUDA] = {
        .species = SPECIES_ARROKUDA,
        .moves = {MOVE_PECK, MOVE_WATER_GUN, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NIDORAN_M] = {
        .species = SPECIES_NIDORAN_M,
        .moves = {MOVE_DOUBLE_KICK, MOVE_POISON_STING, MOVE_DISABLE, MOVE_HELPING_HAND},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LECHONK] = {
        .species = SPECIES_LECHONK,
        .moves = {MOVE_TACKLE, MOVE_BITE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_BRAVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KIRLIA] = {
        .species = SPECIES_KIRLIA,
        .moves = {MOVE_CONFUSION, MOVE_WILL_O_WISP, MOVE_FUTURE_SIGHT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PAWMI] = {
        .species = SPECIES_PAWMI,
        .moves = {MOVE_THUNDER_SHOCK, MOVE_QUICK_ATTACK, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MEDITITE] = {
        .species = SPECIES_MEDITITE,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_MEDITATE, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_NAUGHTY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NYMBLE] = {
        .species = SPECIES_NYMBLE,
        .moves = {MOVE_TACKLE, MOVE_LEER, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_BRAVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PARAS] = {
        .species = SPECIES_PARAS,
        .moves = {MOVE_SPORE, MOVE_LEECH_LIFE, MOVE_SLASH, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SHROODLE] = {
        .species = SPECIES_SHROODLE,
        .moves = {MOVE_BITE, MOVE_SCRATCH, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DITTO] = {
        .species = SPECIES_DITTO,
        .moves = {MOVE_TRANSFORM, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_METAL_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TADBULB] = {
        .species = SPECIES_TADBULB,
        .moves = {MOVE_THUNDER_SHOCK, MOVE_CHARGE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MEOWTH] = {
        .species = SPECIES_MEOWTH,
        .moves = {MOVE_SLASH, MOVE_BITE, MOVE_SCREECH, MOVE_FAKE_OUT},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CAPSAKID] = {
        .species = SPECIES_CAPSAKID,
        .moves = {MOVE_ABSORB, MOVE_LEER, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TRAPINCH] = {
        .species = SPECIES_TRAPINCH,
        .moves = {MOVE_TOXIC, MOVE_DIG, MOVE_SANDSTORM, MOVE_SAND_ATTACK},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_SERIOUS,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WOOLOO] = {
        .species = SPECIES_WOOLOO,
        .moves = {MOVE_TACKLE, MOVE_DEFENSE_CURL, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HORSEA] = {
        .species = SPECIES_HORSEA,
        .moves = {MOVE_WATER_GUN, MOVE_AGILITY, MOVE_ICY_WIND, MOVE_TWISTER},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FOONGUS] = {
        .species = SPECIES_FOONGUS,
        .moves = {MOVE_ABSORB, MOVE_POISON_POWDER, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SHUPPET] = {
        .species = SPECIES_SHUPPET,
        .moves = {MOVE_WILL_O_WISP, MOVE_NIGHT_SHADE, MOVE_GRUDGE, MOVE_KNOCK_OFF},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RASH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SINISTEA] = {
        .species = SPECIES_SINISTEA,
        .moves = {MOVE_ASTONISH, MOVE_HEX, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ELECTRIKE] = {
        .species = SPECIES_ELECTRIKE,
        .moves = {MOVE_SPARK, MOVE_THUNDER_WAVE, MOVE_ROAR, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FENNEKIN] = {
        .species = SPECIES_FENNEKIN,
        .moves = {MOVE_EMBER, MOVE_HOWL, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PIKACHU] = {
        .species = SPECIES_PIKACHU,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_THUNDER_WAVE, MOVE_DOUBLE_TEAM, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_LIGHT_BALL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SANDILE] = {
        .species = SPECIES_SANDILE,
        .moves = {MOVE_BITE, MOVE_SAND_TOMB, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_POLIWAG] = {
        .species = SPECIES_POLIWAG,
        .moves = {MOVE_HYPNOSIS, MOVE_ICY_WIND, MOVE_WATER_GUN, MOVE_RAIN_DANCE},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GOSSIFLEUR] = {
        .species = SPECIES_GOSSIFLEUR,
        .moves = {MOVE_ABSORB, MOVE_STUN_SPORE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GEODUDE] = {
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_BLAST, MOVE_STRENGTH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_BRAVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DRATINI] = {
        .species = SPECIES_DRATINI,
        .moves = {MOVE_OUTRAGE, MOVE_THUNDER_WAVE, MOVE_SUPERSONIC, MOVE_WATER_PULSE},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SNUBBULL] = {
        .species = SPECIES_SNUBBULL,
        .moves = {MOVE_BITE, MOVE_CHARM, MOVE_SWAGGER, MOVE_SCARY_FACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CLAUNCHER] = {
        .species = SPECIES_CLAUNCHER,
        .moves = {MOVE_WATER_GUN, MOVE_BUBBLE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LARVITAR] = {
        .species = SPECIES_LARVITAR,
        .moves = {MOVE_THRASH, MOVE_ROCK_SLIDE, MOVE_DIG, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_NAUGHTY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SILICOBRA] = {
        .species = SPECIES_SILICOBRA,
        .moves = {MOVE_SAND_TOMB, MOVE_GLARE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SNORUNT] = {
        .species = SPECIES_SNORUNT,
        .moves = {MOVE_ICY_WIND, MOVE_HEADBUTT, MOVE_LEER, MOVE_BITE},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_BRAVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BAGON] = {
        .species = SPECIES_BAGON,
        .moves = {MOVE_DRAGON_BREATH, MOVE_HEADBUTT, MOVE_BRICK_BREAK, MOVE_SCARY_FACE},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_NAUGHTY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BELDUM] = {
        .species = SPECIES_BELDUM,
        .moves = {MOVE_TAKE_DOWN, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HATENNA] = {
        .species = SPECIES_HATENNA,
        .moves = {MOVE_CONFUSION, MOVE_DISARMING_VOICE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VENONAT] = {
        .species = SPECIES_VENONAT,
        .moves = {MOVE_PSYBEAM, MOVE_SUPERSONIC, MOVE_STUN_SPORE, MOVE_SKILL_SWAP},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CRABRAWLER] = {
        .species = SPECIES_CRABRAWLER,
        .moves = {MOVE_ROCK_SMASH, MOVE_LEER, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MACHOP] = {
        .species = SPECIES_MACHOP,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_REVENGE, MOVE_ROCK_TOMB, MOVE_SCARY_FACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHEWTLE] = {
        .species = SPECIES_CHEWTLE,
        .moves = {MOVE_BITE, MOVE_WATER_GUN, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SMOOCHUM] = {
        .species = SPECIES_SMOOCHUM,
        .moves = {MOVE_SWEET_KISS, MOVE_SING, MOVE_MUD_SLAP, MOVE_FAKE_OUT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SIZZLIPEDE] = {
        .species = SPECIES_SIZZLIPEDE,
        .moves = {MOVE_EMBER, MOVE_BITE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_BRAVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CARVANHA] = {
        .species = SPECIES_CARVANHA,
        .moves = {MOVE_BITE, MOVE_SCREECH, MOVE_SCARY_FACE, MOVE_SWAGGER},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CLOBBOPUS] = {
        .species = SPECIES_CLOBBOPUS,
        .moves = {MOVE_ROCK_SMASH, MOVE_BITE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHARMANDER] = {
        .species = SPECIES_CHARMANDER,
        .moves = {MOVE_FIRE_SPIN, MOVE_METAL_CLAW, MOVE_SMOKESCREEN, MOVE_SCARY_FACE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CYNDAQUIL] = {
        .species = SPECIES_CYNDAQUIL,
        .moves = {MOVE_EMBER, MOVE_SWIFT, MOVE_QUICK_ATTACK, MOVE_SMOKESCREEN},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ABRA] = {
        .species = SPECIES_ABRA,
        .moves = {MOVE_MIMIC, MOVE_METRONOME, MOVE_FLASH, MOVE_SEISMIC_TOSS},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_LONELY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SQUAWKABILLY] = {
        .species = SPECIES_SQUAWKABILLY,
        .moves = {MOVE_PECK, MOVE_QUICK_ATTACK, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GASTLY] = {
        .species = SPECIES_GASTLY,
        .moves = {MOVE_DREAM_EATER, MOVE_HYPNOSIS, MOVE_NIGHT_SHADE, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_LONELY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FLITTLE] = {
        .species = SPECIES_FLITTLE,
        .moves = {MOVE_CONFUSION, MOVE_GROWL, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TREECKO] = {
        .species = SPECIES_TREECKO,
        .moves = {MOVE_BULLET_SEED, MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_LONELY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TORCHIC] = {
        .species = SPECIES_TORCHIC,
        .moves = {MOVE_FIRE_SPIN, MOVE_QUICK_ATTACK, MOVE_SAND_ATTACK, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_LONELY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MUDKIP] = {
        .species = SPECIES_MUDKIP,
        .moves = {MOVE_WHIRLPOOL, MOVE_ENDEAVOR, MOVE_MUD_SPORT, MOVE_MUD_SLAP},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SQUIRTLE] = {
        .species = SPECIES_SQUIRTLE,
        .moves = {MOVE_WATER_PULSE, MOVE_BITE, MOVE_WITHDRAW, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TOTODILE] = {
        .species = SPECIES_TOTODILE,
        .moves = {MOVE_SLASH, MOVE_WATER_PULSE, MOVE_SCREECH, MOVE_ICY_WIND},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BRAMBLIN] = {
        .species = SPECIES_BRAMBLIN,
        .moves = {MOVE_ASTONISH, MOVE_TACKLE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BULBASAUR] = {
        .species = SPECIES_BULBASAUR,
        .moves = {MOVE_RAZOR_LEAF, MOVE_SWEET_SCENT, MOVE_SLEEP_POWDER, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHIKORITA] = {
        .species = SPECIES_CHIKORITA,
        .moves = {MOVE_SECRET_POWER, MOVE_BULLET_SEED, MOVE_MUD_SLAP, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ODDISH] = {
        .species = SPECIES_ODDISH,
        .moves = {MOVE_ACID, MOVE_STUN_SPORE, MOVE_SWEET_SCENT, MOVE_MOONLIGHT},
        .heldItem = ITEM_PECHA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SHINX] = {
        .species = SPECIES_SHINX,
        .moves = {MOVE_SPARK, MOVE_LEER, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CUBONE] = {
        .species = SPECIES_CUBONE,
        .moves = {MOVE_BONE_CLUB, MOVE_HEADBUTT, MOVE_BRICK_BREAK, MOVE_AERIAL_ACE},
        .heldItem = ITEM_SOFT_SAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BUIZEL] = {
        .species = SPECIES_BUIZEL,
        .moves = {MOVE_WATER_GUN, MOVE_QUICK_ATTACK, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NATU] = {
        .species = SPECIES_NATU,
        .moves = {MOVE_NIGHT_SHADE, MOVE_FUTURE_SIGHT, MOVE_CONFUSE_RAY, MOVE_FLASH},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MILCERY] = {
        .species = SPECIES_MILCERY,
        .moves = {MOVE_SWEET_KISS, MOVE_CHARM, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAGNEMITE] = {
        .species = SPECIES_MAGNEMITE,
        .moves = {MOVE_SHOCK_WAVE, MOVE_SUPERSONIC, MOVE_METAL_SOUND, MOVE_REFLECT},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_GENTLE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BERGMITE] = {
        .species = SPECIES_BERGMITE,
        .moves = {MOVE_ICY_WIND, MOVE_HARDEN, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SAMUROTT_HISUI] = {
        .species = SPECIES_SAMUROTT_HISUI,
        .moves = {MOVE_CEASELESS_EDGE, MOVE_AQUA_JET, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_APPLETUN] = {
        .species = SPECIES_APPLETUN,
        .moves = {MOVE_DRAGON_PULSE, MOVE_LEECH_SEED, MOVE_APPLE_ACID, MOVE_WITHDRAW},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 252, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_EXEGGUTOR_A] = {
        .species = SPECIES_EXEGGUTOR_ALOLA,
        .moves = {MOVE_DRACO_METEOR, MOVE_STUN_SPORE, MOVE_GIGA_DRAIN, MOVE_FLAMETHROWER},
        .heldItem = ITEM_DRAGONIUM_Z,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_NAUGHTY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SYLVEON] = {
        .species = SPECIES_SYLVEON,
        .moves = {MOVE_CHARM, MOVE_ATTRACT, MOVE_FLAIL, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DECIDUEYE_HISUI] = {
        .species = SPECIES_DECIDUEYE_HISUI,
        .moves = {MOVE_TRIPLE_ARROWS, MOVE_SPIRIT_SHACKLE, MOVE_LEAF_BLADE, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ELECTRODE_H] = {
        .species = SPECIES_ELECTRODE_HISUI,
        .moves = {MOVE_VOLT_SWITCH, MOVE_GIGA_DRAIN, MOVE_FOUL_PLAY, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TYPHLOSION_HISUI] = {
        .species = SPECIES_TYPHLOSION_HISUI,
        .moves = {MOVE_INFERNAL_PARADE, MOVE_SHADOW_BALL, MOVE_EXTRASENSORY, MOVE_NASTY_PLOT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ZOROARK_HISUI] = {
        .species = SPECIES_ZOROARK_HISUI,
        .moves = {MOVE_SHADOW_BALL, MOVE_NASTY_PLOT, MOVE_FLAMETHROWER, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AMOONGUSS] = {
        .species = SPECIES_AMOONGUSS,
        .ability = ABILITY_EFFECT_SPORE,
        .moves = {MOVE_HEX, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SYNTHESIS},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARCTIBAX] = {
        .species = SPECIES_ARCTIBAX,
        .moves = {MOVE_DRAGON_RUSH, MOVE_ICICLE_CRASH, MOVE_SWORDS_DANCE, MOVE_PROTECT},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BRAVIARY_H] = {
        .species = SPECIES_BRAVIARY_HISUI,
        .moves = {MOVE_CALM_MIND, MOVE_HEAT_WAVE, MOVE_HURRICANE, MOVE_ESPER_WING},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_NAUGHTY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BRAIXEN] = {
        .species = SPECIES_BRAIXEN,
        .moves = {MOVE_PSYBEAM, MOVE_BURNING_JEALOUSY, MOVE_MAGIC_ROOM, MOVE_FLAMETHROWER},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_QUILLADIN] = {
        .species = SPECIES_QUILLADIN,
        .moves = {MOVE_WOOD_HAMMER, MOVE_DRAIN_PUNCH, MOVE_SPIKES, MOVE_SYNTHESIS},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_NEST,
    },
    [FRONTIER_MON_FROGADIER] = {
        .species = SPECIES_FROGADIER,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_U_TURN, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_DIVE,
    },
    [FRONTIER_MON_SERVINE] = {
        .species = SPECIES_SERVINE,
        .moves = {MOVE_LEAF_STORM, MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_SYNTHESIS},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_NEST,
    },
    [FRONTIER_MON_PIGNITE] = {
        .species = SPECIES_PIGNITE,
        .moves = {MOVE_SUPERPOWER, MOVE_FLARE_BLITZ, MOVE_WILD_CHARGE, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_REPEAT,
    },
    [FRONTIER_MON_DEWOTT] = {
        .species = SPECIES_DEWOTT,
        .moves = {MOVE_RAZOR_SHELL, MOVE_SACRED_SWORD, MOVE_AQUA_JET, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_DIVE,
    },
    [FRONTIER_MON_GROTLE] = {
        .species = SPECIES_GROTLE,
        .moves = {MOVE_WOOD_HAMMER, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK, MOVE_SYNTHESIS},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_NEST,
    },
    [FRONTIER_MON_MONFERNO] = {
        .species = SPECIES_MONFERNO,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_MACH_PUNCH},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_REPEAT,
    },
    [FRONTIER_MON_PRINPLUP] = {
        .species = SPECIES_PRINPLUP,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_DEFOG, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD,
        .ball = BALL_DIVE,
    },
    [FRONTIER_MON_DARTRIX] = {
        .species = SPECIES_DARTRIX,
        .moves = {MOVE_LEAF_BLADE, MOVE_BRAVE_BIRD, MOVE_ROOST, MOVE_DEFOG},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_NEST,
    },
    [FRONTIER_MON_TORRACAT] = {
        .species = SPECIES_TORRACAT,
        .moves = {MOVE_FLARE_BLITZ, MOVE_PARTING_SHOT, MOVE_WILL_O_WISP, MOVE_U_TURN},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_PREMIER,
    },
    [FRONTIER_MON_VIBRAVA] = {
        .species = SPECIES_VIBRAVA,
        .moves = {MOVE_DRAGON_BREATH, MOVE_DIG, MOVE_SCREECH, MOVE_ROCK_TOMB},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RHYHORN] = {
        .species = SPECIES_RHYHORN,
        .moves = {MOVE_ROCK_BLAST, MOVE_DIG, MOVE_SCARY_FACE, MOVE_ROAR},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BRIONNE] = {
        .species = SPECIES_BRIONNE,
        .moves = {MOVE_MOONBLAST, MOVE_SCALD, MOVE_FLIP_TURN, MOVE_PERISH_SONG},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD,
        .ball = BALL_DIVE,
    },
    [FRONTIER_MON_PIDGEOTTO] = {
        .species = SPECIES_PIDGEOTTO,
        .moves = {MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_FEATHER_DANCE, MOVE_SAND_ATTACK},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GROWLITHE] = {
        .species = SPECIES_GROWLITHE,
        .moves = {MOVE_FLAME_WHEEL, MOVE_BITE, MOVE_ROAR, MOVE_AGILITY},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FARFETCHD] = {
        .species = SPECIES_FARFETCHD,
        .moves = {MOVE_SLASH, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE, MOVE_AGILITY},
        .heldItem = ITEM_LEEK,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_OMANYTE] = {
        .species = SPECIES_OMANYTE,
        .moves = {MOVE_MUD_SHOT, MOVE_WATER_GUN, MOVE_ANCIENT_POWER, MOVE_TICKLE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KABUTO] = {
        .species = SPECIES_KABUTO,
        .moves = {MOVE_MEGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_SAND_ATTACK, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LILEEP] = {
        .species = SPECIES_LILEEP,
        .moves = {MOVE_ANCIENT_POWER, MOVE_ACID, MOVE_INGRAIN, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ANORITH] = {
        .species = SPECIES_ANORITH,
        .moves = {MOVE_METAL_CLAW, MOVE_FURY_CUTTER, MOVE_ANCIENT_POWER, MOVE_WATER_GUN},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_THWACKEY] = {
        .species = SPECIES_THWACKEY,
        .moves = {MOVE_GRASSY_GLIDE, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_FRIEND,
    },
    [FRONTIER_MON_RABOOT] = {
        .species = SPECIES_RABOOT,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_FAST,
    },
    [FRONTIER_MON_LOUDRED] = {
        .species = SPECIES_LOUDRED,
        .moves = {MOVE_STOMP, MOVE_HOWL, MOVE_ASTONISH, MOVE_SUPERSONIC},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DRIZZILE] = {
        .species = SPECIES_DRIZZILE,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_U_TURN, MOVE_MIST},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_DIVE,
    },
    [FRONTIER_MON_NIDORINA] = {
        .species = SPECIES_NIDORINA,
        .moves = {MOVE_DOUBLE_KICK, MOVE_BITE, MOVE_AERIAL_ACE, MOVE_FLATTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NIDORINO] = {
        .species = SPECIES_NIDORINO,
        .moves = {MOVE_DOUBLE_KICK, MOVE_WATER_PULSE, MOVE_MUD_SLAP, MOVE_FLATTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FLAAFFY] = {
        .species = SPECIES_FLAAFFY,
        .moves = {MOVE_SHOCK_WAVE, MOVE_THUNDER_WAVE, MOVE_COTTON_SPORE, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_MAGNET,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MILD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FLORAGATO] = {
        .species = SPECIES_FLORAGATO,
        .moves = {MOVE_FLOWER_TRICK, MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_NEST,
    },
    [FRONTIER_MON_CROCALOR] = {
        .species = SPECIES_CROCALOR,
        .moves = {MOVE_TORCH_SONG, MOVE_WILL_O_WISP, MOVE_SLACK_OFF, MOVE_ROAR},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD,
        .ball = BALL_REPEAT,
    },
    [FRONTIER_MON_CORSOLA] = {
        .species = SPECIES_CORSOLA,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_MIRROR_COAT, MOVE_ATTRACT, MOVE_ANCIENT_POWER},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAWILE] = {
        .species = SPECIES_MAWILE,
        .moves = {MOVE_CRUNCH, MOVE_FAKE_TEARS, MOVE_IRON_DEFENSE, MOVE_BATON_PASS},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BUTTERFREE] = {
        .species = SPECIES_BUTTERFREE,
        .moves = {MOVE_SILVER_WIND, MOVE_PSYBEAM, MOVE_TOXIC, MOVE_WHIRLWIND},
        .heldItem = ITEM_PECHA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BEEDRILL] = {
        .species = SPECIES_BEEDRILL,
        .moves = {MOVE_TWINEEDLE, MOVE_PURSUIT, MOVE_ENDEAVOR, MOVE_AGILITY},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_NAUGHTY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_POLIWHIRL] = {
        .species = SPECIES_POLIWHIRL,
        .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_SLAP, MOVE_ICY_WIND, MOVE_RAIN_DANCE},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ONIX] = {
        .species = SPECIES_ONIX,
        .moves = {MOVE_ROCK_SLIDE, MOVE_BIND, MOVE_DRAGON_BREATH, MOVE_SANDSTORM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BEAUTIFLY] = {
        .species = SPECIES_BEAUTIFLY,
        .moves = {MOVE_SILVER_WIND, MOVE_MEGA_DRAIN, MOVE_ATTRACT, MOVE_WHIRLWIND},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DUSTOX] = {
        .species = SPECIES_DUSTOX,
        .moves = {MOVE_SILVER_WIND, MOVE_TOXIC, MOVE_PSYBEAM, MOVE_WHIRLWIND},
        .heldItem = ITEM_SILVER_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LEDIAN] = {
        .species = SPECIES_LEDIAN,
        .moves = {MOVE_COMET_PUNCH, MOVE_BATON_PASS, MOVE_SWORDS_DANCE, MOVE_AGILITY},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_BASHFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_QUAXWELL] = {
        .species = SPECIES_QUAXWELL,
        .moves = {MOVE_AQUA_STEP, MOVE_CLOSE_COMBAT, MOVE_RAPID_SPIN, MOVE_ROOST},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_DIVE,
    },
    [FRONTIER_MON_SLOWKING_GALAR] = {
        .species = SPECIES_SLOWKING_GALAR,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_PSYSHOCK, MOVE_FUTURE_SIGHT, MOVE_SLACK_OFF},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GABITE] = {
        .species = SPECIES_GABITE,
        .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_STEALTH_ROCK, MOVE_TOXIC},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_DUSK,
    },
    [FRONTIER_MON_SABLEYE_1] = {
        .species = SPECIES_SABLEYE,
        .moves = {MOVE_FEINT_ATTACK, MOVE_CONFUSE_RAY, MOVE_KNOCK_OFF, MOVE_FAKE_OUT},
        .heldItem = ITEM_BLACK_GLASSES,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_LONELY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LICKITUNG_1] = {
        .species = SPECIES_LICKITUNG,
        .moves = {MOVE_SLAM, MOVE_BRICK_BREAK, MOVE_LICK, MOVE_MUD_SLAP},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WEEPINBELL_1] = {
        .species = SPECIES_WEEPINBELL,
        .moves = {MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_WRAP, MOVE_SWEET_SCENT},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GRAVELER_1] = {
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_DEFENSE_CURL, MOVE_BRICK_BREAK},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GLOOM_1] = {
        .species = SPECIES_GLOOM,
        .moves = {MOVE_PETAL_DANCE, MOVE_ACID, MOVE_STUN_SPORE, MOVE_MOONLIGHT},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PORYGON_1] = {
        .species = SPECIES_PORYGON,
        .moves = {MOVE_PSYBEAM, MOVE_ICY_WIND, MOVE_RECYCLE, MOVE_AGILITY},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KADABRA_1] = {
        .species = SPECIES_KADABRA,
        .moves = {MOVE_CONFUSION, MOVE_ROLE_PLAY, MOVE_FUTURE_SIGHT, MOVE_DISABLE},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WAILMER_1] = {
        .species = SPECIES_WAILMER,
        .moves = {MOVE_WHIRLPOOL, MOVE_ROAR, MOVE_DEFENSE_CURL, MOVE_ROLLOUT},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ROSELIA_1] = {
        .species = SPECIES_ROSELIA,
        .moves = {MOVE_MAGICAL_LEAF, MOVE_TOXIC, MOVE_GRASS_WHISTLE, MOVE_COTTON_SPORE},
        .heldItem = ITEM_PECHA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VOLBEAT_1] = {
        .species = SPECIES_VOLBEAT,
        .moves = {MOVE_SILVER_WIND, MOVE_CONFUSE_RAY, MOVE_QUICK_ATTACK, MOVE_HELPING_HAND},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ILLUMISE_1] = {
        .species = SPECIES_ILLUMISE,
        .moves = {MOVE_SILVER_WIND, MOVE_WISH, MOVE_QUICK_ATTACK, MOVE_HELPING_HAND},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_IVYSAUR_1] = {
        .species = SPECIES_IVYSAUR,
        .moves = {MOVE_PETAL_DANCE, MOVE_GROWTH, MOVE_SWEET_SCENT, MOVE_FURY_CUTTER},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_GENTLE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHARMELEON_1] = {
        .species = SPECIES_CHARMELEON,
        .moves = {MOVE_SLASH, MOVE_FIRE_SPIN, MOVE_SWORDS_DANCE, MOVE_AERIAL_ACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_NAUGHTY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WARTORTLE_1] = {
        .species = SPECIES_WARTORTLE,
        .moves = {MOVE_WATER_PULSE, MOVE_BITE, MOVE_MUD_SLAP, MOVE_YAWN},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PARASECT_1] = {
        .species = SPECIES_PARASECT,
        .moves = {MOVE_SLASH, MOVE_PSYBEAM, MOVE_STUN_SPORE, MOVE_FLASH},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_RASH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MACHOKE_1] = {
        .species = SPECIES_MACHOKE,
        .moves = {MOVE_LOW_KICK, MOVE_ROCK_TOMB, MOVE_FORESIGHT, MOVE_SCARY_FACE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HAUNTER_1] = {
        .species = SPECIES_HAUNTER,
        .moves = {MOVE_SHADOW_PUNCH, MOVE_CONFUSE_RAY, MOVE_SPITE, MOVE_GRUDGE},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RASH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BAYLEEF_1] = {
        .species = SPECIES_BAYLEEF,
        .moves = {MOVE_RAZOR_LEAF, MOVE_TOXIC, MOVE_SAFEGUARD, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_QUILAVA_1] = {
        .species = SPECIES_QUILAVA,
        .moves = {MOVE_FLAME_WHEEL, MOVE_FURY_SWIPES, MOVE_SWIFT, MOVE_SMOKESCREEN},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CROCONAW_1] = {
        .species = SPECIES_CROCONAW,
        .moves = {MOVE_SLASH, MOVE_WATER_PULSE, MOVE_BITE, MOVE_SCARY_FACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TOGETIC_1] = {
        .species = SPECIES_TOGETIC,
        .moves = {MOVE_AERIAL_ACE, MOVE_MAGICAL_LEAF, MOVE_WISH, MOVE_FOLLOW_ME},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MURKROW_1] = {
        .species = SPECIES_MURKROW,
        .moves = {MOVE_FEINT_ATTACK, MOVE_FLY, MOVE_TORMENT, MOVE_TAUNT},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WOBBUFFET_1] = {
        .species = SPECIES_WOBBUFFET,
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_CHARM, MOVE_SAFEGUARD},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PLUSLE_1] = {
        .species = SPECIES_PLUSLE,
        .moves = {MOVE_SPARK, MOVE_FAKE_TEARS, MOVE_QUICK_ATTACK, MOVE_HELPING_HAND},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MINUN_1] = {
        .species = SPECIES_MINUN,
        .moves = {MOVE_SPARK, MOVE_CHARM, MOVE_ENCORE, MOVE_HELPING_HAND},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GROVYLE_1] = {
        .species = SPECIES_GROVYLE,
        .moves = {MOVE_FURY_CUTTER, MOVE_ENDEAVOR, MOVE_BRICK_BREAK, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_COMBUSKEN_1] = {
        .species = SPECIES_COMBUSKEN,
        .moves = {MOVE_EMBER, MOVE_DOUBLE_KICK, MOVE_QUICK_ATTACK, MOVE_SAND_ATTACK},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MARSHTOMP_1] = {
        .species = SPECIES_MARSHTOMP,
        .moves = {MOVE_MUD_SHOT, MOVE_WATER_GUN, MOVE_ROCK_TOMB, MOVE_MUD_SLAP},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PONYTA_1] = {
        .species = SPECIES_PONYTA,
        .moves = {MOVE_FIRE_SPIN, MOVE_BOUNCE, MOVE_QUICK_ATTACK, MOVE_TAIL_WHIP},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AZUMARILL_1] = {
        .species = SPECIES_AZUMARILL,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_FACADE, MOVE_DIG, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SUDOWOODO_1] = {
        .species = SPECIES_SUDOWOODO,
        .moves = {MOVE_ROCK_SLIDE, MOVE_FEINT_ATTACK, MOVE_SANDSTORM, MOVE_BLOCK},
        .heldItem = ITEM_HARD_STONE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAGCARGO_1] = {
        .species = SPECIES_MAGCARGO,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EMBER, MOVE_ACID_ARMOR, MOVE_SANDSTORM},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_GENTLE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PUPITAR_1] = {
        .species = SPECIES_PUPITAR,
        .moves = {MOVE_DIG, MOVE_BITE, MOVE_SCARY_FACE, MOVE_SANDSTORM},
        .heldItem = ITEM_SOFT_SAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SEALEO_1] = {
        .species = SPECIES_SEALEO,
        .moves = {MOVE_ICE_BALL, MOVE_HAIL, MOVE_SNORE, MOVE_REST},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RATICATE_1] = {
        .species = SPECIES_RATICATE,
        .moves = {MOVE_ENDEAVOR, MOVE_PURSUIT, MOVE_SCARY_FACE, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 170, 0, 0),
        .nature = NATURE_NAIVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MASQUERAIN_1] = {
        .species = SPECIES_MASQUERAIN,
        .moves = {MOVE_SILVER_WIND, MOVE_AERIAL_ACE, MOVE_ICY_WIND, MOVE_STUN_SPORE},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FURRET_1] = {
        .species = SPECIES_FURRET,
        .moves = {MOVE_SLAM, MOVE_PROTECT, MOVE_HELPING_HAND, MOVE_FOLLOW_ME},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_SERIOUS,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DUNSPARCE_1] = {
        .species = SPECIES_DUNSPARCE,
        .moves = {MOVE_HEADBUTT, MOVE_GLARE, MOVE_DEFENSE_CURL, MOVE_ROLLOUT},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DRAGONAIR_1] = {
        .species = SPECIES_DRAGONAIR,
        .moves = {MOVE_DRAGON_BREATH, MOVE_LEER, MOVE_WRAP, MOVE_SAFEGUARD},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MIGHTYENA_1] = {
        .species = SPECIES_MIGHTYENA,
        .moves = {MOVE_BITE, MOVE_POISON_FANG, MOVE_TAUNT, MOVE_ROAR},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LINOONE_1] = {
        .species = SPECIES_LINOONE,
        .moves = {MOVE_SECRET_POWER, MOVE_SAND_ATTACK, MOVE_COVET, MOVE_TICKLE},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CASTFORM_1] = {
        .species = SPECIES_CASTFORM_NORMAL,
        .moves = {MOVE_EMBER, MOVE_WATER_PULSE, MOVE_SHOCK_WAVE, MOVE_ICY_WIND},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_HASTY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SHELGON_1] = {
        .species = SPECIES_SHELGON,
        .moves = {MOVE_HEADBUTT, MOVE_DRAGON_BREATH, MOVE_PROTECT, MOVE_SCARY_FACE},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 0, 170),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_METANG_1] = {
        .species = SPECIES_METANG,
        .moves = {MOVE_METAL_CLAW, MOVE_CONFUSION, MOVE_PURSUIT, MOVE_SCARY_FACE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WIGGLYTUFF_1] = {
        .species = SPECIES_WIGGLYTUFF,
        .moves = {MOVE_SING, MOVE_DISABLE, MOVE_WISH, MOVE_SECRET_POWER},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SUNFLORA_1] = {
        .species = SPECIES_SUNFLORA,
        .moves = {MOVE_PETAL_DANCE, MOVE_INGRAIN, MOVE_LEECH_SEED, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHIMECHO_1] = {
        .species = SPECIES_CHIMECHO,
        .moves = {MOVE_PSYWAVE, MOVE_TAKE_DOWN, MOVE_HEAL_BELL, MOVE_SAFEGUARD},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_SASSY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GLIGAR_1] = {
        .species = SPECIES_GLIGAR,
        .moves = {MOVE_METAL_CLAW, MOVE_DIG, MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_HASTY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_QWILFISH_1] = {
        .species = SPECIES_QWILFISH,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_PIN_MISSILE, MOVE_SPIKES, MOVE_MINIMIZE},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 252),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SNEASEL_1] = {
        .species = SPECIES_SNEASEL,
        .moves = {MOVE_FEINT_ATTACK, MOVE_FAKE_OUT, MOVE_ICY_WIND, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PELIPPER_1] = {
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_WATER_PULSE, MOVE_AERIAL_ACE, MOVE_STOCKPILE, MOVE_SWALLOW},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SWELLOW_1] = {
        .species = SPECIES_SWELLOW,
        .moves = {MOVE_FLY, MOVE_ENDEAVOR, MOVE_FACADE, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LAIRON_1] = {
        .species = SPECIES_LAIRON,
        .moves = {MOVE_METAL_CLAW, MOVE_ROCK_TOMB, MOVE_IRON_DEFENSE, MOVE_PROTECT},
        .heldItem = ITEM_METAL_COAT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_SASSY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TANGELA_1] = {
        .species = SPECIES_TANGELA,
        .moves = {MOVE_MEGA_DRAIN, MOVE_SLAM, MOVE_TOXIC, MOVE_BIND},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARBOK_1] = {
        .species = SPECIES_ARBOK,
        .moves = {MOVE_POISON_FANG, MOVE_DIG, MOVE_BITE, MOVE_GLARE},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PERSIAN_1] = {
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_FAKE_OUT, MOVE_SLASH, MOVE_TORMENT, MOVE_SWAGGER},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SEADRA_1] = {
        .species = SPECIES_SEADRA,
        .moves = {MOVE_AURORA_BEAM, MOVE_SMOKESCREEN, MOVE_WATER_GUN, MOVE_RAIN_DANCE},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_SASSY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KECLEON_1] = {
        .species = SPECIES_KECLEON,
        .moves = {MOVE_SECRET_POWER, MOVE_PSYBEAM, MOVE_MAGIC_COAT, MOVE_SEISMIC_TOSS},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(170, 170, 170, 0, 0, 0),
        .nature = NATURE_NAIVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VIGOROTH_1] = {
        .species = SPECIES_VIGOROTH,
        .moves = {MOVE_SLASH, MOVE_COUNTER, MOVE_ENCORE, MOVE_UPROAR},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_LONELY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LUNATONE_1] = {
        .species = SPECIES_LUNATONE,
        .moves = {MOVE_CONFUSION, MOVE_COSMIC_POWER, MOVE_LIGHT_SCREEN, MOVE_SANDSTORM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SOLROCK_1] = {
        .species = SPECIES_SOLROCK,
        .moves = {MOVE_CONFUSION, MOVE_FIRE_SPIN, MOVE_LIGHT_SCREEN, MOVE_SANDSTORM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NOCTOWL_1] = {
        .species = SPECIES_NOCTOWL,
        .moves = {MOVE_CONFUSION, MOVE_AERIAL_ACE, MOVE_FEINT_ATTACK, MOVE_REFLECT},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SANDSLASH_1] = {
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_CRUSH_CLAW, MOVE_ROCK_SLIDE, MOVE_SWIFT, MOVE_SANDSTORM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VENOMOTH_1] = {
        .species = SPECIES_VENOMOTH,
        .moves = {MOVE_SILVER_WIND, MOVE_PSYBEAM, MOVE_SLEEP_POWDER, MOVE_SKILL_SWAP},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHANSEY_1] = {
        .species = SPECIES_CHANSEY,
        .moves = {MOVE_METRONOME, MOVE_REFRESH, MOVE_DEFENSE_CURL, MOVE_MINIMIZE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SEAKING_1] = {
        .species = SPECIES_SEAKING,
        .moves = {MOVE_WATER_PULSE, MOVE_PSYBEAM, MOVE_SWIFT, MOVE_AGILITY},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_JUMPLUFF_1] = {
        .species = SPECIES_JUMPLUFF,
        .moves = {MOVE_AERIAL_ACE, MOVE_SWAGGER, MOVE_PSYCH_UP, MOVE_SYNTHESIS},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PILOSWINE_1] = {
        .species = SPECIES_PILOSWINE,
        .moves = {MOVE_DIG, MOVE_ANCIENT_POWER, MOVE_HAIL, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_SOFT_SAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GOLBAT_1] = {
        .species = SPECIES_GOLBAT,
        .moves = {MOVE_AIR_CUTTER, MOVE_CONFUSE_RAY, MOVE_TOXIC, MOVE_STEEL_WING},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PRIMEAPE_1] = {
        .species = SPECIES_PRIMEAPE,
        .moves = {MOVE_KARATE_CHOP, MOVE_COUNTER, MOVE_SWAGGER, MOVE_SCREECH},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HITMONLEE_1] = {
        .species = SPECIES_HITMONLEE,
        .moves = {MOVE_ROLLING_KICK, MOVE_BRICK_BREAK, MOVE_FOCUS_ENERGY, MOVE_FACADE},
        .heldItem = ITEM_BLACK_BELT,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HITMONCHAN_1] = {
        .species = SPECIES_HITMONCHAN,
        .moves = {MOVE_MACH_PUNCH, MOVE_SKY_UPPERCUT, MOVE_DETECT, MOVE_COUNTER},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GIRAFARIG_1] = {
        .species = SPECIES_GIRAFARIG,
        .moves = {MOVE_PSYBEAM, MOVE_STOMP, MOVE_WISH, MOVE_SKILL_SWAP},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HITMONTOP_1] = {
        .species = SPECIES_HITMONTOP,
        .moves = {MOVE_TRIPLE_KICK, MOVE_DIG, MOVE_MACH_PUNCH, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BANETTE_1] = {
        .species = SPECIES_BANETTE,
        .moves = {MOVE_NIGHT_SHADE, MOVE_WILL_O_WISP, MOVE_SPITE, MOVE_KNOCK_OFF},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_SASSY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NINJASK_1] = {
        .species = SPECIES_NINJASK,
        .moves = {MOVE_BATON_PASS, MOVE_SWORDS_DANCE, MOVE_ENDURE, MOVE_DIG},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_MILD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SEVIPER_1] = {
        .species = SPECIES_SEVIPER,
        .moves = {MOVE_POISON_TAIL, MOVE_BITE, MOVE_GLARE, MOVE_SCREECH},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ZANGOOSE_1] = {
        .species = SPECIES_ZANGOOSE,
        .moves = {MOVE_SLASH, MOVE_DOUBLE_KICK, MOVE_ROAR, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CAMERUPT_1] = {
        .species = SPECIES_CAMERUPT,
        .moves = {MOVE_MAGNITUDE, MOVE_PROTECT, MOVE_SANDSTORM, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SHARPEDO_1] = {
        .species = SPECIES_SHARPEDO,
        .moves = {MOVE_SLASH, MOVE_BITE, MOVE_WATER_PULSE, MOVE_SCARY_FACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TROPIUS_1] = {
        .species = SPECIES_TROPIUS,
        .moves = {MOVE_MAGICAL_LEAF, MOVE_WHIRLWIND, MOVE_AERIAL_ACE, MOVE_STEEL_WING},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAGNETON_1] = {
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_SHOCK_WAVE, MOVE_SONIC_BOOM, MOVE_THUNDER_WAVE, MOVE_SUPERSONIC},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_LONELY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MANTINE_1] = {
        .species = SPECIES_MANTINE,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_AERIAL_ACE, MOVE_RAIN_DANCE, MOVE_ICY_WIND},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_STANTLER_1] = {
        .species = SPECIES_STANTLER,
        .moves = {MOVE_EXTRASENSORY, MOVE_CONFUSE_RAY, MOVE_STOMP, MOVE_SAND_ATTACK},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_GENTLE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ABSOL_1] = {
        .species = SPECIES_ABSOL,
        .moves = {MOVE_BITE, MOVE_RAZOR_WIND, MOVE_FUTURE_SIGHT, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SWALOT_1] = {
        .species = SPECIES_SWALOT,
        .moves = {MOVE_STOCKPILE, MOVE_SWALLOW, MOVE_SPIT_UP, MOVE_SLUDGE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CRAWDAUNT_1] = {
        .species = SPECIES_CRAWDAUNT,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_VISE_GRIP, MOVE_KNOCK_OFF, MOVE_PROTECT},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PIDGEOT_1] = {
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_AERIAL_ACE, MOVE_FEATHER_DANCE, MOVE_MUD_SLAP, MOVE_FEINT_ATTACK},
        .heldItem = ITEM_SHARP_BEAK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GRUMPIG_1] = {
        .species = SPECIES_GRUMPIG,
        .moves = {MOVE_PSYBEAM, MOVE_CONFUSE_RAY, MOVE_FUTURE_SIGHT, MOVE_MAGIC_COAT},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TORKOAL_1] = {
        .species = SPECIES_TORKOAL,
        .moves = {MOVE_EMBER, MOVE_FIRE_SPIN, MOVE_SMOKESCREEN, MOVE_AMNESIA},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KINGLER_1] = {
        .species = SPECIES_KINGLER,
        .moves = {MOVE_CRABHAMMER, MOVE_METAL_CLAW, MOVE_MUD_SHOT, MOVE_PROTECT},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CACTURNE_1] = {
        .species = SPECIES_CACTURNE,
        .moves = {MOVE_NEEDLE_ARM, MOVE_FEINT_ATTACK, MOVE_ACID, MOVE_MEGA_PUNCH},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_HASTY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BELLOSSOM_1] = {
        .species = SPECIES_BELLOSSOM,
        .moves = {MOVE_PETAL_DANCE, MOVE_SAFEGUARD, MOVE_SUNNY_DAY, MOVE_SYNTHESIS},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_OCTILLERY_1] = {
        .species = SPECIES_OCTILLERY,
        .moves = {MOVE_OCTAZOOKA, MOVE_AURORA_BEAM, MOVE_PSYBEAM, MOVE_ROCK_BLAST},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HUNTAIL_1] = {
        .species = SPECIES_HUNTAIL,
        .moves = {MOVE_WHIRLPOOL, MOVE_SCARY_FACE, MOVE_MUD_SLAP, MOVE_BITE},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GOREBYSS_1] = {
        .species = SPECIES_GOREBYSS,
        .moves = {MOVE_WHIRLPOOL, MOVE_AMNESIA, MOVE_ICY_WIND, MOVE_CONFUSION},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_BRAVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RELICANTH_1] = {
        .species = SPECIES_RELICANTH,
        .moves = {MOVE_ANCIENT_POWER, MOVE_WATER_PULSE, MOVE_HARDEN, MOVE_AMNESIA},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 0, 0, 170, 170),
        .nature = NATURE_SASSY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_OMASTAR_1] = {
        .species = SPECIES_OMASTAR,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_SPIKE_CANNON, MOVE_TICKLE, MOVE_ANCIENT_POWER},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KABUTOPS_1] = {
        .species = SPECIES_KABUTOPS,
        .moves = {MOVE_SLASH, MOVE_DIG, MOVE_FURY_CUTTER, MOVE_KNOCK_OFF},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_POLIWRATH_1] = {
        .species = SPECIES_POLIWRATH,
        .moves = {MOVE_SUBMISSION, MOVE_DIG, MOVE_ROCK_TOMB, MOVE_BUBBLE_BEAM},
        .heldItem = ITEM_BLACK_BELT,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SCYTHER_1] = {
        .species = SPECIES_SCYTHER,
        .moves = {MOVE_FURY_CUTTER, MOVE_AERIAL_ACE, MOVE_LIGHT_SCREEN, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PINSIR_1] = {
        .species = SPECIES_PINSIR,
        .moves = {MOVE_SUBMISSION, MOVE_FOCUS_ENERGY, MOVE_SWORDS_DANCE, MOVE_REVENGE},
        .heldItem = ITEM_BLACK_BELT,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_NAUGHTY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_POLITOED_1] = {
        .species = SPECIES_POLITOED,
        .moves = {MOVE_DIVE, MOVE_DIG, MOVE_HYPNOSIS, MOVE_SWAGGER},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CLOYSTER_1] = {
        .species = SPECIES_CLOYSTER,
        .moves = {MOVE_AURORA_BEAM, MOVE_SPIKE_CANNON, MOVE_SUPERSONIC, MOVE_PROTECT},
        .heldItem = ITEM_NEVER_MELT_ICE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_SASSY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DELCATTY_2] = {
        .species = SPECIES_DELCATTY,
        .moves = {MOVE_FAKE_TEARS, MOVE_SING, MOVE_THUNDERBOLT, MOVE_ICE_BEAM},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SABLEYE_2] = {
        .species = SPECIES_SABLEYE,
        .moves = {MOVE_SHADOW_BALL, MOVE_FEINT_ATTACK, MOVE_CONFUSE_RAY, MOVE_RECOVER},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LICKITUNG_2] = {
        .species = SPECIES_LICKITUNG,
        .moves = {MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_SHADOW_BALL, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 170, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WEEPINBELL_2] = {
        .species = SPECIES_WEEPINBELL,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_RAZOR_LEAF, MOVE_SLEEP_POWDER, MOVE_REFLECT},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GRAVELER_2] = {
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK, MOVE_COUNTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GLOOM_2] = {
        .species = SPECIES_GLOOM,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_SLUDGE_BOMB, MOVE_MOONLIGHT},
        .heldItem = ITEM_PECHA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PORYGON_2] = {
        .species = SPECIES_PORYGON,
        .moves = {MOVE_TRI_ATTACK, MOVE_PSYCHIC, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KADABRA_2] = {
        .species = SPECIES_KADABRA,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDER_WAVE, MOVE_REFLECT, MOVE_RECOVER},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WAILMER_2] = {
        .species = SPECIES_WAILMER,
        .moves = {MOVE_WATER_SPOUT, MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ROSELIA_2] = {
        .species = SPECIES_ROSELIA,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_GRASS_WHISTLE, MOVE_SYNTHESIS},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VOLBEAT_2] = {
        .species = SPECIES_VOLBEAT,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_TAIL_GLOW},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ILLUMISE_2] = {
        .species = SPECIES_ILLUMISE,
        .moves = {MOVE_SILVER_WIND, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_IVYSAUR_2] = {
        .species = SPECIES_IVYSAUR,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_LEECH_SEED},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHARMELEON_2] = {
        .species = SPECIES_CHARMELEON,
        .moves = {MOVE_FLAMETHROWER, MOVE_SLASH, MOVE_ANCIENT_POWER, MOVE_DRAGON_RAGE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WARTORTLE_2] = {
        .species = SPECIES_WARTORTLE,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RAPID_SPIN, MOVE_PROTECT},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PARASECT_2] = {
        .species = SPECIES_PARASECT,
        .moves = {MOVE_SPORE, MOVE_GIGA_DRAIN, MOVE_DIG, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MACHOKE_2] = {
        .species = SPECIES_MACHOKE,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_FORESIGHT, MOVE_SCARY_FACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HAUNTER_2] = {
        .species = SPECIES_HAUNTER,
        .moves = {MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_NIGHTMARE, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BAYLEEF_2] = {
        .species = SPECIES_BAYLEEF,
        .moves = {MOVE_GIGA_DRAIN, MOVE_BODY_SLAM, MOVE_GRASS_WHISTLE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_QUILAVA_2] = {
        .species = SPECIES_QUILAVA,
        .moves = {MOVE_FLAMETHROWER, MOVE_CRUSH_CLAW, MOVE_BODY_SLAM, MOVE_SMOKESCREEN},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CROCONAW_2] = {
        .species = SPECIES_CROCONAW,
        .moves = {MOVE_MEGA_KICK, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE, MOVE_DIG},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TOGETIC_2] = {
        .species = SPECIES_TOGETIC,
        .moves = {MOVE_RETURN, MOVE_SWEET_KISS, MOVE_AERIAL_ACE, MOVE_YAWN},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MURKROW_2] = {
        .species = SPECIES_MURKROW,
        .moves = {MOVE_PERISH_SONG, MOVE_MEAN_LOOK, MOVE_DOUBLE_TEAM, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WOBBUFFET_2] = {
        .species = SPECIES_WOBBUFFET,
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_ENCORE, MOVE_DESTINY_BOND},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PLUSLE_2] = {
        .species = SPECIES_PLUSLE,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_SEISMIC_TOSS, MOVE_WISH},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MINUN_2] = {
        .species = SPECIES_MINUN,
        .moves = {MOVE_THUNDERBOLT, MOVE_ATTRACT, MOVE_CHARM, MOVE_WISH},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GROVYLE_2] = {
        .species = SPECIES_GROVYLE,
        .moves = {MOVE_GIGA_DRAIN, MOVE_CRUSH_CLAW, MOVE_SCREECH, MOVE_ROCK_TOMB},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_COMBUSKEN_2] = {
        .species = SPECIES_COMBUSKEN,
        .moves = {MOVE_FLAMETHROWER, MOVE_SKY_UPPERCUT, MOVE_SLASH, MOVE_SAND_ATTACK},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MARSHTOMP_2] = {
        .species = SPECIES_MARSHTOMP,
        .moves = {MOVE_MUDDY_WATER, MOVE_EARTHQUAKE, MOVE_MUD_SLAP, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PONYTA_2] = {
        .species = SPECIES_PONYTA,
        .moves = {MOVE_FLAMETHROWER, MOVE_BODY_SLAM, MOVE_DOUBLE_KICK, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AZUMARILL_2] = {
        .species = SPECIES_AZUMARILL,
        .moves = {MOVE_MEGA_KICK, MOVE_BRICK_BREAK, MOVE_IRON_TAIL, MOVE_DIG},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SUDOWOODO_2] = {
        .species = SPECIES_SUDOWOODO,
        .moves = {MOVE_MEGA_KICK, MOVE_EARTHQUAKE, MOVE_LOW_KICK, MOVE_SELF_DESTRUCT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAGCARGO_2] = {
        .species = SPECIES_MAGCARGO,
        .moves = {MOVE_OVERHEAT, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BODY_SLAM},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PUPITAR_2] = {
        .species = SPECIES_PUPITAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_SCARY_FACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SEALEO_2] = {
        .species = SPECIES_SEALEO,
        .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_BODY_SLAM, MOVE_HAIL},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RATICATE_2] = {
        .species = SPECIES_RATICATE,
        .moves = {MOVE_SUPER_FANG, MOVE_HYPER_FANG, MOVE_SHADOW_BALL, MOVE_SCARY_FACE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MASQUERAIN_2] = {
        .species = SPECIES_MASQUERAIN,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_GIGA_DRAIN, MOVE_STUN_SPORE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FURRET_2] = {
        .species = SPECIES_FURRET,
        .moves = {MOVE_TRICK, MOVE_FRUSTRATION, MOVE_SHADOW_BALL, MOVE_FOLLOW_ME},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DUNSPARCE_2] = {
        .species = SPECIES_DUNSPARCE,
        .moves = {MOVE_ICE_BEAM, MOVE_ROCK_TOMB, MOVE_BITE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DRAGONAIR_2] = {
        .species = SPECIES_DRAGONAIR,
        .moves = {MOVE_RETURN, MOVE_REST, MOVE_THUNDER_WAVE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MIGHTYENA_2] = {
        .species = SPECIES_MIGHTYENA,
        .moves = {MOVE_CRUNCH, MOVE_SHADOW_BALL, MOVE_FRUSTRATION, MOVE_SCARY_FACE},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LINOONE_2] = {
        .species = SPECIES_LINOONE,
        .moves = {MOVE_TRICK, MOVE_FRUSTRATION, MOVE_THUNDER_WAVE, MOVE_SAND_ATTACK},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CASTFORM_2] = {
        .species = SPECIES_CASTFORM_NORMAL,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_WATER_PULSE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SHELGON_2] = {
        .species = SPECIES_SHELGON,
        .moves = {MOVE_FRUSTRATION, MOVE_DRAGON_DANCE, MOVE_CRUNCH, MOVE_SCARY_FACE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_METANG_2] = {
        .species = SPECIES_METANG,
        .moves = {MOVE_METEOR_MASH, MOVE_PSYCHIC, MOVE_BODY_SLAM, MOVE_SCARY_FACE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WIGGLYTUFF_2] = {
        .species = SPECIES_WIGGLYTUFF,
        .moves = {MOVE_FAKE_TEARS, MOVE_SING, MOVE_DREAM_EATER, MOVE_BRICK_BREAK},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SUNFLORA_2] = {
        .species = SPECIES_SUNFLORA,
        .moves = {MOVE_GIGA_DRAIN, MOVE_GRASS_WHISTLE, MOVE_GROWTH, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHIMECHO_2] = {
        .species = SPECIES_CHIMECHO,
        .moves = {MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEAL_BELL},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GLIGAR_2] = {
        .species = SPECIES_GLIGAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_GUILLOTINE, MOVE_SCREECH},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_QWILFISH_2] = {
        .species = SPECIES_QWILFISH,
        .moves = {MOVE_REVENGE, MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_DESTINY_BOND},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SNEASEL_2] = {
        .species = SPECIES_SNEASEL,
        .moves = {MOVE_CRUSH_CLAW, MOVE_BRICK_BREAK, MOVE_AERIAL_ACE, MOVE_SCREECH},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 170, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PELIPPER_2] = {
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_SURF, MOVE_BLIZZARD, MOVE_AERIAL_ACE, MOVE_PROTECT},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SWELLOW_2] = {
        .species = SPECIES_SWELLOW,
        .moves = {MOVE_FACADE, MOVE_AERIAL_ACE, MOVE_PURSUIT, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LAIRON_2] = {
        .species = SPECIES_LAIRON,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_ROAR, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_SASSY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TANGELA_2] = {
        .species = SPECIES_TANGELA,
        .moves = {MOVE_GIGA_DRAIN, MOVE_STUN_SPORE, MOVE_REST, MOVE_AMNESIA},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARBOK_2] = {
        .species = SPECIES_ARBOK,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_GLARE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PERSIAN_2] = {
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_FRUSTRATION, MOVE_SHADOW_BALL, MOVE_ROAR, MOVE_FAKE_OUT},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SEADRA_2] = {
        .species = SPECIES_SEADRA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_FRUSTRATION, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KECLEON_2] = {
        .species = SPECIES_KECLEON,
        .moves = {MOVE_TRICK, MOVE_BRICK_BREAK, MOVE_SHADOW_BALL, MOVE_SKILL_SWAP},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VIGOROTH_2] = {
        .species = SPECIES_VIGOROTH,
        .moves = {MOVE_CRUSH_CLAW, MOVE_REVERSAL, MOVE_ENDURE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LUNATONE_2] = {
        .species = SPECIES_LUNATONE,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_COSMIC_POWER, MOVE_CALM_MIND},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SOLROCK_2] = {
        .species = SPECIES_SOLROCK,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_COSMIC_POWER, MOVE_OVERHEAT},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NOCTOWL_2] = {
        .species = SPECIES_NOCTOWL,
        .moves = {MOVE_PSYCHIC, MOVE_FEINT_ATTACK, MOVE_AERIAL_ACE, MOVE_REFLECT},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SANDSLASH_2] = {
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CRUSH_CLAW, MOVE_SANDSTORM},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VENOMOTH_2] = {
        .species = SPECIES_VENOMOTH,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_PSYCHIC, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHANSEY_2] = {
        .species = SPECIES_CHANSEY,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_SHADOW_BALL, MOVE_DOUBLE_TEAM, MOVE_SOFT_BOILED},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SEAKING_2] = {
        .species = SPECIES_SEAKING,
        .moves = {MOVE_HORN_DRILL, MOVE_MEGAHORN, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_JUMPLUFF_2] = {
        .species = SPECIES_JUMPLUFF,
        .moves = {MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_GIGA_DRAIN, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PILOSWINE_2] = {
        .species = SPECIES_PILOSWINE,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BODY_SLAM, MOVE_ROAR},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GOLBAT_2] = {
        .species = SPECIES_GOLBAT,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_AIR_CUTTER},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PRIMEAPE_2] = {
        .species = SPECIES_PRIMEAPE,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_TOMB, MOVE_OVERHEAT, MOVE_BULK_UP},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HITMONLEE_2] = {
        .species = SPECIES_HITMONLEE,
        .moves = {MOVE_MEGA_KICK, MOVE_BRICK_BREAK, MOVE_FORESIGHT, MOVE_ROCK_TOMB},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HITMONCHAN_2] = {
        .species = SPECIES_HITMONCHAN,
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_MACH_PUNCH, MOVE_DETECT, MOVE_COUNTER},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GIRAFARIG_2] = {
        .species = SPECIES_GIRAFARIG,
        .moves = {MOVE_PSYCHIC, MOVE_CRUNCH, MOVE_BATON_PASS, MOVE_AGILITY},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HITMONTOP_2] = {
        .species = SPECIES_HITMONTOP,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SEISMIC_TOSS, MOVE_ROCK_SLIDE, MOVE_COUNTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BANETTE_2] = {
        .species = SPECIES_BANETTE,
        .moves = {MOVE_SHADOW_BALL, MOVE_FRUSTRATION, MOVE_SCREECH, MOVE_WILL_O_WISP},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NINJASK_2] = {
        .species = SPECIES_NINJASK,
        .moves = {MOVE_SLASH, MOVE_SHADOW_BALL, MOVE_SWORDS_DANCE, MOVE_BATON_PASS},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SEVIPER_2] = {
        .species = SPECIES_SEVIPER,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ZANGOOSE_2] = {
        .species = SPECIES_ZANGOOSE,
        .moves = {MOVE_CRUSH_CLAW, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK, MOVE_AERIAL_ACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CAMERUPT_2] = {
        .species = SPECIES_CAMERUPT,
        .moves = {MOVE_EARTHQUAKE, MOVE_ERUPTION, MOVE_BODY_SLAM, MOVE_SCARY_FACE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SHARPEDO_2] = {
        .species = SPECIES_SHARPEDO,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_SURF},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TROPIUS_2] = {
        .species = SPECIES_TROPIUS,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_SYNTHESIS, MOVE_BODY_SLAM},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAGNETON_2] = {
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_THUNDER_WAVE, MOVE_METAL_SOUND},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MANTINE_2] = {
        .species = SPECIES_MANTINE,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_STANTLER_2] = {
        .species = SPECIES_STANTLER,
        .moves = {MOVE_FRUSTRATION, MOVE_SHADOW_BALL, MOVE_THUNDER_WAVE, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ABSOL_2] = {
        .species = SPECIES_ABSOL,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_AERIAL_ACE, MOVE_IRON_TAIL},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SWALOT_2] = {
        .species = SPECIES_SWALOT,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_BODY_SLAM, MOVE_COUNTER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CRAWDAUNT_2] = {
        .species = SPECIES_CRAWDAUNT,
        .moves = {MOVE_GUILLOTINE, MOVE_FRUSTRATION, MOVE_ANCIENT_POWER, MOVE_AERIAL_ACE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PIDGEOT_2] = {
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_RETURN, MOVE_AERIAL_ACE, MOVE_STEEL_WING, MOVE_MUD_SLAP},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GRUMPIG_2] = {
        .species = SPECIES_GRUMPIG,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TORKOAL_2] = {
        .species = SPECIES_TORKOAL,
        .moves = {MOVE_OVERHEAT, MOVE_BODY_SLAM, MOVE_SMOKESCREEN, MOVE_PROTECT},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_SASSY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KINGLER_2] = {
        .species = SPECIES_KINGLER,
        .moves = {MOVE_GUILLOTINE, MOVE_ROCK_TOMB, MOVE_FLAIL, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CACTURNE_2] = {
        .species = SPECIES_CACTURNE,
        .moves = {MOVE_MEGA_KICK, MOVE_TEETER_DANCE, MOVE_FEINT_ATTACK, MOVE_SANDSTORM},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BELLOSSOM_2] = {
        .species = SPECIES_BELLOSSOM,
        .moves = {MOVE_SOLAR_BEAM, MOVE_ATTRACT, MOVE_SUNNY_DAY, MOVE_SYNTHESIS},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_OCTILLERY_2] = {
        .species = SPECIES_OCTILLERY,
        .moves = {MOVE_OCTAZOOKA, MOVE_FIRE_BLAST, MOVE_THUNDER_WAVE, MOVE_MUD_SLAP},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HUNTAIL_2] = {
        .species = SPECIES_HUNTAIL,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_CRUNCH, MOVE_BODY_SLAM},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GOREBYSS_2] = {
        .species = SPECIES_GOREBYSS,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_PSYCHIC, MOVE_BODY_SLAM},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RELICANTH_2] = {
        .species = SPECIES_RELICANTH,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_AMNESIA, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_SASSY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_OMASTAR_2] = {
        .species = SPECIES_OMASTAR,
        .moves = {MOVE_HYDRO_PUMP, MOVE_RAIN_DANCE, MOVE_ICE_BEAM, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KABUTOPS_2] = {
        .species = SPECIES_KABUTOPS,
        .moves = {MOVE_SLASH, MOVE_ROCK_SLIDE, MOVE_FLAIL, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_POLIWRATH_2] = {
        .species = SPECIES_POLIWRATH,
        .moves = {MOVE_BRICK_BREAK, MOVE_HYPNOSIS, MOVE_REST, MOVE_BELLY_DRUM},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SCYTHER_2] = {
        .species = SPECIES_SCYTHER,
        .moves = {MOVE_SILVER_WIND, MOVE_AERIAL_ACE, MOVE_SWORDS_DANCE, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PINSIR_2] = {
        .species = SPECIES_PINSIR,
        .moves = {MOVE_GUILLOTINE, MOVE_SWORDS_DANCE, MOVE_FLAIL, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_POLITOED_2] = {
        .species = SPECIES_POLITOED,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_MUD_SLAP, MOVE_SWAGGER},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CLOYSTER_2] = {
        .species = SPECIES_CLOYSTER,
        .moves = {MOVE_DIVE, MOVE_TOXIC, MOVE_DOUBLE_TEAM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DUGTRIO_1] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_EARTHQUAKE, MOVE_TRI_ATTACK, MOVE_SLASH, MOVE_SAND_TOMB},
        .heldItem = ITEM_SOFT_SAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MEDICHAM_1] = {
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_PSYCHIC, MOVE_HIGH_JUMP_KICK, MOVE_CALM_MIND, MOVE_BATON_PASS},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MISDREAVUS_1] = {
        .species = SPECIES_MISDREAVUS,
        .moves = {MOVE_PAIN_SPLIT, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FEAROW_1] = {
        .species = SPECIES_FEAROW,
        .moves = {MOVE_DRILL_PECK, MOVE_TRI_ATTACK, MOVE_FACADE, MOVE_MUD_SLAP},
        .heldItem = ITEM_SHARP_BEAK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GRANBULL_1] = {
        .species = SPECIES_GRANBULL,
        .moves = {MOVE_MEGA_KICK, MOVE_SMELLING_SALTS, MOVE_THUNDER_WAVE, MOVE_ROAR},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_JYNX_1] = {
        .species = SPECIES_JYNX,
        .moves = {MOVE_ICE_BEAM, MOVE_FAKE_OUT, MOVE_LOVELY_KISS, MOVE_ATTRACT},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DUSCLOPS_1] = {
        .species = SPECIES_DUSCLOPS,
        .moves = {MOVE_WILL_O_WISP, MOVE_SEISMIC_TOSS, MOVE_PAIN_SPLIT, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DODRIO_1] = {
        .species = SPECIES_DODRIO,
        .moves = {MOVE_DRILL_PECK, MOVE_TRI_ATTACK, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MR_MIME_1] = {
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_PSYCHIC, MOVE_MAGICAL_LEAF, MOVE_FAKE_OUT, MOVE_REFLECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LANTURN_1] = {
        .species = SPECIES_LANTURN,
        .moves = {MOVE_SURF, MOVE_CONFUSE_RAY, MOVE_ATTRACT, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BRELOOM_1] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_SKY_UPPERCUT, MOVE_MACH_PUNCH, MOVE_HEADBUTT, MOVE_COUNTER},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FORRETRESS_1] = {
        .species = SPECIES_FORRETRESS,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_ROCK_SLIDE, MOVE_LIGHT_SCREEN, MOVE_SPIKES},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WHISCASH_1] = {
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_AMNESIA, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_XATU_1] = {
        .species = SPECIES_XATU,
        .moves = {MOVE_DRILL_PECK, MOVE_NIGHT_SHADE, MOVE_WISH, MOVE_FUTURE_SIGHT},
        .heldItem = ITEM_SHARP_BEAK,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SKARMORY_1] = {
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_STEEL_WING, MOVE_AIR_CUTTER, MOVE_COUNTER, MOVE_AGILITY},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAROWAK_1] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_BONEMERANG, MOVE_ROCK_SLIDE, MOVE_ICY_WIND, MOVE_HEADBUTT},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_QUAGSIRE_1] = {
        .species = SPECIES_QUAGSIRE,
        .moves = {MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_COUNTER, MOVE_MUD_SLAP},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CLEFABLE_1] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_METRONOME, MOVE_DOUBLE_TEAM, MOVE_REFLECT, MOVE_FOLLOW_ME},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BRAVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HARIYAMA_1] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_COUNTER, MOVE_FAKE_OUT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RAICHU_1] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_THUNDERBOLT, MOVE_QUICK_ATTACK, MOVE_LIGHT_SCREEN, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 170, 170, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DEWGONG_1] = {
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_ICE_BEAM, MOVE_ICY_WIND, MOVE_HEADBUTT, MOVE_FAKE_OUT},
        .heldItem = ITEM_NEVER_MELT_ICE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MANECTRIC_1] = {
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH, MOVE_QUICK_ATTACK, MOVE_ROAR},
        .heldItem = ITEM_MAGNET,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VILEPLUME_1] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_PETAL_DANCE, MOVE_MOONLIGHT, MOVE_AROMATHERAPY},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VICTREEBEL_1] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER, MOVE_SWEET_SCENT, MOVE_SYNTHESIS},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ELECTRODE_1] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_THUNDERBOLT, MOVE_SWIFT, MOVE_LIGHT_SCREEN, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_EXPLOUD_1] = {
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_HYPER_VOICE, MOVE_SHADOW_BALL, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SHIFTRY_1] = {
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_GIGA_DRAIN, MOVE_FEINT_ATTACK, MOVE_QUICK_ATTACK, MOVE_FAKE_OUT},
        .heldItem = ITEM_MIRACLE_SEED,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 170, 170),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GLALIE_1] = {
        .species = SPECIES_GLALIE,
        .moves = {MOVE_ICE_BEAM, MOVE_CRUNCH, MOVE_HAIL, MOVE_PROTECT},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LUDICOLO_1] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 170, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HYPNO_1] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_HYPNOSIS},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GOLEM_1] = {
        .species = SPECIES_GOLEM,
        .moves = {MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_COUNTER, MOVE_ROCK_TOMB},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RHYDON_1] = {
        .species = SPECIES_RHYDON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_SCARY_FACE, MOVE_BRICK_BREAK},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ALAKAZAM_1] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WEEZING_1] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_WILL_O_WISP, MOVE_SHADOW_BALL, MOVE_SMOKESCREEN},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KANGASKHAN_1] = {
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_DIZZY_PUNCH, MOVE_BRICK_BREAK, MOVE_COUNTER, MOVE_FAKE_OUT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ELECTABUZZ_1] = {
        .species = SPECIES_ELECTABUZZ,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_BRICK_BREAK, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 170, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TAUROS_1] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_EARTHQUAKE, MOVE_THRASH, MOVE_SWAGGER, MOVE_FACADE},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SLOWBRO_1] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_HEADBUTT, MOVE_ICE_PUNCH},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SLOWKING_1] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_PSYCHIC, MOVE_BRICK_BREAK, MOVE_AMNESIA, MOVE_ATTRACT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MILTANK_1] = {
        .species = SPECIES_MILTANK,
        .moves = {MOVE_FACADE, MOVE_SHADOW_BALL, MOVE_COUNTER, MOVE_MILK_DRINK},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ALTARIA_1] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_DRAGON_CLAW, MOVE_AERIAL_ACE, MOVE_REFRESH, MOVE_BODY_SLAM},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NIDOQUEEN_1] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_DOUBLE_KICK, MOVE_BODY_SLAM, MOVE_COUNTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NIDOKING_1] = {
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_HORN_DRILL, MOVE_DOUBLE_KICK, MOVE_BODY_SLAM, MOVE_COUNTER},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAGMAR_1] = {
        .species = SPECIES_MAGMAR,
        .moves = {MOVE_FLAMETHROWER, MOVE_SMOKESCREEN, MOVE_BRICK_BREAK, MOVE_BARRIER},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 170, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CRADILY_1] = {
        .species = SPECIES_CRADILY,
        .moves = {MOVE_GIGA_DRAIN, MOVE_ROCK_SLIDE, MOVE_BARRIER, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARMALDO_1] = {
        .species = SPECIES_ARMALDO,
        .moves = {MOVE_SLASH, MOVE_AERIAL_ACE, MOVE_ANCIENT_POWER, MOVE_PROTECT},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GOLDUCK_1] = {
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DIG, MOVE_BRICK_BREAK, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RAPIDASH_1] = {
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_FLAMETHROWER, MOVE_DOUBLE_KICK, MOVE_QUICK_ATTACK, MOVE_PROTECT},
        .heldItem = ITEM_CHARCOAL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MUK_1] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_BODY_SLAM, MOVE_SCREECH, MOVE_MINIMIZE},
        .heldItem = ITEM_POISON_BARB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GENGAR_1] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_DREAM_EATER, MOVE_HYPNOSIS, MOVE_CONFUSE_RAY, MOVE_ATTRACT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 0, 170, 170, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AMPHAROS_1] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_THUNDER_WAVE, MOVE_ATTRACT},
        .heldItem = ITEM_MAGNET,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SCIZOR_1] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_METAL_CLAW, MOVE_AERIAL_ACE, MOVE_COUNTER, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HERACROSS_1] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_MEGAHORN, MOVE_BRICK_BREAK, MOVE_ROCK_TOMB, MOVE_COUNTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_URSARING_1] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_MEGA_KICK, MOVE_CRUNCH, MOVE_AERIAL_ACE, MOVE_COUNTER},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HOUNDOOM_1] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_FLAMETHROWER, MOVE_SHADOW_BALL, MOVE_COUNTER, MOVE_WILL_O_WISP},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DONPHAN_1] = {
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_SWAGGER, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CLAYDOL_1] = {
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WAILORD_1] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_SURF, MOVE_ICY_WIND, MOVE_BODY_SLAM, MOVE_ROAR},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_SASSY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NINETALES_1] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MACHAMP_1] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_COUNTER, MOVE_SCARY_FACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SHUCKLE_1] = {
        .species = SPECIES_SHUCKLE,
        .moves = {MOVE_ROLLOUT, MOVE_DEFENSE_CURL, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BRAVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_STEELIX_1] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_BREATH, MOVE_ROCK_TOMB, MOVE_ROAR},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TENTACRUEL_1] = {
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_ICY_WIND, MOVE_BARRIER, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AERODACTYL_1] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_ANCIENT_POWER, MOVE_DRAGON_BREATH, MOVE_AERIAL_ACE, MOVE_ROAR},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 170, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PORYGON2_1] = {
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_TRI_ATTACK, MOVE_AERIAL_ACE, MOVE_SHADOW_BALL, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GARDEVOIR_1] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_DREAM_EATER, MOVE_HYPNOSIS, MOVE_MAGICAL_LEAF, MOVE_REFLECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 170, 0, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_EXEGGUTOR_1] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_SYNTHESIS, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_STARMIE_1] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_PSYCHIC, MOVE_CONFUSE_RAY, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FLYGON_1] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_EARTHQUAKE, MOVE_STEEL_WING, MOVE_FEINT_ATTACK, MOVE_FACADE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VENUSAUR_1] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SUNNY_DAY, MOVE_SYNTHESIS, MOVE_SLEEP_POWDER},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VAPOREON_1] = {
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_SURF, MOVE_ROAR, MOVE_BITE, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 170, 170),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_JOLTEON_1] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_ATTRACT, MOVE_PROTECT},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FLAREON_1] = {
        .species = SPECIES_FLAREON,
        .moves = {MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_BITE, MOVE_SAND_ATTACK},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MEGANIUM_1] = {
        .species = SPECIES_MEGANIUM,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_LIGHT_SCREEN, MOVE_SYNTHESIS},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ESPEON_1] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_PSYCHIC, MOVE_CHARM, MOVE_CALM_MIND, MOVE_BATON_PASS},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 170, 0, 170),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_UMBREON_1] = {
        .species = SPECIES_UMBREON,
        .moves = {MOVE_CONFUSE_RAY, MOVE_FEINT_ATTACK, MOVE_DOUBLE_TEAM, MOVE_BATON_PASS},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BLASTOISE_1] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_RAIN_DANCE, MOVE_BITE, MOVE_SEISMIC_TOSS},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FERALIGATR_1] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_AERIAL_ACE, MOVE_ROAR},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 0, 0, 170, 170),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AGGRON_1] = {
        .species = SPECIES_AGGRON,
        .moves = {MOVE_IRON_TAIL, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_ROAR},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BLAZIKEN_1] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_DOUBLE_KICK, MOVE_ROAR},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WALREIN_1] = {
        .species = SPECIES_WALREIN,
        .moves = {MOVE_BLIZZARD, MOVE_HAIL, MOVE_YAWN, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SCEPTILE_1] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_LEAF_BLADE, MOVE_LEECH_SEED, MOVE_AERIAL_ACE, MOVE_DETECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHARIZARD_1] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_ROAR, MOVE_SCARY_FACE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TYPHLOSION_1] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_SMOKESCREEN, MOVE_ROAR},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LAPRAS_1] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_SURF, MOVE_ATTRACT, MOVE_CONFUSE_RAY, MOVE_SING},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CROBAT_1] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_BITE, MOVE_ASTONISH, MOVE_SCREECH},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SWAMPERT_1] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_REST, MOVE_CURSE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GYARADOS_1] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_RETURN, MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SNORLAX_1] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_FACADE, MOVE_SHADOW_BALL, MOVE_ATTRACT, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KINGDRA_1] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRAGON_BREATH, MOVE_ICY_WIND, MOVE_ATTRACT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BLISSEY_1] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_TOXIC, MOVE_DOUBLE_TEAM, MOVE_SING, MOVE_SOFT_BOILED},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MILOTIC_1] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICY_WIND, MOVE_RECOVER, MOVE_MIRROR_COAT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 170, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARCANINE_1] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_FLAMETHROWER, MOVE_EXTREME_SPEED, MOVE_CRUNCH, MOVE_BODY_SLAM},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SALAMENCE_1] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_DRAGON_CLAW, MOVE_AERIAL_ACE, MOVE_HEADBUTT, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_METAGROSS_1] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_METEOR_MASH, MOVE_AERIAL_ACE, MOVE_FACADE, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SLAKING_1] = {
        .species = SPECIES_SLAKING,
        .moves = {MOVE_YAWN, MOVE_BULK_UP, MOVE_SWAGGER, MOVE_AERIAL_ACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DUGTRIO_2] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_AERIAL_ACE, MOVE_TRI_ATTACK},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MEDICHAM_2] = {
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_REVERSAL, MOVE_ENDURE, MOVE_PSYCHIC, MOVE_FAKE_OUT},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAROWAK_2] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_ICY_WIND},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_QUAGSIRE_2] = {
        .species = SPECIES_QUAGSIRE,
        .moves = {MOVE_CURSE, MOVE_ATTRACT, MOVE_YAWN, MOVE_ANCIENT_POWER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_SASSY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MISDREAVUS_2] = {
        .species = SPECIES_MISDREAVUS,
        .moves = {MOVE_PSYCHIC, MOVE_ATTRACT, MOVE_THUNDER_WAVE, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FEAROW_2] = {
        .species = SPECIES_FEAROW,
        .moves = {MOVE_DRILL_PECK, MOVE_TRI_ATTACK, MOVE_ATTRACT, MOVE_PURSUIT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GRANBULL_2] = {
        .species = SPECIES_GRANBULL,
        .moves = {MOVE_OVERHEAT, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_FACADE},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 252),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_JYNX_2] = {
        .species = SPECIES_JYNX,
        .moves = {MOVE_PERISH_SONG, MOVE_MEAN_LOOK, MOVE_LOVELY_KISS, MOVE_PROTECT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DUSCLOPS_2] = {
        .species = SPECIES_DUSCLOPS,
        .moves = {MOVE_TOXIC, MOVE_CONFUSE_RAY, MOVE_DOUBLE_TEAM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DODRIO_2] = {
        .species = SPECIES_DODRIO,
        .moves = {MOVE_DRILL_PECK, MOVE_DOUBLE_EDGE, MOVE_FEINT_ATTACK, MOVE_PROTECT},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MR_MIME_2] = {
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_BATON_PASS, MOVE_SWAGGER, MOVE_PSYCH_UP, MOVE_PSYCHIC},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LANTURN_2] = {
        .species = SPECIES_LANTURN,
        .moves = {MOVE_FLAIL, MOVE_ENDURE, MOVE_THUNDERBOLT, MOVE_SURF},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BRELOOM_2] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_FOCUS_PUNCH, MOVE_SPORE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FORRETRESS_2] = {
        .species = SPECIES_FORRETRESS,
        .moves = {MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_COUNTER, MOVE_PROTECT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SKARMORY_2] = {
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_SPIKES, MOVE_ROAR, MOVE_DRILL_PECK, MOVE_TOXIC},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 0, 170),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WHISCASH_2] = {
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_SPARK, MOVE_FUTURE_SIGHT},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_XATU_2] = {
        .species = SPECIES_XATU,
        .moves = {MOVE_FLY, MOVE_TOXIC, MOVE_CONFUSE_RAY, MOVE_ATTRACT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CLEFABLE_2] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_METEOR_MASH, MOVE_COSMIC_POWER, MOVE_DOUBLE_TEAM, MOVE_FOLLOW_ME},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HARIYAMA_2] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_CROSS_CHOP, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RAICHU_2] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_THUNDERBOLT, MOVE_REVERSAL, MOVE_ENDURE, MOVE_AGILITY},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DEWGONG_2] = {
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_BLIZZARD, MOVE_DOUBLE_EDGE, MOVE_ENCORE, MOVE_DISABLE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MANECTRIC_2] = {
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_CRUNCH, MOVE_ROAR},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VILEPLUME_2] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_INGRAIN, MOVE_DOUBLE_TEAM, MOVE_TOXIC, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VICTREEBEL_2] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_ATTRACT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_SERIOUS,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ELECTRODE_2] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_DOUBLE_TEAM, MOVE_SWAGGER},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_EXPLOUD_2] = {
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_COUNTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SHIFTRY_2] = {
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_LEECH_SEED, MOVE_DIG, MOVE_DOUBLE_TEAM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GLALIE_2] = {
        .species = SPECIES_GLALIE,
        .moves = {MOVE_EXPLOSION, MOVE_ENDURE, MOVE_BODY_SLAM, MOVE_ICY_WIND},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LUDICOLO_2] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HYPNO_2] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_HYPNOSIS, MOVE_NIGHTMARE, MOVE_DREAM_EATER, MOVE_PSYCHIC},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GOLEM_2] = {
        .species = SPECIES_GOLEM,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SUBSTITUTE, MOVE_DOUBLE_TEAM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RHYDON_2] = {
        .species = SPECIES_RHYDON,
        .moves = {MOVE_EARTHQUAKE, MOVE_HORN_DRILL, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ALAKAZAM_2] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WEEZING_2] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_MEMENTO, MOVE_SLUDGE_BOMB, MOVE_FACADE, MOVE_DESTINY_BOND},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KANGASKHAN_2] = {
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_CRUSH_CLAW, MOVE_SHADOW_BALL, MOVE_ATTRACT, MOVE_REST},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ELECTABUZZ_2] = {
        .species = SPECIES_ELECTABUZZ,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_ATTRACT, MOVE_FOCUS_PUNCH},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TAUROS_2] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_DOUBLE_TEAM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SLOWBRO_2] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_YAWN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SLOWKING_2] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_YAWN, MOVE_THUNDER_WAVE, MOVE_SURF, MOVE_PSYCHIC},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MILTANK_2] = {
        .species = SPECIES_MILTANK,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SHADOW_BALL, MOVE_ATTRACT, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 0, 170),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ALTARIA_2] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_PERISH_SONG, MOVE_DRAGON_BREATH, MOVE_PURSUIT, MOVE_ATTRACT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NIDOQUEEN_2] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NIDOKING_2] = {
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_MEGA_KICK, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAGMAR_2] = {
        .species = SPECIES_MAGMAR,
        .moves = {MOVE_FIRE_BLAST, MOVE_SMOKESCREEN, MOVE_THUNDER_PUNCH, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CRADILY_2] = {
        .species = SPECIES_CRADILY,
        .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARMALDO_2] = {
        .species = SPECIES_ARMALDO,
        .moves = {MOVE_IRON_TAIL, MOVE_ANCIENT_POWER, MOVE_BRICK_BREAK, MOVE_KNOCK_OFF},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GOLDUCK_2] = {
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_CROSS_CHOP, MOVE_SURF, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RAPIDASH_2] = {
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_FIRE_BLAST, MOVE_BOUNCE, MOVE_DOUBLE_TEAM, MOVE_ATTRACT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MUK_2] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_CURSE, MOVE_REST, MOVE_SLUDGE_BOMB, MOVE_DYNAMIC_PUNCH},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GENGAR_2] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AMPHAROS_2] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_FOCUS_PUNCH, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SCIZOR_2] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_SILVER_WIND, MOVE_STEEL_WING, MOVE_SWORDS_DANCE, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HERACROSS_2] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_ATTRACT, MOVE_BULK_UP},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_URSARING_2] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_COUNTER},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HOUNDOOM_2] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_FIRE_BLAST, MOVE_CRUNCH, MOVE_ROAR, MOVE_REST},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DONPHAN_2] = {
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_FLAIL, MOVE_ENDURE, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CLAYDOL_2] = {
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_PSYCHIC, MOVE_EARTHQUAKE, MOVE_DOUBLE_TEAM, MOVE_COSMIC_POWER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WAILORD_2] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_REST, MOVE_CURSE, MOVE_AMNESIA},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NINETALES_2] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_HEAT_WAVE, MOVE_BODY_SLAM, MOVE_GRUDGE, MOVE_SUNNY_DAY},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MACHAMP_2] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_BULK_UP, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SHUCKLE_2] = {
        .species = SPECIES_SHUCKLE,
        .moves = {MOVE_SANDSTORM, MOVE_DIG, MOVE_FLASH, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_STEELIX_2] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_BREATH, MOVE_SANDSTORM, MOVE_BLOCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TENTACRUEL_2] = {
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_TOXIC, MOVE_GIGA_DRAIN, MOVE_CONFUSE_RAY, MOVE_SURF},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 170, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AERODACTYL_2] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_HYPER_BEAM, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_ANCIENT_POWER},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 170, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PORYGON2_2] = {
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GARDEVOIR_2] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_DOUBLE_TEAM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_EXEGGUTOR_2] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_RETURN, MOVE_CURSE, MOVE_SLEEP_POWDER, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_STARMIE_2] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_RECOVER},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FLYGON_2] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_SOLAR_BEAM, MOVE_FIRE_BLAST, MOVE_CRUNCH, MOVE_SUNNY_DAY},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VENUSAUR_2] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_DOUBLE_TEAM, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VAPOREON_2] = {
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_BODY_SLAM, MOVE_SHADOW_BALL},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_JOLTEON_2] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_THUNDERBOLT, MOVE_DIG, MOVE_DOUBLE_KICK, MOVE_ROAR},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FLAREON_2] = {
        .species = SPECIES_FLAREON,
        .moves = {MOVE_CURSE, MOVE_ATTRACT, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_RELAXED,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MEGANIUM_2] = {
        .species = SPECIES_MEGANIUM,
        .moves = {MOVE_LEECH_SEED, MOVE_SUBSTITUTE, MOVE_DOUBLE_TEAM, MOVE_GRASS_WHISTLE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ESPEON_2] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_UMBREON_2] = {
        .species = SPECIES_UMBREON,
        .moves = {MOVE_CURSE, MOVE_SCREECH, MOVE_DOUBLE_TEAM, MOVE_DOUBLE_EDGE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BLASTOISE_2] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_MEGA_KICK, MOVE_BRICK_BREAK, MOVE_MIRROR_COAT},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_BRAVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FERALIGATR_2] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_SURF, MOVE_DRAGON_CLAW, MOVE_BRICK_BREAK, MOVE_SCARY_FACE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 0, 0, 0, 170, 170),
        .nature = NATURE_SASSY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AGGRON_2] = {
        .species = SPECIES_AGGRON,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BLAZIKEN_2] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_BLAZE_KICK, MOVE_MEGA_KICK, MOVE_THUNDER_PUNCH, MOVE_BRICK_BREAK},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WALREIN_2] = {
        .species = SPECIES_WALREIN,
        .moves = {MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_CURSE, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SCEPTILE_2] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_LEAF_BLADE, MOVE_THUNDER_PUNCH, MOVE_ATTRACT, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHARIZARD_2] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_DRAGON_DANCE, MOVE_SMOKESCREEN},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TYPHLOSION_2] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_FLAMETHROWER, MOVE_THUNDER_PUNCH, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LAPRAS_2] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_BODY_SLAM, MOVE_ROAR},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CROBAT_2] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_TOXIC, MOVE_GIGA_DRAIN, MOVE_CONFUSE_RAY, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SWAMPERT_2] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_MIRROR_COAT},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GYARADOS_2] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDERBOLT, MOVE_FIRE_BLAST, MOVE_BLIZZARD},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SNORLAX_2] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CURSE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KINGDRA_2] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_DRAGON_BREATH, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BLISSEY_2] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_SING, MOVE_ATTRACT, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MILOTIC_2] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_SAFEGUARD, MOVE_MIRROR_COAT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARCANINE_2] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_CRUNCH, MOVE_ROAR},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SALAMENCE_2] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CRUNCH, MOVE_SWAGGER, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_METAGROSS_2] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_EARTHQUAKE, MOVE_METEOR_MASH, MOVE_PSYCH_UP, MOVE_SWAGGER},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 0, 170, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SLAKING_2] = {
        .species = SPECIES_SLAKING,
        .moves = {MOVE_MEGA_KICK, MOVE_SHADOW_BALL, MOVE_YAWN, MOVE_AMNESIA},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KAKUNA] = {
        .species = SPECIES_KAKUNA,
        .moves = {MOVE_HARDEN, MOVE_STRING_SHOT, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SILCOON] = {
        .species = SPECIES_SILCOON,
        .moves = {MOVE_HARDEN, MOVE_STRING_SHOT, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NUZLEAF] = {
        .species = SPECIES_NUZLEAF,
        .moves = {MOVE_LEAF_BLADE, MOVE_NIGHT_SLASH, MOVE_SUCKER_PUNCH, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LOMBRE] = {
        .species = SPECIES_LOMBRE,
        .moves = {MOVE_GIGA_DRAIN, MOVE_WATER_PULSE, MOVE_FAKE_OUT, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_STARAVIA] = {
        .species = SPECIES_STARAVIA,
        .moves = {MOVE_BRAVE_BIRD, MOVE_QUICK_ATTACK, MOVE_FACADE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KRICKETUNE] = {
        .species = SPECIES_KRICKETUNE,
        .moves = {MOVE_X_SCISSOR, MOVE_NIGHT_SLASH, MOVE_SWORDS_DANCE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LUXIO] = {
        .species = SPECIES_LUXIO,
        .moves = {MOVE_SPARK, MOVE_BITE, MOVE_ICE_FANG, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LICKILICKY] = {
        .species = SPECIES_LICKILICKY,
        .moves = {MOVE_BODY_SLAM, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NOSEPASS] = {
        .species = SPECIES_NOSEPASS,
        .moves = {MOVE_ROCK_SLIDE, MOVE_THUNDER_WAVE, MOVE_TOXIC, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PROBOPASS] = {
        .species = SPECIES_PROBOPASS,
        .moves = {MOVE_ROCK_SLIDE, MOVE_FLASH_CANNON, MOVE_STEALTH_ROCK, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WATCHOG] = {
        .species = SPECIES_WATCHOG,
        .moves = {MOVE_CONFUSE_RAY, MOVE_FACADE, MOVE_SUPER_FANG, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HERDIER] = {
        .species = SPECIES_HERDIER,
        .moves = {MOVE_BODY_SLAM, MOVE_CRUNCH, MOVE_ROAR, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LIEPARD] = {
        .species = SPECIES_LIEPARD,
        .moves = {MOVE_NIGHT_SLASH, MOVE_SUCKER_PUNCH, MOVE_TAUNT, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_UNFEZANT] = {
        .species = SPECIES_UNFEZANT,
        .moves = {MOVE_AIR_SLASH, MOVE_NIGHT_SLASH, MOVE_FACADE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BOLDORE] = {
        .species = SPECIES_BOLDORE,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GURDURR] = {
        .species = SPECIES_GURDURR,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_KNOCK_OFF, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PALPITOAD] = {
        .species = SPECIES_PALPITOAD,
        .moves = {MOVE_SCALD, MOVE_EARTHQUAKE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LEAVANNY] = {
        .species = SPECIES_LEAVANNY,
        .moves = {MOVE_LEAF_BLADE, MOVE_X_SCISSOR, MOVE_SWORDS_DANCE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WHIRLIPEDE] = {
        .species = SPECIES_WHIRLIPEDE,
        .moves = {MOVE_POISON_STING, MOVE_ROLLOUT, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SWADLOON] = {
        .species = SPECIES_SWADLOON,
        .moves = {MOVE_BUG_BITE, MOVE_RAZOR_LEAF, MOVE_STRING_SHOT, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VENIPEDE] = {
        .species = SPECIES_VENIPEDE,
        .moves = {MOVE_POISON_STING, MOVE_ROLLOUT, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DWEBBLE] = {
        .species = SPECIES_DWEBBLE,
        .moves = {MOVE_ROCK_SLIDE, MOVE_X_SCISSOR, MOVE_SHELL_SMASH, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CRUSTLE] = {
        .species = SPECIES_CRUSTLE,
        .moves = {MOVE_ROCK_SLIDE, MOVE_X_SCISSOR, MOVE_SHELL_SMASH, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SCOLIPEDE] = {
        .species = SPECIES_SCOLIPEDE,
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_EELEKTRIK] = {
        .species = SPECIES_EELEKTRIK,
        .moves = {MOVE_DISCHARGE, MOVE_CRUNCH, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LAMPENT] = {
        .species = SPECIES_LAMPENT,
        .moves = {MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_FIRE_SPIN, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DOUBLADE] = {
        .species = SPECIES_DOUBLADE,
        .moves = {MOVE_SHADOW_SNEAK, MOVE_IRON_HEAD, MOVE_SWORDS_DANCE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_INKAY] = {
        .species = SPECIES_INKAY,
        .moves = {MOVE_PSYBEAM, MOVE_SUCKER_PUNCH, MOVE_TOPSY_TURVY, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BINACLE] = {
        .species = SPECIES_BINACLE,
        .moves = {MOVE_ROCK_SLIDE, MOVE_AQUA_JET, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SLIGGOO] = {
        .species = SPECIES_SLIGGOO,
        .moves = {MOVE_DRAGON_PULSE, MOVE_FLAMETHROWER, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHARJABUG] = {
        .species = SPECIES_CHARJABUG,
        .moves = {MOVE_DISCHARGE, MOVE_BUG_BITE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_STEENEE] = {
        .species = SPECIES_STEENEE,
        .moves = {MOVE_TROP_KICK, MOVE_STOMP, MOVE_SWORDS_DANCE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MUDBRAY] = {
        .species = SPECIES_MUDBRAY,
        .moves = {MOVE_EARTHQUAKE, MOVE_STOMP, MOVE_ROCK_SLIDE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FLOATZEL] = {
        .species = SPECIES_FLOATZEL,
        .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_AQUA_JET, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DRAKLOAK] = {
        .species = SPECIES_DRAKLOAK,
        .moves = {MOVE_DRAGON_DARTS, MOVE_PHANTOM_FORCE, MOVE_SUCKER_PUNCH, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SCRAFTY] = {
        .species = SPECIES_SCRAFTY,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_BULK_UP, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GALVANTULA] = {
        .species = SPECIES_GALVANTULA,
        .moves = {MOVE_THUNDERBOLT, MOVE_BUG_BUZZ, MOVE_STICKY_WEB, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WHIMSICOTT] = {
        .species = SPECIES_WHIMSICOTT,
        .moves = {MOVE_MOONBLAST, MOVE_ENCORE, MOVE_TAILWIND, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LILLIGANT] = {
        .species = SPECIES_LILLIGANT,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SAWSBUCK] = {
        .species = SPECIES_SAWSBUCK,
        .moves = {MOVE_HORN_LEECH, MOVE_DOUBLE_KICK, MOVE_SWORDS_DANCE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BASCULIN] = {
        .species = SPECIES_BASCULIN,
        .moves = {MOVE_WATER_PULSE, MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KLANG] = {
        .species = SPECIES_KLANG,
        .moves = {MOVE_GYRO_BALL, MOVE_SHIFT_GEAR, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_BRAVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BOUFFALANT] = {
        .species = SPECIES_BOUFFALANT,
        .moves = {MOVE_BODY_SLAM, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MIENFOO] = {
        .species = SPECIES_MIENFOO,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_U_TURN, MOVE_SWORDS_DANCE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FRAXURE] = {
        .species = SPECIES_FRAXURE,
        .moves = {MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AXEW] = {
        .species = SPECIES_AXEW,
        .moves = {MOVE_DRAGON_CLAW, MOVE_OUTRAGE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FLETCHINDER] = {
        .species = SPECIES_FLETCHINDER,
        .moves = {MOVE_FLAME_CHARGE, MOVE_AERIAL_ACE, MOVE_ACROBATICS, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SPEWPA] = {
        .species = SPECIES_SPEWPA,
        .moves = {MOVE_STRING_SHOT, MOVE_TACKLE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BASHFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CACNEA] = {
        .species = SPECIES_CACNEA,
        .moves = {MOVE_SEED_BOMB, MOVE_DRAIN_PUNCH, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CORPHISH] = {
        .species = SPECIES_CORPHISH,
        .moves = {MOVE_CRABHAMMER, MOVE_KNOCK_OFF, MOVE_AQUA_JET, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LOTAD] = {
        .species = SPECIES_LOTAD,
        .moves = {MOVE_GIGA_DRAIN, MOVE_WATER_PULSE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CASTFORM] = {
        .species = SPECIES_CASTFORM,
        .moves = {MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NUMEL] = {
        .species = SPECIES_NUMEL,
        .moves = {MOVE_EARTHQUAKE, MOVE_FLAMETHROWER, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_BRAVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SPINDA] = {
        .species = SPECIES_SPINDA,
        .moves = {MOVE_PSYBEAM, MOVE_TEETER_DANCE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BARBOACH] = {
        .species = SPECIES_BARBOACH,
        .moves = {MOVE_WATER_PULSE, MOVE_MUD_SHOT, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RALTS] = {
        .species = SPECIES_RALTS,
        .moves = {MOVE_CONFUSION, MOVE_GROWL, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CROAGUNK] = {
        .species = SPECIES_CROAGUNK,
        .moves = {MOVE_POISON_JAB, MOVE_SUCKER_PUNCH, MOVE_DRAIN_PUNCH, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_STUNKY] = {
        .species = SPECIES_STUNKY,
        .moves = {MOVE_CRUNCH, MOVE_POISON_JAB, MOVE_SUCKER_PUNCH, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BRONZOR] = {
        .species = SPECIES_BRONZOR,
        .moves = {MOVE_PSYCHIC, MOVE_IRON_DEFENSE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHATOT] = {
        .species = SPECIES_CHATOT,
        .moves = {MOVE_HYPER_VOICE, MOVE_TAUNT, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MIME_JR] = {
        .species = SPECIES_MIME_JR,
        .moves = {MOVE_PSYBEAM, MOVE_ENCORE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BUDEW] = {
        .species = SPECIES_BUDEW,
        .moves = {MOVE_GIGA_DRAIN, MOVE_STUN_SPORE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_COMBEE] = {
        .species = SPECIES_COMBEE,
        .moves = {MOVE_BUG_BITE, MOVE_ATTRACT, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PACHIRISU] = {
        .species = SPECIES_PACHIRISU,
        .moves = {MOVE_DISCHARGE, MOVE_SUPER_FANG, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHERUBI] = {
        .species = SPECIES_CHERUBI,
        .moves = {MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SHELLOS] = {
        .species = SPECIES_SHELLOS,
        .moves = {MOVE_MUD_BOMB, MOVE_TOXIC, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DRIFLOON] = {
        .species = SPECIES_DRIFLOON,
        .moves = {MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GLAMEOW] = {
        .species = SPECIES_GLAMEOW,
        .moves = {MOVE_FAKE_OUT, MOVE_NIGHT_SLASH, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHINGLING] = {
        .species = SPECIES_CHINGLING,
        .moves = {MOVE_CONFUSION, MOVE_ASTONISH, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BONSLY] = {
        .species = SPECIES_BONSLY,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HAPPINY] = {
        .species = SPECIES_HAPPINY,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_TOXIC, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MUNCHLAX] = {
        .species = SPECIES_MUNCHLAX,
        .moves = {MOVE_BODY_SLAM, MOVE_EARTHQUAKE, MOVE_CURSE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BIBAREL] = {
        .species = SPECIES_BIBAREL,
        .moves = {MOVE_WATERFALL, MOVE_SUPER_FANG, MOVE_QUICK_ATTACK, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LUMINEON] = {
        .species = SPECIES_LUMINEON,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GASTRODON] = {
        .species = SPECIES_GASTRODON,
        .moves = {MOVE_SCALD, MOVE_EARTH_POWER, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SKUNTANK] = {
        .species = SPECIES_SKUNTANK,
        .moves = {MOVE_CRUNCH, MOVE_POISON_JAB, MOVE_SUCKER_PUNCH, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VESPIQUEN] = {
        .species = SPECIES_VESPIQUEN,
        .moves = {MOVE_ATTACK_ORDER, MOVE_TOXIC, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CARNIVINE] = {
        .species = SPECIES_CARNIVINE,
        .moves = {MOVE_POWER_WHIP, MOVE_KNOCK_OFF, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SIMISAGE] = {
        .species = SPECIES_SIMISAGE,
        .moves = {MOVE_GIGA_DRAIN, MOVE_CRUNCH, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SIMISEAR] = {
        .species = SPECIES_SIMISEAR,
        .moves = {MOVE_FIRE_BLAST, MOVE_CRUNCH, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SIMIPOUR] = {
        .species = SPECIES_SIMIPOUR,
        .moves = {MOVE_SURF, MOVE_CRUNCH, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_STOUTLAND] = {
        .species = SPECIES_STOUTLAND,
        .moves = {MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_FIRE_FANG, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SWOOBAT] = {
        .species = SPECIES_SWOOBAT,
        .moves = {MOVE_PSYCHIC, MOVE_AIR_SLASH, MOVE_CALM_MIND, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AUDINO] = {
        .species = SPECIES_AUDINO,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_WISH, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SAWK] = {
        .species = SPECIES_SAWK,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_STORM_THROW, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MARACTUS] = {
        .species = SPECIES_MARACTUS,
        .moves = {MOVE_NEEDLE_ARM, MOVE_SEED_BOMB, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SIGILYPH] = {
        .species = SPECIES_SIGILYPH,
        .moves = {MOVE_AIR_SLASH, MOVE_PSYCHIC, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ZEBSTRIKA] = {
        .species = SPECIES_ZEBSTRIKA,
        .moves = {MOVE_WILD_CHARGE, MOVE_FLAME_CHARGE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_EELEKTROSS] = {
        .species = SPECIES_EELEKTROSS,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BEHEEYEM] = {
        .species = SPECIES_BEHEEYEM,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_STUNFISK] = {
        .species = SPECIES_STUNFISK,
        .moves = {MOVE_EARTHQUAKE, MOVE_DISCHARGE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HEATMOR] = {
        .species = SPECIES_HEATMOR,
        .moves = {MOVE_FIRE_LASH, MOVE_KNOCK_OFF, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DURANT] = {
        .species = SPECIES_DURANT,
        .moves = {MOVE_IRON_HEAD, MOVE_X_SCISSOR, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ACCELGOR] = {
        .species = SPECIES_ACCELGOR,
        .moves = {MOVE_BUG_BUZZ, MOVE_FOCUS_BLAST, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_JELLICENT] = {
        .species = SPECIES_JELLICENT,
        .moves = {MOVE_SCALD, MOVE_SHADOW_BALL, MOVE_RECOVER, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GOTHITELLE] = {
        .species = SPECIES_GOTHITELLE,
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ESCAVALIER] = {
        .species = SPECIES_ESCAVALIER,
        .moves = {MOVE_MEGAHORN, MOVE_IRON_HEAD, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_THROH] = {
        .species = SPECIES_THROH,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_CIRCLE_THROW, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VANILLUXE] = {
        .species = SPECIES_VANILLUXE,
        .moves = {MOVE_BLIZZARD, MOVE_MIRROR_COAT, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARIADOS] = {
        .species = SPECIES_ARIADOS,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_POISON_JAB, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARTICUNO_1] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_ICE_BEAM, MOVE_WATER_PULSE, MOVE_ICY_WIND, MOVE_ROAR},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ZAPDOS_1] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDERBOLT, MOVE_DRILL_PECK, MOVE_THUNDER_WAVE, MOVE_ROAR},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MOLTRES_1] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_FLAMETHROWER, MOVE_AERIAL_ACE, MOVE_MUD_SLAP, MOVE_ROAR},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RAIKOU_1] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_CALM_MIND, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ENTEI_1] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_FLAMETHROWER, MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SUICUNE_1] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_SURF, MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_REGIROCK_1] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_SUPERPOWER, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_EXPLOSION},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_REGICE_1] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_AMNESIA, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_REGISTEEL_1] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_METAL_CLAW, MOVE_CURSE, MOVE_AMNESIA, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LATIAS_1] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_DRAGON_CLAW},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LATIOS_1] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_DRAGON_CLAW},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARTICUNO_2] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_SUBSTITUTE, MOVE_TOXIC, MOVE_BLIZZARD, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ZAPDOS_2] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_DRILL_PECK, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MOLTRES_2] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_OVERHEAT, MOVE_AERIAL_ACE, MOVE_DOUBLE_TEAM, MOVE_PROTECT},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RAIKOU_2] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_DOUBLE_TEAM, MOVE_REFLECT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ENTEI_2] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_REFLECT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SUICUNE_2] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_TOXIC, MOVE_DIVE, MOVE_DOUBLE_TEAM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_REGIROCK_2] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_COUNTER, MOVE_EXPLOSION},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_REGICE_2] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_BLIZZARD, MOVE_BRICK_BREAK},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_REGISTEEL_2] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LATIAS_2] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_EARTHQUAKE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LATIOS_2] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_EARTHQUAKE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DRAGONITE_1] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DRAGONITE_2] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_AERIAL_ACE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TYRANITAR_1] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_THUNDERBOLT, MOVE_SURF},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TYRANITAR_2] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_THUNDERBOLT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TORTERRA_1] = {
        .species = SPECIES_TORTERRA,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DRAGON_CLAW, MOVE_SYNTHESIS},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
},
    [FRONTIER_MON_INFERNAPE_1] = {
        .species = SPECIES_INFERNAPE,
        .moves = {MOVE_FIRE_BLAST, MOVE_MACH_PUNCH, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
},
    [FRONTIER_MON_EMPOLEON_1] = {
        .species = SPECIES_EMPOLEON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RAMPARDOS_1] = {
        .species = SPECIES_RAMPARDOS,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_SYNTHESIS},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BASTIODON_1] = {
        .species = SPECIES_BASTIODON,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_SYNTHESIS},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GARCHOMP_1] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_SYNTHESIS},
        .heldItem = ITEM_GARCHOMPITE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LUCARIO_1] = {
        .species = SPECIES_LUCARIO,
        .moves = {MOVE_BULLET_PUNCH, MOVE_FOCUS_PUNCH, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE},
        .heldItem = ITEM_LUCARIONITE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DRAPION_1] = {
        .species = SPECIES_DRAPION,
        .moves = {MOVE_CROSS_POISON, MOVE_NIGHT_SLASH, MOVE_KNOCK_OFF, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TOXICROAK_1] = {
        .species = SPECIES_TOXICROAK,
        .moves = {MOVE_CROSS_POISON, MOVE_NIGHT_SLASH, MOVE_KNOCK_OFF, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ABOMASNOW_1] = {
        .species = SPECIES_ABOMASNOW,
        .moves = {MOVE_BLIZZARD, MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_SYNTHESIS},
        .heldItem = ITEM_ABOMASITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WEAVILE_1] = {
        .species = SPECIES_WEAVILE,
        .moves = {MOVE_ICE_PUNCH, MOVE_NIGHT_SLASH, MOVE_KNOCK_OFF, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAGNEZONE_1] = {
        .species = SPECIES_MAGNEZONE,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_THUNDER_WAVE, MOVE_SUBSTITUTE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HONCHKROW_1] = {
        .species = SPECIES_HONCHKROW,
        .moves = {MOVE_NIGHT_SLASH, MOVE_BRAVE_BIRD, MOVE_KNOCK_OFF, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GALLADE_1] = {
        .species = SPECIES_GALLADE,
        .moves = {MOVE_PSYCHO_CUT, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_GALLADITE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FROSLASS_1] = {
        .species = SPECIES_FROSLASS,
        .moves = {MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_THUNDER_WAVE, MOVE_DESTINY_BOND},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LUCARIO_2] = {
        .species = SPECIES_LUCARIO,
        .moves = {MOVE_BULLET_PUNCH, MOVE_FOCUS_PUNCH, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE},
        .heldItem = ITEM_LUCARIONITE_Z,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TORTERRA_2] = {
        .species = SPECIES_TORTERRA,
        .moves = {MOVE_STEALTH_ROCK, MOVE_WOOD_HAMMER, MOVE_EARTHQUAKE, MOVE_STONE_EDGE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_INFERNAPE_2] = {
        .species = SPECIES_INFERNAPE,
        .moves = {MOVE_NASTY_PLOT, MOVE_FIRE_BLAST, MOVE_FOCUS_BLAST, MOVE_VACUUM_WAVE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_EMPOLEON_2] = {
        .species = SPECIES_EMPOLEON,
        .moves = {MOVE_SCALD, MOVE_FLASH_CANNON, MOVE_TOXIC, MOVE_ROAR},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RAMPARDOS_2] = {
        .species = SPECIES_RAMPARDOS,
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_SUPERPOWER},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BASTIODON_2] = {
        .species = SPECIES_BASTIODON,
        .moves = {MOVE_STEALTH_ROCK, MOVE_TOXIC, MOVE_WHIRLWIND, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GARCHOMP_2] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_OUTRAGE, MOVE_STONE_EDGE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DRAPION_2] = {
        .species = SPECIES_DRAPION,
        .moves = {MOVE_KNOCK_OFF, MOVE_CROSS_POISON, MOVE_CRUNCH, MOVE_EARTHQUAKE},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TOXICROAK_2] = {
        .species = SPECIES_TOXICROAK,
        .moves = {MOVE_SWORDS_DANCE, MOVE_DRAIN_PUNCH, MOVE_SUCKER_PUNCH, MOVE_GUNK_SHOT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ABOMASNOW_2] = {
        .species = SPECIES_ABOMASNOW,
        .moves = {MOVE_SWORDS_DANCE, MOVE_WOOD_HAMMER, MOVE_ICE_SHARD, MOVE_EARTHQUAKE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WEAVILE_2] = {
        .species = SPECIES_WEAVILE,
        .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_SHARD, MOVE_KNOCK_OFF, MOVE_PURSUIT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAGNEZONE_2] = {
        .species = SPECIES_MAGNEZONE,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_VOLT_SWITCH, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HONCHKROW_2] = {
        .species = SPECIES_HONCHKROW,
        .moves = {MOVE_BRAVE_BIRD, MOVE_SUCKER_PUNCH, MOVE_KNOCK_OFF, MOVE_PURSUIT},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GALLADE_2] = {
        .species = SPECIES_GALLADE,
        .moves = {MOVE_SWORDS_DANCE, MOVE_CLOSE_COMBAT, MOVE_PSYCHO_CUT, MOVE_BULLET_PUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FROSLASS_2] = {
        .species = SPECIES_FROSLASS,
        .moves = {MOVE_SPIKES, MOVE_TAUNT, MOVE_ICE_BEAM, MOVE_DESTINY_BOND},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_STARAPTOR_1] = {
        .species = SPECIES_STARAPTOR,
        .moves = {MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_U_TURN, MOVE_FACADE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_STARAPTOR_2] = {
        .species = SPECIES_STARAPTOR,
        .moves = {MOVE_BRAVE_BIRD, MOVE_ROOST, MOVE_U_TURN, MOVE_TAILWIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LUXRAY_1] = {
        .species = SPECIES_LUXRAY,
        .moves = {MOVE_WILD_CHARGE, MOVE_ICE_FANG, MOVE_CRUNCH, MOVE_SUPER_FANG},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LUXRAY_2] = {
        .species = SPECIES_LUXRAY,
        .moves = {MOVE_VOLT_SWITCH, MOVE_WILD_CHARGE, MOVE_ICE_FANG, MOVE_CRUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ROSERADE_1] = {
        .species = SPECIES_ROSERADE,
        .moves = {MOVE_LEAF_STORM, MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_SPIKES},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ROSERADE_2] = {
        .species = SPECIES_ROSERADE,
        .moves = {MOVE_SPIKES, MOVE_TOXIC_SPIKES, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RHYPERIOR_1] = {
        .species = SPECIES_RHYPERIOR,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_MEGAHORN, MOVE_ICE_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RHYPERIOR_2] = {
        .species = SPECIES_RHYPERIOR,
        .moves = {MOVE_STEALTH_ROCK, MOVE_ROCK_POLISH, MOVE_EARTHQUAKE, MOVE_STONE_EDGE},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ELECTIVIRE_1] = {
        .species = SPECIES_ELECTIVIRE,
        .moves = {MOVE_WILD_CHARGE, MOVE_ICE_PUNCH, MOVE_CROSS_CHOP, MOVE_EARTHQUAKE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ELECTIVIRE_2] = {
        .species = SPECIES_ELECTIVIRE,
        .moves = {MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, MOVE_FOCUS_BLAST, MOVE_CROSS_CHOP},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS(0, 128, 0, 252, 128, 0),
        .nature = NATURE_NAIVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAGMORTAR_1] = {
        .species = SPECIES_MAGMORTAR,
        .moves = {MOVE_FIRE_BLAST, MOVE_FOCUS_BLAST, MOVE_THUNDERBOLT, MOVE_TAUNT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAGMORTAR_2] = {
        .species = SPECIES_MAGMORTAR,
        .moves = {MOVE_FIRE_BLAST, MOVE_THUNDERBOLT, MOVE_FOCUS_BLAST, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TOGEKISS_1] = {
        .species = SPECIES_TOGEKISS,
        .moves = {MOVE_CALM_MIND, MOVE_AIR_SLASH, MOVE_DAZZLING_GLEAM, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TOGEKISS_2] = {
        .species = SPECIES_TOGEKISS,
        .moves = {MOVE_AIR_SLASH, MOVE_THUNDER_WAVE, MOVE_ROOST, MOVE_DEFOG},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_YANMEGA_1] = {
        .species = SPECIES_YANMEGA,
        .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_SHADOW_BALL, MOVE_PROTECT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_YANMEGA_2] = {
        .species = SPECIES_YANMEGA,
        .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_U_TURN, MOVE_TAILWIND},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LEAFEON_1] = {
        .species = SPECIES_LEAFEON,
        .moves = {MOVE_SWORDS_DANCE, MOVE_LEAF_BLADE, MOVE_KNOCK_OFF, MOVE_X_SCISSOR},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LEAFEON_2] = {
        .species = SPECIES_LEAFEON,
        .moves = {MOVE_LEAF_BLADE, MOVE_STEALTH_ROCK, MOVE_SYNTHESIS, MOVE_KNOCK_OFF},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GLACEON_1] = {
        .species = SPECIES_GLACEON,
        .moves = {MOVE_FREEZE_DRY, MOVE_SHADOW_BALL, MOVE_ICY_WIND, MOVE_WISH},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GLACEON_2] = {
        .species = SPECIES_GLACEON,
        .moves = {MOVE_FREEZE_DRY, MOVE_SHADOW_BALL, MOVE_TAIL_GLOW, MOVE_ICY_WIND},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GLISCOR_1] = {
        .species = SPECIES_GLISCOR,
        .moves = {MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_ROOST},
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GLISCOR_2] = {
        .species = SPECIES_GLISCOR,
        .moves = {MOVE_TOXIC, MOVE_EARTHQUAKE, MOVE_ROOST, MOVE_PROTECT},
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AMBIPOM_1] = {
        .species = SPECIES_AMBIPOM,
        .moves = {MOVE_DOUBLE_HIT, MOVE_LOW_KICK, MOVE_ICE_PUNCH, MOVE_KNOCK_OFF},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AMBIPOM_2] = {
        .species = SPECIES_AMBIPOM,
        .moves = {MOVE_FAKE_OUT, MOVE_U_TURN, MOVE_DOUBLE_HIT, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MISMAGIUS_1] = {
        .species = SPECIES_MISMAGIUS,
        .moves = {MOVE_SHADOW_BALL, MOVE_DAZZLING_GLEAM, MOVE_NASTY_PLOT, MOVE_TAUNT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MISMAGIUS_2] = {
        .species = SPECIES_MISMAGIUS,
        .moves = {MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_DESTINY_BOND, MOVE_PAIN_SPLIT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BRONZONG_1] = {
        .species = SPECIES_BRONZONG,
        .moves = {MOVE_STEALTH_ROCK, MOVE_GYRO_BALL, MOVE_EARTHQUAKE, MOVE_EXPLOSION},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_SASSY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BRONZONG_2] = {
        .species = SPECIES_BRONZONG,
        .moves = {MOVE_TOXIC, MOVE_PROTECT, MOVE_GYRO_BALL, MOVE_IRON_HEAD},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SPIRITOMB_1] = {
        .species = SPECIES_SPIRITOMB,
        .moves = {MOVE_SHADOW_BALL, MOVE_DARK_PULSE, MOVE_CALM_MIND, MOVE_PAIN_SPLIT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SPIRITOMB_2] = {
        .species = SPECIES_SPIRITOMB,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_PURSUIT, MOVE_WILL_O_WISP, MOVE_DESTINY_BOND},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HIPPOWDON_1] = {
        .species = SPECIES_HIPPOWDON,
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_SLACK_OFF, MOVE_WHIRLWIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HIPPOWDON_2] = {
        .species = SPECIES_HIPPOWDON,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_SLACK_OFF, MOVE_TOXIC},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PORYGON_Z_1] = {
        .species = SPECIES_PORYGON_Z,
        .moves = {MOVE_TRI_ATTACK, MOVE_DARK_PULSE, MOVE_ICE_BEAM, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PORYGON_Z_2] = {
        .species = SPECIES_PORYGON_Z,
        .moves = {MOVE_TRI_ATTACK, MOVE_THUNDERBOLT, MOVE_AGILITY, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ROTOM_1] = {
        .species = SPECIES_ROTOM,
        .moves = {MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_VOLT_SWITCH, MOVE_WILL_O_WISP},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ROTOM_2] = {
        .species = SPECIES_ROTOM,
        .moves = {MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_PAIN_SPLIT, MOVE_WILL_O_WISP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_UXIE_1] = {
        .species = SPECIES_UXIE,
        .moves = {MOVE_STEALTH_ROCK, MOVE_PSYCHIC, MOVE_THUNDER_WAVE, MOVE_U_TURN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_UXIE_2] = {
        .species = SPECIES_UXIE,
        .moves = {MOVE_CALM_MIND, MOVE_PSYSHOCK, MOVE_DAZZLING_GLEAM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MESPRIT_1] = {
        .species = SPECIES_MESPRIT,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_ICE_BEAM, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MESPRIT_2] = {
        .species = SPECIES_MESPRIT,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_ICE_PUNCH, MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AZELF_1] = {
        .species = SPECIES_AZELF,
        .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_FIRE_BLAST, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AZELF_2] = {
        .species = SPECIES_AZELF,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_FIRE_PUNCH, MOVE_KNOCK_OFF, MOVE_EXPLOSION},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HEATRAN_1] = {
        .species = SPECIES_HEATRAN,
        .moves = {MOVE_FIRE_BLAST, MOVE_EARTH_POWER, MOVE_STEALTH_ROCK, MOVE_TAUNT},
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HEATRAN_2] = {
        .species = SPECIES_HEATRAN,
        .moves = {MOVE_FLASH_CANNON, MOVE_FIRE_BLAST, MOVE_EARTH_POWER, MOVE_TOXIC},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CRESSELIA_1] = {
        .species = SPECIES_CRESSELIA,
        .moves = {MOVE_MOONLIGHT, MOVE_ICE_BEAM, MOVE_PSYSHOCK, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CRESSELIA_2] = {
        .species = SPECIES_CRESSELIA,
        .moves = {MOVE_TOXIC, MOVE_MOONLIGHT, MOVE_PSYCHIC, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SAMUROTT_1] = {
        .species = SPECIES_SAMUROTT,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_MEGAHORN, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SAMUROTT_2] = {
        .species = SPECIES_SAMUROTT,
        .moves = {MOVE_SWORDS_DANCE, MOVE_RAZOR_SHELL, MOVE_MEGAHORN, MOVE_AQUA_JET},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SERPERIOR_1] = {
        .species = SPECIES_SERPERIOR,
        .moves = {MOVE_LEAF_STORM, MOVE_DRAGON_PULSE, MOVE_GLARE, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SERPERIOR_2] = {
        .species = SPECIES_SERPERIOR,
        .moves = {MOVE_LEECH_SEED, MOVE_SUBSTITUTE, MOVE_TOXIC, MOVE_LEAF_STORM},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_EMBOAR_1] = {
        .species = SPECIES_EMBOAR,
        .moves = {MOVE_FLARE_BLITZ, MOVE_SUPERPOWER, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_EMBOAR_2] = {
        .species = SPECIES_EMBOAR,
        .moves = {MOVE_FLARE_BLITZ, MOVE_HAMMER_ARM, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_EXCADRILL_1] = {
        .species = SPECIES_EXCADRILL,
        .moves = {MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_EXCADRILL_2] = {
        .species = SPECIES_EXCADRILL,
        .moves = {MOVE_RAPID_SPIN, MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CONKELDURR_1] = {
        .species = SPECIES_CONKELDURR,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_KNOCK_OFF, MOVE_ICE_PUNCH},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CONKELDURR_2] = {
        .species = SPECIES_CONKELDURR,
        .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_KNOCK_OFF},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KROOKODILE_1] = {
        .species = SPECIES_KROOKODILE,
        .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_STONE_EDGE, MOVE_CRUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KROOKODILE_2] = {
        .species = SPECIES_KROOKODILE,
        .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK, MOVE_TAUNT},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DARMANITAN_1] = {
        .species = SPECIES_DARMANITAN,
        .moves = {MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE, MOVE_ICE_PUNCH, MOVE_SUPERPOWER},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DARMANITAN_2] = {
        .species = SPECIES_DARMANITAN,
        .moves = {MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHANDELURE_1] = {
        .species = SPECIES_CHANDELURE,
        .moves = {MOVE_FIRE_BLAST, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL, MOVE_PAIN_SPLIT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHANDELURE_2] = {
        .species = SPECIES_CHANDELURE,
        .moves = {MOVE_FIRE_BLAST, MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HAXORUS_1] = {
        .species = SPECIES_HAXORUS,
        .moves = {MOVE_DRAGON_DANCE, MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_POISON_JAB},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HAXORUS_2] = {
        .species = SPECIES_HAXORUS,
        .moves = {MOVE_SWORDS_DANCE, MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_POISON_JAB},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VOLCARONA_1] = {
        .species = SPECIES_VOLCARONA,
        .moves = {MOVE_QUIVER_DANCE, MOVE_FIERY_DANCE, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VOLCARONA_2] = {
        .species = SPECIES_VOLCARONA,
        .moves = {MOVE_QUIVER_DANCE, MOVE_FIRE_BLAST, MOVE_BUG_BUZZ, MOVE_PSYCHIC},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HYDREIGON_1] = {
        .species = SPECIES_HYDREIGON,
        .moves = {MOVE_DRACO_METEOR, MOVE_DARK_PULSE, MOVE_FIRE_BLAST, MOVE_EARTH_POWER},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HYDREIGON_2] = {
        .species = SPECIES_HYDREIGON,
        .moves = {MOVE_DARK_PULSE, MOVE_DRACO_METEOR, MOVE_U_TURN, MOVE_FLASH_CANNON},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BISHARP_1] = {
        .species = SPECIES_BISHARP,
        .moves = {MOVE_SWORDS_DANCE, MOVE_KNOCK_OFF, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BISHARP_2] = {
        .species = SPECIES_BISHARP,
        .moves = {MOVE_KNOCK_OFF, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_STONE_EDGE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FERROTHORN_1] = {
        .species = SPECIES_FERROTHORN,
        .moves = {MOVE_STEALTH_ROCK, MOVE_GYRO_BALL, MOVE_POWER_WHIP, MOVE_LEECH_SEED},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_SASSY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FERROTHORN_2] = {
        .species = SPECIES_FERROTHORN,
        .moves = {MOVE_SPIKES, MOVE_THUNDER_WAVE, MOVE_POWER_WHIP, MOVE_PROTECT},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_REUNICLUS_1] = {
        .species = SPECIES_REUNICLUS,
        .moves = {MOVE_CALM_MIND, MOVE_PSYSHOCK, MOVE_FOCUS_BLAST, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_REUNICLUS_2] = {
        .species = SPECIES_REUNICLUS,
        .moves = {MOVE_TOXIC, MOVE_PSYSHOCK, MOVE_FOCUS_BLAST, MOVE_RECOVER},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GIGALITH_1] = {
        .species = SPECIES_GIGALITH,
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_EXPLOSION},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GIGALITH_2] = {
        .species = SPECIES_GIGALITH,
        .moves = {MOVE_ROCK_POLISH, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_SUPERPOWER},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BRAVIARY_1] = {
        .species = SPECIES_BRAVIARY,
        .moves = {MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_U_TURN, MOVE_BULK_UP},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BRAVIARY_2] = {
        .species = SPECIES_BRAVIARY,
        .moves = {MOVE_BRAVE_BIRD, MOVE_SUPERPOWER, MOVE_U_TURN, MOVE_TAILWIND},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MANDIBUZZ_1] = {
        .species = SPECIES_MANDIBUZZ,
        .moves = {MOVE_FOUL_PLAY, MOVE_TOXIC, MOVE_ROOST, MOVE_DEFOG},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MANDIBUZZ_2] = {
        .species = SPECIES_MANDIBUZZ,
        .moves = {MOVE_KNOCK_OFF, MOVE_FOUL_PLAY, MOVE_ROOST, MOVE_WHIRLWIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ZOROARK_1] = {
        .species = SPECIES_ZOROARK,
        .moves = {MOVE_NASTY_PLOT, MOVE_DARK_PULSE, MOVE_FLAMETHROWER, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ZOROARK_2] = {
        .species = SPECIES_ZOROARK,
        .moves = {MOVE_DARK_PULSE, MOVE_FLAMETHROWER, MOVE_U_TURN, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GOLURK_1] = {
        .species = SPECIES_GOLURK,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_PUNCH, MOVE_ICE_PUNCH, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GOLURK_2] = {
        .species = SPECIES_GOLURK,
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_SHADOW_PUNCH, MOVE_HAMMER_ARM},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MIENSHAO_1] = {
        .species = SPECIES_MIENSHAO,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_U_TURN, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MIENSHAO_2] = {
        .species = SPECIES_MIENSHAO,
        .moves = {MOVE_FAKE_OUT, MOVE_HIGH_JUMP_KICK, MOVE_U_TURN, MOVE_STONE_EDGE},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_COBALION_1] = {
        .species = SPECIES_COBALION,
        .moves = {MOVE_SWORDS_DANCE, MOVE_SACRED_SWORD, MOVE_IRON_HEAD, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_COBALION_2] = {
        .species = SPECIES_COBALION,
        .moves = {MOVE_STEALTH_ROCK, MOVE_IRON_HEAD, MOVE_CLOSE_COMBAT, MOVE_TAUNT},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TERRAKION_1] = {
        .species = SPECIES_TERRAKION,
        .moves = {MOVE_SWORDS_DANCE, MOVE_SACRED_SWORD, MOVE_STONE_EDGE, MOVE_CLOSE_COMBAT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TERRAKION_2] = {
        .species = SPECIES_TERRAKION,
        .moves = {MOVE_STONE_EDGE, MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VIRIZION_1] = {
        .species = SPECIES_VIRIZION,
        .moves = {MOVE_SWORDS_DANCE, MOVE_LEAF_BLADE, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VIRIZION_2] = {
        .species = SPECIES_VIRIZION,
        .moves = {MOVE_CALM_MIND, MOVE_GIGA_DRAIN, MOVE_FOCUS_BLAST, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TORNADUS_1] = {
        .species = SPECIES_TORNADUS,
        .moves = {MOVE_HURRICANE, MOVE_FOCUS_BLAST, MOVE_TAUNT, MOVE_U_TURN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TORNADUS_2] = {
        .species = SPECIES_TORNADUS,
        .moves = {MOVE_HURRICANE, MOVE_FOCUS_BLAST, MOVE_SUBSTITUTE, MOVE_TAILWIND},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_THUNDURUS_1] = {
        .species = SPECIES_THUNDURUS,
        .moves = {MOVE_THUNDER, MOVE_FOCUS_BLAST, MOVE_SLUDGE_WAVE, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_THUNDURUS_2] = {
        .species = SPECIES_THUNDURUS,
        .moves = {MOVE_WILD_CHARGE, MOVE_SUPERPOWER, MOVE_KNOCK_OFF, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LANDORUS_1] = {
        .species = SPECIES_LANDORUS,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_U_TURN, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LANDORUS_2] = {
        .species = SPECIES_LANDORUS,
        .moves = {MOVE_EARTH_POWER, MOVE_FOCUS_BLAST, MOVE_SLUDGE_WAVE, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHESNAUGHT_1] = {
        .species = SPECIES_CHESNAUGHT,
        .moves = {MOVE_SPIKY_SHIELD, MOVE_WOOD_HAMMER, MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHESNAUGHT_2] = {
        .species = SPECIES_CHESNAUGHT,
        .moves = {MOVE_WOOD_HAMMER, MOVE_HAMMER_ARM, MOVE_KNOCK_OFF, MOVE_STONE_EDGE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DELPHOX_1] = {
        .species = SPECIES_DELPHOX,
        .moves = {MOVE_FIRE_BLAST, MOVE_PSYCHIC, MOVE_MYSTICAL_FIRE, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DELPHOX_2] = {
        .species = SPECIES_DELPHOX,
        .moves = {MOVE_FIRE_BLAST, MOVE_PSYSHOCK, MOVE_FOCUS_BLAST, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GRENINJA_1] = {
        .species = SPECIES_GRENINJA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DARK_PULSE, MOVE_ICE_BEAM, MOVE_WATER_SHURIKEN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GRENINJA_2] = {
        .species = SPECIES_GRENINJA,
        .moves = {MOVE_U_TURN, MOVE_ICE_BEAM, MOVE_DARK_PULSE, MOVE_WATER_SHURIKEN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TALONFLAME_1] = {
        .species = SPECIES_TALONFLAME,
        .moves = {MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TALONFLAME_2] = {
        .species = SPECIES_TALONFLAME,
        .moves = {MOVE_BRAVE_BIRD, MOVE_ROOST, MOVE_WILL_O_WISP, MOVE_U_TURN},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PYROAR_1] = {
        .species = SPECIES_PYROAR,
        .moves = {MOVE_FIRE_BLAST, MOVE_HYPER_VOICE, MOVE_DARK_PULSE, MOVE_WILL_O_WISP},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PYROAR_2] = {
        .species = SPECIES_PYROAR,
        .moves = {MOVE_FIRE_BLAST, MOVE_HYPER_VOICE, MOVE_NOBLE_ROAR, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FLORGES_1] = {
        .species = SPECIES_FLORGES,
        .moves = {MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_GIGA_DRAIN, MOVE_WISH},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FLORGES_2] = {
        .species = SPECIES_FLORGES,
        .moves = {MOVE_MOONBLAST, MOVE_TOXIC, MOVE_SYNTHESIS, MOVE_PSYCHIC},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PANGORO_1] = {
        .species = SPECIES_PANGORO,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, MOVE_BULK_UP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PANGORO_2] = {
        .species = SPECIES_PANGORO,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_ICE_PUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MEOWSTIC_1] = {
        .species = SPECIES_MEOWSTIC,
        .moves = {MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_PSYSHOCK},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MEOWSTIC_2] = {
        .species = SPECIES_MEOWSTIC,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AEGISLASH_1] = {
        .species = SPECIES_AEGISLASH,
        .moves = {MOVE_KINGS_SHIELD, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_SHADOW_SNEAK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AEGISLASH_2] = {
        .species = SPECIES_AEGISLASH,
        .moves = {MOVE_IRON_HEAD, MOVE_SHADOW_SNEAK, MOVE_SWORDS_DANCE, MOVE_KINGS_SHIELD},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MALAMAR_1] = {
        .species = SPECIES_MALAMAR,
        .moves = {MOVE_SUPERPOWER, MOVE_PSYCHIC, MOVE_KNOCK_OFF, MOVE_TOPSY_TURVY},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MALAMAR_2] = {
        .species = SPECIES_MALAMAR,
        .moves = {MOVE_SUPERPOWER, MOVE_PSYCHIC, MOVE_SUCKER_PUNCH, MOVE_KNOCK_OFF},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BARBARACLE_1] = {
        .species = SPECIES_BARBARACLE,
        .moves = {MOVE_SHELL_SMASH, MOVE_STONE_EDGE, MOVE_CRABHAMMER, MOVE_ICE_PUNCH},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BARBARACLE_2] = {
        .species = SPECIES_BARBARACLE,
        .moves = {MOVE_STONE_EDGE, MOVE_CRABHAMMER, MOVE_KNOCK_OFF, MOVE_AQUA_JET},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DRAGALGE_1] = {
        .species = SPECIES_DRAGALGE,
        .moves = {MOVE_SLUDGE_WAVE, MOVE_DRACO_METEOR, MOVE_FOCUS_BLAST, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DRAGALGE_2] = {
        .species = SPECIES_DRAGALGE,
        .moves = {MOVE_SLUDGE_WAVE, MOVE_DRACO_METEOR, MOVE_SURF, MOVE_TOXIC},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CLAWITZER_1] = {
        .species = SPECIES_CLAWITZER,
        .moves = {MOVE_WATER_PULSE, MOVE_DARK_PULSE, MOVE_AURA_SPHERE, MOVE_ICE_BEAM},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CLAWITZER_2] = {
        .species = SPECIES_CLAWITZER,
        .moves = {MOVE_WATER_PULSE, MOVE_DARK_PULSE, MOVE_U_TURN, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HELIOLISK_1] = {
        .species = SPECIES_HELIOLISK,
        .moves = {MOVE_THUNDERBOLT, MOVE_SURF, MOVE_HYPER_VOICE, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HELIOLISK_2] = {
        .species = SPECIES_HELIOLISK,
        .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_HYPER_VOICE, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TYRANTRUM_1] = {
        .species = SPECIES_TYRANTRUM,
        .moves = {MOVE_HEAD_SMASH, MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TYRANTRUM_2] = {
        .species = SPECIES_TYRANTRUM,
        .moves = {MOVE_HEAD_SMASH, MOVE_DRAGON_CLAW, MOVE_CRUNCH, MOVE_EARTHQUAKE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AURORUS_1] = {
        .species = SPECIES_AURORUS,
        .moves = {MOVE_FREEZE_DRY, MOVE_EARTH_POWER, MOVE_THUNDERBOLT, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AURORUS_2] = {
        .species = SPECIES_AURORUS,
        .moves = {MOVE_FREEZE_DRY, MOVE_EARTH_POWER, MOVE_THUNDERBOLT, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TREVENANT_1] = {
        .species = SPECIES_TREVENANT,
        .moves = {MOVE_WOOD_HAMMER, MOVE_SHADOW_CLAW, MOVE_WILL_O_WISP, MOVE_LEECH_SEED},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TREVENANT_2] = {
        .species = SPECIES_TREVENANT,
        .moves = {MOVE_WOOD_HAMMER, MOVE_PHANTOM_FORCE, MOVE_SWORDS_DANCE, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AVALUGG_1] = {
        .species = SPECIES_AVALUGG,
        .moves = {MOVE_AVALANCHE, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK, MOVE_BODY_SLAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AVALUGG_2] = {
        .species = SPECIES_AVALUGG,
        .moves = {MOVE_AVALANCHE, MOVE_CRUNCH, MOVE_TOXIC, MOVE_CURSE},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NOIVERN_1] = {
        .species = SPECIES_NOIVERN,
        .moves = {MOVE_DRACO_METEOR, MOVE_HURRICANE, MOVE_BOOMBURST, MOVE_U_TURN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NOIVERN_2] = {
        .species = SPECIES_NOIVERN,
        .moves = {MOVE_DRACO_METEOR, MOVE_BOOMBURST, MOVE_U_TURN, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KLEFKI_1] = {
        .species = SPECIES_KLEFKI,
        .moves = {MOVE_SPIKES, MOVE_THUNDER_WAVE, MOVE_PLAY_ROUGH, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KLEFKI_2] = {
        .species = SPECIES_KLEFKI,
        .moves = {MOVE_SWAGGER, MOVE_FOUL_PLAY, MOVE_PLAY_ROUGH, MOVE_TOXIC},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HAWLUCHA_1] = {
        .species = SPECIES_HAWLUCHA,
        .moves = {MOVE_SWORDS_DANCE, MOVE_ACROBATICS, MOVE_HIGH_JUMP_KICK, MOVE_STONE_EDGE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HAWLUCHA_2] = {
        .species = SPECIES_HAWLUCHA,
        .moves = {MOVE_ACROBATICS, MOVE_HIGH_JUMP_KICK, MOVE_ENCORE, MOVE_ROOST},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GOODRA_1] = {
        .species = SPECIES_GOODRA,
        .moves = {MOVE_DRACO_METEOR, MOVE_FIRE_BLAST, MOVE_THUNDERBOLT, MOVE_DRAGON_TAIL},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GOODRA_2] = {
        .species = SPECIES_GOODRA,
        .moves = {MOVE_DRACO_METEOR, MOVE_FIRE_BLAST, MOVE_SLUDGE_WAVE, MOVE_REST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DECIDUEYE_1] = {
        .species = SPECIES_DECIDUEYE,
        .moves = {MOVE_SPIRIT_SHACKLE, MOVE_LEAF_BLADE, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DECIDUEYE_2] = {
        .species = SPECIES_DECIDUEYE,
        .moves = {MOVE_SPIRIT_SHACKLE, MOVE_LEAF_BLADE, MOVE_ROOST, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_INCINEROAR_1] = {
        .species = SPECIES_INCINEROAR,
        .moves = {MOVE_DARKEST_LARIAT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_INCINEROAR_2] = {
        .species = SPECIES_INCINEROAR,
        .moves = {MOVE_DARKEST_LARIAT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_WILL_O_WISP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PRIMARINA_1] = {
        .species = SPECIES_PRIMARINA,
        .moves = {MOVE_SPARKLING_ARIA, MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PRIMARINA_2] = {
        .species = SPECIES_PRIMARINA,
        .moves = {MOVE_SPARKLING_ARIA, MOVE_MOONBLAST, MOVE_ICE_BEAM, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TOUCANNON_1] = {
        .species = SPECIES_TOUCANNON,
        .moves = {MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF, MOVE_FACADE, MOVE_ROOST},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TOUCANNON_2] = {
        .species = SPECIES_TOUCANNON,
        .moves = {MOVE_ROCK_SLIDE, MOVE_IRON_HEAD, MOVE_FACADE, MOVE_TAILWIND},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VIKAVOLT_1] = {
        .species = SPECIES_VIKAVOLT,
        .moves = {MOVE_THUNDERBOLT, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_STICKY_WEB},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_VIKAVOLT_2] = {
        .species = SPECIES_VIKAVOLT,
        .moves = {MOVE_VOLT_SWITCH, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_STICKY_WEB},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LYCANROC_1] = {
        .species = SPECIES_LYCANROC,
        .moves = {MOVE_ACCELEROCK, MOVE_STONE_EDGE, MOVE_CRUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LYCANROC_2] = {
        .species = SPECIES_LYCANROC,
        .moves = {MOVE_STONE_EDGE, MOVE_CRUNCH, MOVE_FIRE_FANG, MOVE_ACCELEROCK},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARAQUANID_1] = {
        .species = SPECIES_ARAQUANID,
        .moves = {MOVE_SCALD, MOVE_LEECH_LIFE, MOVE_STICKY_WEB, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARAQUANID_2] = {
        .species = SPECIES_ARAQUANID,
        .moves = {MOVE_LIQUIDATION, MOVE_LEECH_LIFE, MOVE_AQUA_JET, MOVE_STICKY_WEB},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LURANTIS_1] = {
        .species = SPECIES_LURANTIS,
        .moves = {MOVE_SOLAR_BLADE, MOVE_SWORDS_DANCE, MOVE_KNOCK_OFF, MOVE_SUPERPOWER},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LURANTIS_2] = {
        .species = SPECIES_LURANTIS,
        .moves = {MOVE_LEAF_BLADE, MOVE_SYNTHESIS, MOVE_KNOCK_OFF, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SALAZZLE_1] = {
        .species = SPECIES_SALAZZLE,
        .moves = {MOVE_FIRE_BLAST, MOVE_SLUDGE_WAVE, MOVE_TOXIC, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SALAZZLE_2] = {
        .species = SPECIES_SALAZZLE,
        .moves = {MOVE_FIRE_BLAST, MOVE_SLUDGE_WAVE, MOVE_DRAGON_PULSE, MOVE_TOXIC},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BEWEAR_1] = {
        .species = SPECIES_BEWEAR,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_BULK_UP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BEWEAR_2] = {
        .species = SPECIES_BEWEAR,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TSAREENA_1] = {
        .species = SPECIES_TSAREENA,
        .moves = {MOVE_TROP_KICK, MOVE_HIGH_JUMP_KICK, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TSAREENA_2] = {
        .species = SPECIES_TSAREENA,
        .moves = {MOVE_TROP_KICK, MOVE_HIGH_JUMP_KICK, MOVE_RAPID_SPIN, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MIMIKYU_1] = {
        .species = SPECIES_MIMIKYU,
        .moves = {MOVE_PLAY_ROUGH, MOVE_SHADOW_CLAW, MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MIMIKYU_2] = {
        .species = SPECIES_MIMIKYU,
        .moves = {MOVE_PLAY_ROUGH, MOVE_SHADOW_SNEAK, MOVE_WILL_O_WISP, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TOXAPEX_1] = {
        .species = SPECIES_TOXAPEX,
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_RECOVER, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TOXAPEX_2] = {
        .species = SPECIES_TOXAPEX,
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_BATON_PASS, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SILVALLY_1] = {
        .species = SPECIES_SILVALLY,
        .moves = {MOVE_MULTI_ATTACK, MOVE_IRON_HEAD, MOVE_CRUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SILVALLY_2] = {
        .species = SPECIES_SILVALLY,
        .moves = {MOVE_MULTI_ATTACK, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KOMMO_O_1] = {
        .species = SPECIES_KOMMO_O,
        .moves = {MOVE_CLANGOROUS_SOUL, MOVE_CLOSE_COMBAT, MOVE_DRAGON_CLAW, MOVE_POISON_JAB},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KOMMO_O_2] = {
        .species = SPECIES_KOMMO_O,
        .moves = {MOVE_DRACO_METEOR, MOVE_CLOSE_COMBAT, MOVE_FLAMETHROWER, MOVE_TOXIC},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 128, 0, 252, 128, 0),
        .nature = NATURE_NAIVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TAPU_KOKO_1] = {
        .species = SPECIES_TAPU_KOKO,
        .moves = {MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_VOLT_SWITCH, MOVE_TAUNT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TAPU_KOKO_2] = {
        .species = SPECIES_TAPU_KOKO,
        .moves = {MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_U_TURN, MOVE_SUBSTITUTE},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TAPU_LELE_1] = {
        .species = SPECIES_TAPU_LELE,
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_FOCUS_BLAST, MOVE_CALM_MIND},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TAPU_LELE_2] = {
        .species = SPECIES_TAPU_LELE,
        .moves = {MOVE_PSYSHOCK, MOVE_MOONBLAST, MOVE_FOCUS_BLAST, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TAPU_BULU_1] = {
        .species = SPECIES_TAPU_BULU,
        .moves = {MOVE_WOOD_HAMMER, MOVE_PLAY_ROUGH, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TAPU_BULU_2] = {
        .species = SPECIES_TAPU_BULU,
        .moves = {MOVE_WOOD_HAMMER, MOVE_PLAY_ROUGH, MOVE_SYNTHESIS, MOVE_LEECH_SEED},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TAPU_FINI_1] = {
        .species = SPECIES_TAPU_FINI,
        .moves = {MOVE_MOONBLAST, MOVE_SCALD, MOVE_CALM_MIND, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TAPU_FINI_2] = {
        .species = SPECIES_TAPU_FINI,
        .moves = {MOVE_MOONBLAST, MOVE_SCALD, MOVE_NATURES_MADNESS, MOVE_DEFOG},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RAICHU_ALOLA_1] = {
        .species = SPECIES_RAICHU_ALOLA,
        .moves = {MOVE_THUNDERBOLT, MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RAICHU_ALOLA_2] = {
        .species = SPECIES_RAICHU_ALOLA,
        .moves = {MOVE_THUNDERBOLT, MOVE_PSYCHIC, MOVE_VOLT_SWITCH, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NINETALES_ALOLA_1] = {
        .species = SPECIES_NINETALES_ALOLA,
        .moves = {MOVE_AURORA_VEIL, MOVE_FREEZE_DRY, MOVE_MOONBLAST, MOVE_ENCORE},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_NINETALES_ALOLA_2] = {
        .species = SPECIES_NINETALES_ALOLA,
        .moves = {MOVE_FREEZE_DRY, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAROWAK_ALOLA_1] = {
        .species = SPECIES_MAROWAK_ALOLA,
        .moves = {MOVE_FLARE_BLITZ, MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MAROWAK_ALOLA_2] = {
        .species = SPECIES_MAROWAK_ALOLA,
        .moves = {MOVE_FLARE_BLITZ, MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_SUBSTITUTE},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MUK_ALOLA_1] = {
        .species = SPECIES_MUK_ALOLA,
        .moves = {MOVE_GUNK_SHOT, MOVE_KNOCK_OFF, MOVE_SHADOW_SNEAK, MOVE_CURSE},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MUK_ALOLA_2] = {
        .species = SPECIES_MUK_ALOLA,
        .moves = {MOVE_GUNK_SHOT, MOVE_KNOCK_OFF, MOVE_FIRE_PUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GOLEM_ALOLA_1] = {
        .species = SPECIES_GOLEM_ALOLA,
        .moves = {MOVE_STONE_EDGE, MOVE_WILD_CHARGE, MOVE_EARTHQUAKE, MOVE_EXPLOSION},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GOLEM_ALOLA_2] = {
        .species = SPECIES_GOLEM_ALOLA,
        .moves = {MOVE_STONE_EDGE, MOVE_WILD_CHARGE, MOVE_STEALTH_ROCK, MOVE_EXPLOSION},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RILLABOOM_1] = {
        .species = SPECIES_RILLABOOM,
        .moves = {MOVE_DRUM_BEATING, MOVE_WOOD_HAMMER, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RILLABOOM_2] = {
        .species = SPECIES_RILLABOOM,
        .moves = {MOVE_DRUM_BEATING, MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_SUPERPOWER},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CINDERACE_1] = {
        .species = SPECIES_CINDERACE,
        .moves = {MOVE_PYRO_BALL, MOVE_HIGH_JUMP_KICK, MOVE_SUCKER_PUNCH, MOVE_U_TURN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CINDERACE_2] = {
        .species = SPECIES_CINDERACE,
        .moves = {MOVE_PYRO_BALL, MOVE_HIGH_JUMP_KICK, MOVE_SUCKER_PUNCH, MOVE_GUNK_SHOT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_INTELEON_1] = {
        .species = SPECIES_INTELEON,
        .moves = {MOVE_SNIPE_SHOT, MOVE_ICE_BEAM, MOVE_DARK_PULSE, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_INTELEON_2] = {
        .species = SPECIES_INTELEON,
        .moves = {MOVE_SNIPE_SHOT, MOVE_ICE_BEAM, MOVE_DARK_PULSE, MOVE_AGILITY},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CORVIKNIGHT_1] = {
        .species = SPECIES_CORVIKNIGHT,
        .moves = {MOVE_BRAVE_BIRD, MOVE_IRON_DEFENSE, MOVE_ROOST, MOVE_U_TURN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CORVIKNIGHT_2] = {
        .species = SPECIES_CORVIKNIGHT,
        .moves = {MOVE_BRAVE_BIRD, MOVE_BODY_PRESS, MOVE_ROOST, MOVE_TAUNT},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TOXTRICITY_1] = {
        .species = SPECIES_TOXTRICITY,
        .moves = {MOVE_OVERDRIVE, MOVE_SLUDGE_WAVE, MOVE_VOLT_SWITCH, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TOXTRICITY_2] = {
        .species = SPECIES_TOXTRICITY,
        .moves = {MOVE_OVERDRIVE, MOVE_SLUDGE_WAVE, MOVE_VOLT_SWITCH, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CENTISKORCH_1] = {
        .species = SPECIES_CENTISKORCH,
        .moves = {MOVE_FIRE_LASH, MOVE_LEECH_LIFE, MOVE_KNOCK_OFF, MOVE_COIL},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CENTISKORCH_2] = {
        .species = SPECIES_CENTISKORCH,
        .moves = {MOVE_FIRE_LASH, MOVE_LEECH_LIFE, MOVE_KNOCK_OFF, MOVE_FIRST_IMPRESSION},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GRIMMSNARL_1] = {
        .species = SPECIES_GRIMMSNARL,
        .moves = {MOVE_SPIRIT_BREAK, MOVE_SUCKER_PUNCH, MOVE_BULK_UP, MOVE_DRAIN_PUNCH},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GRIMMSNARL_2] = {
        .species = SPECIES_GRIMMSNARL,
        .moves = {MOVE_SPIRIT_BREAK, MOVE_SUCKER_PUNCH, MOVE_THUNDER_WAVE, MOVE_TAUNT},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SANDACONDA_1] = {
        .species = SPECIES_SANDACONDA,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_GLARE, MOVE_COIL},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SANDACONDA_2] = {
        .species = SPECIES_SANDACONDA,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_STEALTH_ROCK, MOVE_GLARE},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BARRASKEWDA_1] = {
        .species = SPECIES_BARRASKEWDA,
        .moves = {MOVE_LIQUIDATION, MOVE_CLOSE_COMBAT, MOVE_POISON_JAB, MOVE_PSYCHIC_FANGS},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BARRASKEWDA_2] = {
        .species = SPECIES_BARRASKEWDA,
        .moves = {MOVE_LIQUIDATION, MOVE_CLOSE_COMBAT, MOVE_WAVE_CRASH, MOVE_POISON_JAB},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_COALOSSAL_1] = {
        .species = SPECIES_COALOSSAL,
        .moves = {MOVE_ROCK_SLIDE, MOVE_FLAMETHROWER, MOVE_STEALTH_ROCK, MOVE_WILL_O_WISP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_COALOSSAL_2] = {
        .species = SPECIES_COALOSSAL,
        .moves = {MOVE_ROCK_SLIDE, MOVE_FLAMETHROWER, MOVE_EARTHQUAKE, MOVE_EXPLOSION},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DRAGAPULT_1] = {
        .species = SPECIES_DRAGAPULT,
        .moves = {MOVE_DRAGON_DARTS, MOVE_SHADOW_BALL, MOVE_U_TURN, MOVE_FIRE_BLAST},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DRAGAPULT_2] = {
        .species = SPECIES_DRAGAPULT,
        .moves = {MOVE_DRAGON_DARTS, MOVE_PHANTOM_FORCE, MOVE_SUCKER_PUNCH, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RUNERIGUS_1] = {
        .species = SPECIES_RUNERIGUS,
        .moves = {MOVE_WILL_O_WISP, MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RUNERIGUS_2] = {
        .species = SPECIES_RUNERIGUS,
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_WILL_O_WISP, MOVE_TOXIC},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_COPPERAJAH_1] = {
        .species = SPECIES_COPPERAJAH,
        .moves = {MOVE_BODY_PRESS, MOVE_HEAVY_SLAM, MOVE_EARTHQUAKE, MOVE_IRON_HEAD},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_COPPERAJAH_2] = {
        .species = SPECIES_COPPERAJAH,
        .moves = {MOVE_HEAVY_SLAM, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HATTERENE_1] = {
        .species = SPECIES_HATTERENE,
        .moves = {MOVE_PLAY_ROUGH, MOVE_PSYCHIC, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HATTERENE_2] = {
        .species = SPECIES_HATTERENE,
        .moves = {MOVE_PLAY_ROUGH, MOVE_PSYCHIC, MOVE_MYSTICAL_FIRE, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_OBSTAGOON_1] = {
        .species = SPECIES_OBSTAGOON,
        .moves = {MOVE_NIGHT_SLASH, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_OBSTAGOON_2] = {
        .species = SPECIES_OBSTAGOON,
        .moves = {MOVE_NIGHT_SLASH, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_FACADE},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GRAPPLOCT_1] = {
        .species = SPECIES_GRAPPLOCT,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_OCTOLOCK, MOVE_KNOCK_OFF, MOVE_BULK_UP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GRAPPLOCT_2] = {
        .species = SPECIES_GRAPPLOCT,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_OCTOLOCK, MOVE_ICE_PUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SIRFETCHD_1] = {
        .species = SPECIES_SIRFETCHD,
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SIRFETCHD_2] = {
        .species = SPECIES_SIRFETCHD,
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_CLOSE_COMBAT, MOVE_LEAF_BLADE, MOVE_KNOCK_OFF},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MR_RIME_1] = {
        .species = SPECIES_MR_RIME,
        .moves = {MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MR_RIME_2] = {
        .species = SPECIES_MR_RIME,
        .moves = {MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KLEAVOR_1] = {
        .species = SPECIES_KLEAVOR,
        .moves = {MOVE_X_SCISSOR, MOVE_STONE_EDGE, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KLEAVOR_2] = {
        .species = SPECIES_KLEAVOR,
        .moves = {MOVE_X_SCISSOR, MOVE_STONE_EDGE, MOVE_CLOSE_COMBAT, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WYRDEER_1] = {
        .species = SPECIES_WYRDEER,
        .moves = {MOVE_PSYCHIC, MOVE_EARTH_POWER, MOVE_HYPER_VOICE, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WYRDEER_2] = {
        .species = SPECIES_WYRDEER,
        .moves = {MOVE_PSYSHOCK, MOVE_EARTH_POWER, MOVE_HYPER_VOICE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_REGIELEKI_1] = {
        .species = SPECIES_REGIELEKI,
        .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_EXPLOSION, MOVE_RISING_VOLTAGE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_REGIELEKI_2] = {
        .species = SPECIES_REGIELEKI,
        .moves = {MOVE_WILD_CHARGE, MOVE_EXPLOSION, MOVE_THUNDER, MOVE_ZEN_HEADBUTT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_REGIDRAGO_1] = {
        .species = SPECIES_REGIDRAGO,
        .moves = {MOVE_DRAGON_ENERGY, MOVE_FIRE_BLAST, MOVE_THUNDERBOLT, MOVE_EARTH_POWER},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_REGIDRAGO_2] = {
        .species = SPECIES_REGIDRAGO,
        .moves = {MOVE_DRAGON_ENERGY, MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ENAMORUS_1] = {
        .species = SPECIES_ENAMORUS,
        .moves = {MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_EARTH_POWER, MOVE_CALM_MIND},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ENAMORUS_2] = {
        .species = SPECIES_ENAMORUS,
        .moves = {MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_U_TURN, MOVE_TAUNT},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DARMANITAN_GALAR_1] = {
        .species = SPECIES_DARMANITAN_GALAR,
        .moves = {MOVE_ICE_HAMMER, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DARMANITAN_GALAR_2] = {
        .species = SPECIES_DARMANITAN_GALAR,
        .moves = {MOVE_ICE_HAMMER, MOVE_EARTHQUAKE, MOVE_U_TURN, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MEOWSCARADA_1] = {
        .species = SPECIES_MEOWSCARADA,
        .moves = {MOVE_FLOWER_TRICK, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MEOWSCARADA_2] = {
        .species = SPECIES_MEOWSCARADA,
        .moves = {MOVE_FLOWER_TRICK, MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_TAUNT},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SKELEDIRGE_1] = {
        .species = SPECIES_SKELEDIRGE,
        .moves = {MOVE_TORCH_SONG, MOVE_SHADOW_BALL, MOVE_SLACK_OFF, MOVE_WILL_O_WISP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SKELEDIRGE_2] = {
        .species = SPECIES_SKELEDIRGE,
        .moves = {MOVE_TORCH_SONG, MOVE_SHADOW_BALL, MOVE_EARTH_POWER, MOVE_SLACK_OFF},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_QUAQUAVAL_1] = {
        .species = SPECIES_QUAQUAVAL,
        .moves = {MOVE_AQUA_STEP, MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_QUAQUAVAL_2] = {
        .species = SPECIES_QUAQUAVAL,
        .moves = {MOVE_AQUA_STEP, MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_KNOCK_OFF},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KINGAMBIT_1] = {
        .species = SPECIES_KINGAMBIT,
        .moves = {MOVE_KOWTOW_CLEAVE, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_KINGAMBIT_2] = {
        .species = SPECIES_KINGAMBIT,
        .moves = {MOVE_KOWTOW_CLEAVE, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_KNOCK_OFF},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BAXCALIBUR_1] = {
        .species = SPECIES_BAXCALIBUR,
        .moves = {MOVE_GLAIVE_RUSH, MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BAXCALIBUR_2] = {
        .species = SPECIES_BAXCALIBUR,
        .moves = {MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_OUTRAGE, MOVE_ICE_SHARD},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARMAROUGE_1] = {
        .species = SPECIES_ARMAROUGE,
        .moves = {MOVE_ARMOR_CANNON, MOVE_PSYSHOCK, MOVE_FOCUS_BLAST, MOVE_CALM_MIND},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARMAROUGE_2] = {
        .species = SPECIES_ARMAROUGE,
        .moves = {MOVE_ARMOR_CANNON, MOVE_PSYSHOCK, MOVE_FOCUS_BLAST, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CERULEDGE_1] = {
        .species = SPECIES_CERULEDGE,
        .moves = {MOVE_BITTER_BLADE, MOVE_SHADOW_SNEAK, MOVE_SWORDS_DANCE, MOVE_POISON_JAB},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CERULEDGE_2] = {
        .species = SPECIES_CERULEDGE,
        .moves = {MOVE_BITTER_BLADE, MOVE_SHADOW_SNEAK, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DONDOZO_1] = {
        .species = SPECIES_DONDOZO,
        .moves = {MOVE_WAVE_CRASH, MOVE_ORDER_UP, MOVE_EARTHQUAKE, MOVE_REST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DONDOZO_2] = {
        .species = SPECIES_DONDOZO,
        .moves = {MOVE_WAVE_CRASH, MOVE_ORDER_UP, MOVE_EARTHQUAKE, MOVE_CURSE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TINKATON_1] = {
        .species = SPECIES_TINKATON,
        .moves = {MOVE_GIGATON_HAMMER, MOVE_PLAY_ROUGH, MOVE_ENCORE, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TINKATON_2] = {
        .species = SPECIES_TINKATON,
        .moves = {MOVE_GIGATON_HAMMER, MOVE_PLAY_ROUGH, MOVE_KNOCK_OFF, MOVE_TAUNT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BELLIBOLT_1] = {
        .species = SPECIES_BELLIBOLT,
        .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_MUD_SHOT, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_BELLIBOLT_2] = {
        .species = SPECIES_BELLIBOLT,
        .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_REST, MOVE_TOXIC},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CLODSIRE_1] = {
        .species = SPECIES_CLODSIRE,
        .moves = {MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_RECOVER, MOVE_CURSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CLODSIRE_2] = {
        .species = SPECIES_CLODSIRE,
        .moves = {MOVE_EARTHQUAKE, MOVE_POISON_JAB, MOVE_RECOVER, MOVE_TOXIC},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ANNIHILAPE_1] = {
        .species = SPECIES_ANNIHILAPE,
        .moves = {MOVE_RAGE_FIST, MOVE_CLOSE_COMBAT, MOVE_SHADOW_CLAW, MOVE_BULK_UP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ANNIHILAPE_2] = {
        .species = SPECIES_ANNIHILAPE,
        .moves = {MOVE_RAGE_FIST, MOVE_CLOSE_COMBAT, MOVE_SHADOW_CLAW, MOVE_DRAIN_PUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GLIMMORA_1] = {
        .species = SPECIES_GLIMMORA,
        .moves = {MOVE_POWER_GEM, MOVE_SLUDGE_WAVE, MOVE_EARTH_POWER, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GLIMMORA_2] = {
        .species = SPECIES_GLIMMORA,
        .moves = {MOVE_MORTAL_SPIN, MOVE_SLUDGE_WAVE, MOVE_POWER_GEM, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GARGANACL_1] = {
        .species = SPECIES_GARGANACL,
        .moves = {MOVE_SALT_CURE, MOVE_EARTHQUAKE, MOVE_RECOVER, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GARGANACL_2] = {
        .species = SPECIES_GARGANACL,
        .moves = {MOVE_SALT_CURE, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK, MOVE_TOXIC},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_REVAVROOM_1] = {
        .species = SPECIES_REVAVROOM,
        .moves = {MOVE_SHIFT_GEAR, MOVE_GUNK_SHOT, MOVE_IRON_HEAD, MOVE_HIGH_HORSEPOWER},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_REVAVROOM_2] = {
        .species = SPECIES_REVAVROOM,
        .moves = {MOVE_SHIFT_GEAR, MOVE_GUNK_SHOT, MOVE_IRON_HEAD, MOVE_HIGH_HORSEPOWER},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TOEDSCRUEL_1] = {
        .species = SPECIES_TOEDSCRUEL,
        .moves = {MOVE_EARTH_POWER, MOVE_GIGA_DRAIN, MOVE_STUN_SPORE, MOVE_SPORE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TOEDSCRUEL_2] = {
        .species = SPECIES_TOEDSCRUEL,
        .moves = {MOVE_EARTH_POWER, MOVE_GIGA_DRAIN, MOVE_TOXIC, MOVE_RAPID_SPIN},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHIEN_PAO_1] = {
        .species = SPECIES_CHIEN_PAO,
        .moves = {MOVE_ICE_SPINNER, MOVE_SUCKER_PUNCH, MOVE_CRUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHIEN_PAO_2] = {
        .species = SPECIES_CHIEN_PAO,
        .moves = {MOVE_ICICLE_CRASH, MOVE_SUCKER_PUNCH, MOVE_CRUNCH, MOVE_ICE_SHARD},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHI_YU_1] = {
        .species = SPECIES_CHI_YU,
        .moves = {MOVE_RUINATION, MOVE_FIRE_BLAST, MOVE_DARK_PULSE, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHI_YU_2] = {
        .species = SPECIES_CHI_YU,
        .moves = {MOVE_RUINATION, MOVE_FIRE_BLAST, MOVE_DARK_PULSE, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ZAPDOS_GALAR_1] = {
        .species = SPECIES_ZAPDOS_GALAR,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_BRAVE_BIRD, MOVE_KNOCK_OFF, MOVE_BULK_UP},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ZAPDOS_GALAR_2] = {
        .species = SPECIES_ZAPDOS_GALAR,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_BRAVE_BIRD, MOVE_U_TURN, MOVE_STONE_EDGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FARIGIRAF_1] = {
        .species = SPECIES_FARIGIRAF,
        .moves = {MOVE_TWIN_BEAM, MOVE_DAZZLING_GLEAM, MOVE_CALM_MIND, MOVE_BATON_PASS},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FARIGIRAF_2] = {
        .species = SPECIES_FARIGIRAF,
        .moves = {MOVE_TWIN_BEAM, MOVE_HYPER_VOICE, MOVE_TRICK, MOVE_CALM_MIND},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TAUROS_PALDEA_COMBAT_1] = {
        .species = SPECIES_TAUROS_PALDEA_COMBAT,
        .moves = {MOVE_RAGING_BULL, MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TAUROS_PALDEA_COMBAT_2] = {
        .species = SPECIES_TAUROS_PALDEA_COMBAT,
        .moves = {MOVE_RAGING_BULL, MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },

// Sub-legendary tier: Gen8-9 sub-legends (Loyal Three, Treasures of Ruin, Glastrier/Spectrier, Urshifu)
    [FRONTIER_MON_URSHIFU_SINGLE_STRIKE_1] = {
        .species = SPECIES_URSHIFU_SINGLE_STRIKE,
        .moves = {MOVE_WICKED_BLOW, MOVE_CLOSE_COMBAT, MOVE_SUCKER_PUNCH, MOVE_STONE_EDGE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_URSHIFU_SINGLE_STRIKE_2] = {
        .species = SPECIES_URSHIFU_SINGLE_STRIKE,
        .moves = {MOVE_WICKED_BLOW, MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_URSHIFU_RAPID_STRIKE_1] = {
        .species = SPECIES_URSHIFU_RAPID_STRIKE,
        .moves = {MOVE_SURGING_STRIKES, MOVE_CLOSE_COMBAT, MOVE_AQUA_JET, MOVE_ICE_PUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_URSHIFU_RAPID_STRIKE_2] = {
        .species = SPECIES_URSHIFU_RAPID_STRIKE,
        .moves = {MOVE_SURGING_STRIKES, MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GLASTRIER_1] = {
        .species = SPECIES_GLASTRIER,
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_ICICLE_CRASH, MOVE_STOMPING_TANTRUM, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GLASTRIER_2] = {
        .species = SPECIES_GLASTRIER,
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_ICICLE_CRASH, MOVE_CLOSE_COMBAT, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_BRAVE,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SPECTRIER_1] = {
        .species = SPECIES_SPECTRIER,
        .moves = {MOVE_SHADOW_BALL, MOVE_DARK_PULSE, MOVE_NASTY_PLOT, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SPECTRIER_2] = {
        .species = SPECIES_SPECTRIER,
        .moves = {MOVE_SHADOW_BALL, MOVE_DARK_PULSE, MOVE_DAZZLING_GLEAM, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_OKIDOGI_1] = {
        .species = SPECIES_OKIDOGI,
        .moves = {MOVE_CRUNCH, MOVE_CLOSE_COMBAT, MOVE_GUNK_SHOT, MOVE_BULK_UP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_OKIDOGI_2] = {
        .species = SPECIES_OKIDOGI,
        .moves = {MOVE_CRUNCH, MOVE_CLOSE_COMBAT, MOVE_GUNK_SHOT, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MUNKIDORI_1] = {
        .species = SPECIES_MUNKIDORI,
        .moves = {MOVE_PSYSHOCK, MOVE_SLUDGE_BOMB, MOVE_NASTY_PLOT, MOVE_FOUL_PLAY},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MUNKIDORI_2] = {
        .species = SPECIES_MUNKIDORI,
        .moves = {MOVE_PSYCHIC, MOVE_SLUDGE_BOMB, MOVE_TAUNT, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FEZANDIPITI_1] = {
        .species = SPECIES_FEZANDIPITI,
        .moves = {MOVE_MOONBLAST, MOVE_SLUDGE_BOMB, MOVE_U_TURN, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FEZANDIPITI_2] = {
        .species = SPECIES_FEZANDIPITI,
        .moves = {MOVE_MOONBLAST, MOVE_SLUDGE_BOMB, MOVE_TAUNT, MOVE_NASTY_PLOT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WO_CHIEN_1] = {
        .species = SPECIES_WO_CHIEN,
        .moves = {MOVE_GIGA_DRAIN, MOVE_FOUL_PLAY, MOVE_KNOCK_OFF, MOVE_LEECH_SEED},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WO_CHIEN_2] = {
        .species = SPECIES_WO_CHIEN,
        .moves = {MOVE_GIGA_DRAIN, MOVE_FOUL_PLAY, MOVE_RUINATION, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TING_LU_1] = {
        .species = SPECIES_TING_LU,
        .moves = {MOVE_EARTHQUAKE, MOVE_RUINATION, MOVE_STOMPING_TANTRUM, MOVE_WHIRLWIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TING_LU_2] = {
        .species = SPECIES_TING_LU,
        .moves = {MOVE_EARTHQUAKE, MOVE_RUINATION, MOVE_THROAT_CHOP, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },

// Regional-form gap fill: strong/evolved Alolan, Galarian, Hisuian forms
    [FRONTIER_MON_RATICATE_ALOLA_1] = {
        .species = SPECIES_RATICATE_ALOLA,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CRUNCH, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RATICATE_ALOLA_2] = {
        .species = SPECIES_RATICATE_ALOLA,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CRUNCH, MOVE_U_TURN, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DUGTRIO_ALOLA_1] = {
        .species = SPECIES_DUGTRIO_ALOLA,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_SUCKER_PUNCH, MOVE_BEAT_UP},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_DUGTRIO_ALOLA_2] = {
        .species = SPECIES_DUGTRIO_ALOLA,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PERSIAN_ALOLA_1] = {
        .species = SPECIES_PERSIAN_ALOLA,
        .moves = {MOVE_KNOCK_OFF, MOVE_DOUBLE_EDGE, MOVE_TAUNT, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PERSIAN_ALOLA_2] = {
        .species = SPECIES_PERSIAN_ALOLA,
        .moves = {MOVE_KNOCK_OFF, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST, MOVE_THUNDERBOLT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_NAUGHTY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RAPIDASH_GALAR_1] = {
        .species = SPECIES_RAPIDASH_GALAR,
        .moves = {MOVE_PSYCHIC_FANGS, MOVE_PLAY_ROUGH, MOVE_DRAIN_PUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_RAPIDASH_GALAR_2] = {
        .species = SPECIES_RAPIDASH_GALAR,
        .moves = {MOVE_PSYCHIC_FANGS, MOVE_PLAY_ROUGH, MOVE_MEGAHORN, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SLOWBRO_GALAR_1] = {
        .species = SPECIES_SLOWBRO_GALAR,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_PSYCHIC, MOVE_FIRE_BLAST, MOVE_SHELL_SIDE_ARM},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SLOWBRO_GALAR_2] = {
        .species = SPECIES_SLOWBRO_GALAR,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_PSYCHIC, MOVE_FIRE_BLAST, MOVE_REST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WEEZING_GALAR_1] = {
        .species = SPECIES_WEEZING_GALAR,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_FIRE_BLAST, MOVE_PAIN_SPLIT, MOVE_WILL_O_WISP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_WEEZING_GALAR_2] = {
        .species = SPECIES_WEEZING_GALAR,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_FIRE_BLAST, MOVE_TOXIC_SPIKES, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CURSOLA_1] = {
        .species = SPECIES_CURSOLA,
        .moves = {MOVE_SHADOW_BALL, MOVE_EARTH_POWER, MOVE_WILL_O_WISP, MOVE_STRENGTH_SAP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CURSOLA_2] = {
        .species = SPECIES_CURSOLA,
        .moves = {MOVE_SHADOW_BALL, MOVE_EARTH_POWER, MOVE_DAZZLING_GLEAM, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_STUNFISK_GALAR_1] = {
        .species = SPECIES_STUNFISK_GALAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_FLASH_CANNON, MOVE_STEALTH_ROCK, MOVE_TOXIC},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_CALM,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_STUNFISK_GALAR_2] = {
        .species = SPECIES_STUNFISK_GALAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_FLASH_CANNON, MOVE_THUNDER_WAVE, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PERRSERKER_1] = {
        .species = SPECIES_PERRSERKER,
        .moves = {MOVE_IRON_HEAD, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PERRSERKER_2] = {
        .species = SPECIES_PERRSERKER,
        .moves = {MOVE_IRON_HEAD, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARCANINE_HISUI_1] = {
        .species = SPECIES_ARCANINE_HISUI,
        .moves = {MOVE_ROCK_SLIDE, MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_EXTREME_SPEED},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARCANINE_HISUI_2] = {
        .species = SPECIES_ARCANINE_HISUI,
        .moves = {MOVE_ROCK_SLIDE, MOVE_FLARE_BLITZ, MOVE_EXTREME_SPEED, MOVE_MORNING_SUN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_OVERQWIL_1] = {
        .species = SPECIES_OVERQWIL,
        .moves = {MOVE_BARB_BARRAGE, MOVE_CRUNCH, MOVE_LIQUIDATION, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_OVERQWIL_2] = {
        .species = SPECIES_OVERQWIL,
        .moves = {MOVE_BARB_BARRAGE, MOVE_CRUNCH, MOVE_LIQUIDATION, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SNEASLER_1] = {
        .species = SPECIES_SNEASLER,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_DIRE_CLAW, MOVE_ICE_PUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SNEASLER_2] = {
        .species = SPECIES_SNEASLER,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_DIRE_CLAW, MOVE_ICE_PUNCH, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LILLIGANT_HISUI_1] = {
        .species = SPECIES_LILLIGANT_HISUI,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_LEAF_BLADE, MOVE_SUBSTITUTE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LILLIGANT_HISUI_2] = {
        .species = SPECIES_LILLIGANT_HISUI,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_LEAF_BLADE, MOVE_HIGH_JUMP_KICK, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GOODRA_HISUI_1] = {
        .species = SPECIES_GOODRA_HISUI,
        .moves = {MOVE_DRACO_METEOR, MOVE_FLASH_CANNON, MOVE_THUNDERBOLT, MOVE_EARTHQUAKE},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_QUIET,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GOODRA_HISUI_2] = {
        .species = SPECIES_GOODRA_HISUI,
        .moves = {MOVE_BODY_PRESS, MOVE_IRON_HEAD, MOVE_STEALTH_ROCK, MOVE_SHELTER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AVALUGG_HISUI_1] = {
        .species = SPECIES_AVALUGG_HISUI,
        .moves = {MOVE_AVALANCHE, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_AVALUGG_HISUI_2] = {
        .species = SPECIES_AVALUGG_HISUI,
        .moves = {MOVE_AVALANCHE, MOVE_ROCK_SLIDE, MOVE_BODY_PRESS, MOVE_CURSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .nature = NATURE_IMPISH,
        .ball = BALL_POKE
    },

// Gen4-9 starter first-stage consistency fill
    [FRONTIER_MON_TURTWIG] = {
        .species = SPECIES_TURTWIG,
        .moves = {MOVE_TACKLE, MOVE_RAZOR_LEAF, MOVE_WITHDRAW, MOVE_GROWTH},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHIMCHAR] = {
        .species = SPECIES_CHIMCHAR,
        .moves = {MOVE_SCRATCH, MOVE_EMBER, MOVE_TAUNT, MOVE_FLAME_WHEEL},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_PIPLUP] = {
        .species = SPECIES_PIPLUP,
        .moves = {MOVE_POUND, MOVE_BUBBLE_BEAM, MOVE_GROWL, MOVE_ICY_WIND},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SNIVY] = {
        .species = SPECIES_SNIVY,
        .moves = {MOVE_TACKLE, MOVE_LEAF_TORNADO, MOVE_LEER, MOVE_WRAP},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TEPIG] = {
        .species = SPECIES_TEPIG,
        .moves = {MOVE_TACKLE, MOVE_EMBER, MOVE_TAIL_WHIP, MOVE_ODOR_SLEUTH},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_OSHAWOTT] = {
        .species = SPECIES_OSHAWOTT,
        .moves = {MOVE_TACKLE, MOVE_WATER_GUN, MOVE_TAIL_WHIP, MOVE_FURY_CUTTER},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_CHESPIN] = {
        .species = SPECIES_CHESPIN,
        .moves = {MOVE_TACKLE, MOVE_VINE_WHIP, MOVE_WITHDRAW, MOVE_ROLLOUT},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FROAKIE] = {
        .species = SPECIES_FROAKIE,
        .moves = {MOVE_POUND, MOVE_WATER_PULSE, MOVE_LICK, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ROWLET] = {
        .species = SPECIES_ROWLET,
        .moves = {MOVE_TACKLE, MOVE_LEAFAGE, MOVE_GROWL, MOVE_ASTONISH},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_LITTEN] = {
        .species = SPECIES_LITTEN,
        .moves = {MOVE_SCRATCH, MOVE_EMBER, MOVE_LICK, MOVE_FIRE_FANG},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_POPPLIO] = {
        .species = SPECIES_POPPLIO,
        .moves = {MOVE_POUND, MOVE_WATER_GUN, MOVE_GROWL, MOVE_DOUBLE_SLAP},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GROOKEY] = {
        .species = SPECIES_GROOKEY,
        .moves = {MOVE_SCRATCH, MOVE_VINE_WHIP, MOVE_GROWL, MOVE_BRANCH_POKE},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SCORBUNNY] = {
        .species = SPECIES_SCORBUNNY,
        .moves = {MOVE_TACKLE, MOVE_EMBER, MOVE_GROWL, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SOBBLE] = {
        .species = SPECIES_SOBBLE,
        .moves = {MOVE_POUND, MOVE_WATER_GUN, MOVE_GROWL, MOVE_ASTONISH},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_SPRIGATITO] = {
        .species = SPECIES_SPRIGATITO,
        .moves = {MOVE_SCRATCH, MOVE_LEAFAGE, MOVE_GROWL, MOVE_LEECH_SEED},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_FUECOCO] = {
        .species = SPECIES_FUECOCO,
        .moves = {MOVE_TACKLE, MOVE_EMBER, MOVE_BITE, MOVE_YAWN},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_QUAXLY] = {
        .species = SPECIES_QUAXLY,
        .moves = {MOVE_POUND, MOVE_WATER_GUN, MOVE_GROWL, MOVE_AQUA_JET},
        .heldItem = ITEM_ORAN_BERRY,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },

// High tier: Galarian birds (Articuno/Moltres), Ursaluna, Gholdengo, Archaludon, Hydrapple, Tauros-Paldea breeds
    [FRONTIER_MON_ARTICUNO_GALAR_1] = {
        .species = SPECIES_ARTICUNO_GALAR,
        .moves = {MOVE_FREEZING_GLARE, MOVE_HURRICANE, MOVE_ROOST, MOVE_CALM_MIND},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARTICUNO_GALAR_2] = {
        .species = SPECIES_ARTICUNO_GALAR,
        .moves = {MOVE_FREEZING_GLARE, MOVE_HURRICANE, MOVE_PSYSHOCK, MOVE_AGILITY},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MOLTRES_GALAR_1] = {
        .species = SPECIES_MOLTRES_GALAR,
        .moves = {MOVE_FIERY_WRATH, MOVE_BRAVE_BIRD, MOVE_U_TURN, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_MOLTRES_GALAR_2] = {
        .species = SPECIES_MOLTRES_GALAR,
        .moves = {MOVE_FIERY_WRATH, MOVE_BRAVE_BIRD, MOVE_KNOCK_OFF, MOVE_AGILITY},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_URSALUNA_1] = {
        .species = SPECIES_URSALUNA,
        .moves = {MOVE_HEADLONG_RUSH, MOVE_FACADE, MOVE_CRUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_URSALUNA_2] = {
        .species = SPECIES_URSALUNA,
        .moves = {MOVE_HEADLONG_RUSH, MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .nature = NATURE_ADAMANT,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GHOLDENGO_1] = {
        .species = SPECIES_GHOLDENGO,
        .moves = {MOVE_SHADOW_BALL, MOVE_MAKE_IT_RAIN, MOVE_FOCUS_BLAST, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_GHOLDENGO_2] = {
        .species = SPECIES_GHOLDENGO,
        .moves = {MOVE_SHADOW_BALL, MOVE_MAKE_IT_RAIN, MOVE_NASTY_PLOT, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARCHALUDON_1] = {
        .species = SPECIES_ARCHALUDON,
        .moves = {MOVE_DRACO_METEOR, MOVE_FLASH_CANNON, MOVE_ELECTRO_SHOT, MOVE_BODY_PRESS},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_ARCHALUDON_2] = {
        .species = SPECIES_ARCHALUDON,
        .moves = {MOVE_BODY_PRESS, MOVE_IRON_DEFENSE, MOVE_FLASH_CANNON, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .nature = NATURE_BOLD,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HYDRAPPLE_1] = {
        .species = SPECIES_HYDRAPPLE,
        .moves = {MOVE_GIGA_DRAIN, MOVE_DRACO_METEOR, MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_HYDRAPPLE_2] = {
        .species = SPECIES_HYDRAPPLE,
        .moves = {MOVE_GIGA_DRAIN, MOVE_DRACO_METEOR, MOVE_LEECH_SEED, MOVE_APPLE_ACID},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .nature = NATURE_MODEST,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TAUROS_PALDEA_BLAZE_1] = {
        .species = SPECIES_TAUROS_PALDEA_BLAZE,
        .moves = {MOVE_RAGING_BULL, MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_ZEN_HEADBUTT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TAUROS_PALDEA_BLAZE_2] = {
        .species = SPECIES_TAUROS_PALDEA_BLAZE,
        .moves = {MOVE_RAGING_BULL, MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TAUROS_PALDEA_AQUA_1] = {
        .species = SPECIES_TAUROS_PALDEA_AQUA,
        .moves = {MOVE_RAGING_BULL, MOVE_WAVE_CRASH, MOVE_CLOSE_COMBAT, MOVE_ZEN_HEADBUTT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
    [FRONTIER_MON_TAUROS_PALDEA_AQUA_2] = {
        .species = SPECIES_TAUROS_PALDEA_AQUA,
        .moves = {MOVE_RAGING_BULL, MOVE_WAVE_CRASH, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY,
        .ball = BALL_POKE
    },
};
