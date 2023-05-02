CC := gcc
CCFLAGS := -std=c99 -lSDL2 -Iinclude -O2

all:
	$(CC) $(shell find . -type f -name "*.c") -o bin/game $(CCFLAGS)
