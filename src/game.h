#ifndef GAME_H
#define GAME_H

#include "cards.h"
#include "player.h"

typedef struct {
	ordered_cards_t draw_pile;
	ordered_cards_t play_pile;
	player_t human;
	player_t computer;
} game_t;

void game_init(game_t * g);

#endif
