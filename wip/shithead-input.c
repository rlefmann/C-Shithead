// This implements the input part of a simple shell
// using fgets. It uses at most BUFFERSIZE characters
// from the input. If the input line is longer, it
// throws a warning and discards the rest.
//
// if you are on a POSIX system, it is easier to use getline
// which can read arbitrary long lines from stdin!

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define BUFFERSIZE 128


void discard_extra_input(void);
void remove_newline(char * buffer);
void parse_command(char * command);


int
main(void)
{
	char buffer[BUFFERSIZE];

	for(;;) {
		printf("$ ");
		buffer[BUFFERSIZE-1] = 'x';  // random char different from '\0'
		if (fgets(buffer, BUFFERSIZE, stdin) == NULL) {
			break;
		} else if (buffer[BUFFERSIZE-1] == '\0' && buffer[BUFFERSIZE - 2] != '\n') {
			discard_extra_input();
			fprintf(stderr, "Warning: input too long.\n");
		} else {
			remove_newline(buffer);
			parse_command(buffer);
		}
	}
	return EXIT_SUCCESS;
}


void
discard_extra_input(void)
{
	char c;
	for (;;) {
		c = fgetc(stdin);
		if (c == '\n' || c == EOF) {
			break;
		}
	}
}


void
remove_newline(char * buffer)
{
	size_t len = strlen(buffer);
	if (buffer[len-1] == '\n') {
		buffer[len-1] = '\0';
	}
}


void
parse_command(char * command)
{
	char * token;
	token = strtok(command, " ");
	if (token == NULL) {
		return;
	} else if (strcmp(token, "play") == 0 || strcmp(token, "p") == 0) {
		printf("play some cards\n");
	} else if (strcmp(token, "take") == 0 || strcmp(token, "t") == 0) {
		printf("take cards\n");
	} else if (strcmp(token, "start") == 0 || strcmp(token, "s") == 0) {
		printf("start game\n");
	} else {
		fprintf(stderr, "Error: Invalid command '%s'.\n", token);
	}
}
