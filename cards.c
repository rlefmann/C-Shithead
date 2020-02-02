#include "cards.h"

void
unordered_cards_init(struct unordered_cards * cards)
{
	cards->bits = 0;
	cards->n = 0;
}

void
ordered_cards_init(struct ordered_cards * cards)
{
	cards->n = 0;
}
