.POSIX:

BIN = shithead

all: $(BIN)

$(BIN): src/main.o src/cards.o src/player.o src/game.o src/util.o
	gcc -o $@ $?

src/main.o: src/main.c src/cards.h src/player.h src/game.h
src/cards.o: src/cards.c src/cards.h src/util.h
src/player.o: src/player.c src/player.h src/cards.h
src/game.o: src/game.c src/game.h src/cards.h src/player.h
src/util.o: src/util.c src/util.h

.SUFFIXES: .c .o
.c.o:
	$(CC) $(CFLAGS) -c -o $@ $<
