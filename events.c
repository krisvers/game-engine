#include <SDL2/SDL.h>

#include <events.h>
#include <common.h>
#include <keyboard.h>

static SDL_Event event;

short int e_events() {
	SDL_PollEvent(&event);

	switch (event.type) {
		case SDL_QUIT:
			return EVENT_QUIT;
		case SDL_KEYUP:
			// process input
			k_register_up(event.key.keysym.scancode);
			return EVENT_KEYUP;
		case SDL_KEYDOWN:
			// process input
			k_register_up(event.key.keysym.scancode);
			return EVENT_KEYDOWN;
		default:
			break;
	}

	return EVENT_NONE;
}
