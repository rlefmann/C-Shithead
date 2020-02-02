#include "player.h"

void
player_init(struct player * p)
{
	unordered_cards_init(&p->hand);
	unordered_cards_init(&p->upcards);
	unordered_cards_init(&p->downcards);
}
