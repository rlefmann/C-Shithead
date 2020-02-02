#ifndef CARDS_H
#define CARDS_H

#include <string.h>
#include <inttypes.h>

#define NUM_CARDS 52
#define NUM_CARDS_HAND 3
#define NUM_CARDS_UP_DOWN 3

struct unordered_cards {
	uint64_t bits;
	size_t n;
};

void unordered_cards_init(struct unordered_cards * cards);

struct ordered_cards {
	char values[NUM_CARDS];
	size_t n;
};

void ordered_cards_init(struct ordered_cards * cards);

#endif
