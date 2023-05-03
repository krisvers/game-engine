#include <game.h>
#include <common.h>
#include <render.h>
#include <object.h>

void g_update() {
	
}

int g_main() {
	SDL_Event event;
	SDL_PollEvent(&event);

	while (event.type != SDL_QUIT) {
		SDL_PollEvent(&event);
		g_update();
		r_update();
	}

	return 0;
}
