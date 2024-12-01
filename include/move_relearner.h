#ifndef GUARD_MOVE_RELEARNER_H
#define GUARD_MOVE_RELEARNER_H

void TeachMoveRelearnerMove(void);
void MoveRelearnerShowHideHearts(s32);
void MoveRelearnerShowHideCategoryIcon(s32);

#define MAX_RELEARNER_MOVES max(MAX_LEVEL_UP_MOVES, 100) // jd: per https://github.com/PCG06/pokeemerald-hack/commit/f6586fc62c559e872373e2b2d6c2f5082930bf61

#endif //GUARD_MOVE_RELEARNER_H
