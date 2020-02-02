#ifndef PLAYER_H
#define PLAYER_H

#include "cards.h"

struct player {
	struct unordered_cards hand;
	struct unordered_cards upcards;
	struct unordered_cards downcards;
};

void player_init(struct player * p);

#endif
