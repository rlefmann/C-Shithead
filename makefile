.POSIX:

OBJECTS = src/cards.o src/player.o src/game.o src/util.o
OBJECTS_TEST = test/tests.o test/test_cards.o $(OBJECTS)

BIN = shithead
CFLAGS = -I src -I test

all: $(BIN)

$(BIN): src/main.o $(OBJECTS)
	gcc -o $@ $?

src/main.o: src/main.c src/cards.h src/player.h src/game.h
src/cards.o: src/cards.c src/cards.h src/util.h
src/player.o: src/player.c src/player.h src/cards.h
src/game.o: src/game.c src/game.h src/cards.h src/player.h
src/util.o: src/util.c src/util.h

tests: $(OBJECTS_TEST)
	gcc -o $@ $?

test/tests.o: test/tests.c test/tests.h test/minunit.h
test/test_cards.o: test/test_cards.c test/tests.h src/cards.h

.SUFFIXES: .c .o
.c.o:
	$(CC) $(CFLAGS) -c -o $@ $<
