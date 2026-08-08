#ifndef GUARD_FRONTIER_RANKINGS_SCREEN_H
#define GUARD_FRONTIER_RANKINGS_SCREEN_H

#include "main.h"

// Multi-page Battle Frontier facility rankings/streak menu. Reuses the Ranking Hall's own
// PrintHallRecords() to stay visually identical to the desk terminals, just paginated with
// left/right scroll arrows across all 10 RANKING_HALL_* facility/mode slots instead of
// requiring a separate terminal visit per facility. callback is resumed once the player backs
// out (e.g. CB2_ReshowFrontierPass when launched from the Frontier Pass screen).
void ShowFrontierRankingsScreen(MainCallback callback);

#endif // GUARD_FRONTIER_RANKINGS_SCREEN_H
