#include "tests.h"

#include "minunit.h"

#include <stdio.h>
#include <stdlib.h>

int tests_run = 0;

static char *
all_tests()
{
	test_cards();
	return 0;
}

int
main()
{
	char * result = all_tests();
	if (result != 0) {
		printf("%s\n", result);
	} else {
		printf("ALL TESTS PASSED\n");
	}
	printf("Tests run: %d\n", tests_run);
	return result != 0;
}
