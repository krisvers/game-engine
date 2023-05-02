#include <game.h>
#include <common.h>
#include <render.h>

static uint16_t x, y = 0;

int g_main() {
	SDL_Event event;

	while (event.type != SDL_QUIT) {
		SDL_PollEvent(&event);
		for (x = y; x < 800; x++) {
			for (y = x ^ y; y < 600; y++) {
				//r_clear_window(0x0);
				r_draw_pixel(x % 800, y % 600, 0xFFFFFF ^ (x % y));
			}
		}
		r_update();
	}

	return 0;
}
