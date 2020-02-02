#include "cards.h"

void
unordered_cards_init(unordered_cards_t * cards)
{
	cards->bits = 0;
	cards->n = 0;
}

void
ordered_cards_init(ordered_cards_t * cards)
{
	cards->n = 0;
}
