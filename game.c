#include "game.h"

void
game_init(game_t * g)
{
	ordered_cards_init(&g->draw_pile);
	ordered_cards_init(&g->play_pile);
	player_init(&g->human);
	player_init(&g->computer);
}
