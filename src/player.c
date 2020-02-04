#include "player.h"

void
player_init(player_t * p)
{
	unordered_cards_init(&p->hand);
	unordered_cards_init(&p->upcards);
	unordered_cards_init(&p->downcards);
}
