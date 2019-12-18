CC=gcc
CFLAGS=-I.
DEPS = node.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: main.o
	$(CC) -o main main.o node.c
