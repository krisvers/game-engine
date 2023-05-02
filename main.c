#include <stdio.h>

#include <common.h>
#include <game.h>
#include <render.h>

int main() {
	int ret = 0;
	SDL_Window * window = NULL;
	SDL_Surface * surface = NULL;

	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		fprintf(stderr, "SDL Initialization failed! %s\n", SDL_GetError());
		return -1;
	}

	window = SDL_CreateWindow(WINDOW_NAME, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WINDOW_WIDTH, WINDOW_HEIGHT, 0);
	SDL_NULL_CHECK(window);

	surface = SDL_GetWindowSurface(window);
	SDL_NULL_CHECK(surface);

	if (r_init(window, surface) != 0) {
		return 1;
	}

	printf("Starting game!\n");

	ret = g_main();

	printf("Thanks for playing!\n");

	return ret;
}
