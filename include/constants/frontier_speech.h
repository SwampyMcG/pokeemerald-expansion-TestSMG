#ifndef GUARD_CONSTANTS_FRONTIER_SPEECH_H
#define GUARD_CONSTANTS_FRONTIER_SPEECH_H

// Tone/personality buckets that Frontier facility classes are grouped into.
// Similar facility classes (e.g. all the triathletes and swimmers) intentionally
// share a bucket so new trainers/classes can be slotted in without writing new text.
// FRONTIER_SPEECH_DEFAULT is deliberately first (value 0): the facility-class
// lookup table is a sparse array, and C zero-initializes any index that isn't
// explicitly listed. Keeping the fallback archetype at 0 means an unmapped
// facility class harmlessly resolves to it instead of silently aliasing
// whatever archetype happened to be declared first.
enum FrontierSpeechArchetype
{
    FRONTIER_SPEECH_DEFAULT,      // fallback for any facility class not yet mapped (reuses FRONTIER_SPEECH_CHEERFUL_KID's pool)
    FRONTIER_SPEECH_COCKY,        // Cooltrainers, Experts, Black Belt, Battle Girl, Dragon Tamer, Rich Boy
    FRONTIER_SPEECH_POLITE,       // Gentleman, Lady, Beauty, Pokefan
    FRONTIER_SPEECH_CHEERFUL_KID, // Youngster, Lass, School Kid, Ninja Boy
    FRONTIER_SPEECH_OUTDOORSY,    // Camper, Picnicker, Tuber
    FRONTIER_SPEECH_EARTHY,       // Hiker, Ruin Maniac, Pokemaniac, Fisherman, Bug Catcher, Bug Maniac, Collector
    FRONTIER_SPEECH_SPORTY,       // Triathletes, Swimmer, Sailor
    FRONTIER_SPEECH_MYSTIC,       // Psychic, Hex Maniac
    FRONTIER_SPEECH_ARTSY,        // Guitarist, Kindler, Aroma Lady, Parasol Lady
    FRONTIER_SPEECH_CARING,       // Pokemon Breeder, Pokemon Ranger
    FRONTIER_SPEECH_BOLD_FLYER,   // Bird Keeper
    FRONTIER_SPEECH_BROCK,        // Brock only - not shared with any other facility class
    FRONTIER_SPEECH_MISTY,        // Misty only
    FRONTIER_SPEECH_LT_SURGE,     // Lt. Surge only
    FRONTIER_SPEECH_ERIKA,        // Erika only
    FRONTIER_SPEECH_KOGA,         // Koga only
    FRONTIER_SPEECH_SABRINA,      // Sabrina only
    FRONTIER_SPEECH_ROXANNE,      // Roxanne only
    FRONTIER_SPEECH_BRAWLY,       // Brawly only
    FRONTIER_SPEECH_WATTSON,      // Wattson only
    FRONTIER_SPEECH_FLANNERY,     // Flannery only
    FRONTIER_SPEECH_NORMAN,       // Norman only
    FRONTIER_SPEECH_WINONA,       // Winona only
    FRONTIER_SPEECH_JUAN,         // Juan only
    FRONTIER_SPEECH_LORELEI,      // Lorelei only
    FRONTIER_SPEECH_BRUNO,        // Bruno only
    FRONTIER_SPEECH_AGATHA,       // Agatha only
    FRONTIER_SPEECH_LANCE,        // Lance only
    FRONTIER_SPEECH_ROARK,        // Roark only
    FRONTIER_SPEECH_GARDENIA,     // Gardenia only
    FRONTIER_SPEECH_MAYLENE,      // Maylene only
    FRONTIER_SPEECH_CRASHER_WAKE, // Crasher Wake only
    FRONTIER_SPEECH_FANTINA,      // Fantina only
    FRONTIER_SPEECH_BYRON,        // Byron only
    FRONTIER_SPEECH_CANDICE,      // Candice only
    FRONTIER_SPEECH_VOLKNER,      // Volkner only
    FRONTIER_SPEECH_ARCHETYPES_COUNT,
};

// Which of a trainer's three lines is being requested.
enum FrontierSpeechCategory
{
    FRONTIER_SPEECH_BEFORE,
    FRONTIER_SPEECH_TRAINER_WIN,  // shown when the player loses
    FRONTIER_SPEECH_TRAINER_LOSE, // shown when the player wins
};

#endif // GUARD_CONSTANTS_FRONTIER_SPEECH_H
