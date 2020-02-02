#include <stdio.h>

#include "cards.h"

char
cardvalue_to_rank(char value)
{
	return value / NUM_SUITS;
}

char
cardvalue_to_suit(char value)
{
	return value % NUM_SUITS;
}

uint64_t
cardvalue_to_cardbits(char value)
{
	return (uint64_t)1 << value;
}

void
print_cardbits(uint64_t bits)
{
	for (int i = 0; i < NUM_CARDS; i++) {
		printf("%d", bits & 1);
		bits = bits >> 1;
	}
	printf("\n");
}


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
