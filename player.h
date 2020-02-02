#ifndef PLAYER_H
#define PLAYER_H

#include "cards.h"

typedef struct {
	unordered_cards_t hand;
	unordered_cards_t upcards;
	unordered_cards_t downcards;
} player_t;

void player_init(player_t * p);

#endif
