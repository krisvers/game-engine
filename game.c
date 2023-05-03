#include <game.h>
#include <common.h>
#include <render.h>

int g_main() {
	SDL_Event event;
	SDL_PollEvent(&event);

	while (event.type != SDL_QUIT) {
		SDL_PollEvent(&event);
		for (uint16_t x = 0; x < 800; x++) {
			for (uint16_t y = 0; y < 600; y++) {
				//r_clear_window(0x0);
				r_draw_pixel(x, y, (x * 0x010000) + (y * 0x000100) + 0xFF + ((x / 2) * -0x000001) + ((y / 2) * -0x000001));
			}
		}
		r_update();
	}

	return 0;
}
