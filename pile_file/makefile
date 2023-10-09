CC=gcc
CFLAGS=-Wall -ansi
LDFLAGS=-Wall -ansi
EXEC=main 
all: $(EXEC)

main: main.o PILE.o FILE.o
	$(CC) -o $@ $^$(LDFLAGS)

main.o: main.c
	$(CC) -c $^$(CFLAGS)

PILE.o: PILE.c
	$(CC) -c $^$(CFLAGS)

FILE.o: PILE.c
	$(CC) -c $^$(CFLAGS)

clean:
	rm -rf *.o
        rm -rf *.o$(EXEC)
