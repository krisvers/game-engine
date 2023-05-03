CC := gcc
CCFLAGS := -std=c99 -lSDL2 -Iinclude -O2 -Wall -Werror -Wextra

all: build run

build:
	$(CC) $(shell find . -type f -name "*.c") -o bin/game $(CCFLAGS)

run:
	./bin/game
