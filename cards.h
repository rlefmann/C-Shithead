#ifndef CARDS_H
#define CARDS_H

#include <string.h>
#include <inttypes.h>

#define NUM_CARDS 52
#define NUM_CARDS_HAND 3
#define NUM_CARDS_UP_DOWN 3
#define NUM_SUITS 4

char cardvalue_to_rank(char value);
char cardvalue_to_suit(char value);
uint64_t cardvalue_to_cardbits(char value);
void print_cardbits(uint64_t bits);

typedef struct {
	uint64_t bits;
	size_t n;
} unordered_cards_t;

void unordered_cards_init(unordered_cards_t * cards);

typedef struct {
	char values[NUM_CARDS];
	size_t n;
} ordered_cards_t;

void ordered_cards_init(ordered_cards_t * cards);

#endif
