#include <stdio.h>
#include <stdlib.h>

#include "cards.h"
#include "player.h"
#include "game.h"

int
main(void)
{
	unordered_cards_t hand;
	unordered_cards_init(&hand);
	ordered_cards_t draw_pile;
	ordered_cards_init(&draw_pile);

	player_t human;
	player_init(&human);

	game_t g;
	game_init(&g);

	return EXIT_SUCCESS;
}
