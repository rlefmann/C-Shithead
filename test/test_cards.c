#include "tests.h"

#include "minunit.h"
#include "cards.h"

static char *
test_cardvalue_to_rank(void)
{
	mu_assert("Error, cardvalue_to_rank(0) != 0", cardvalue_to_rank(0) == 0);
	return 0;
}

char *
test_cards(void)
{
	mu_run_test(test_cardvalue_to_rank);
	return 0;
}
