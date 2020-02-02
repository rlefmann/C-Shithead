#ifndef GAME_H
#define GAME_H

#include "cards.h"
#include "player.h"

struct game {
	struct ordered_cards draw_pile;
	struct ordered_cards play_pile;
	struct player human;
	struct player computer;
};

void game_init(struct game * g);

#endif
