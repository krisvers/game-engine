#include <stdint.h>

#include <common.h>
#include <render.h>

#define R_INIT_CHECK()		if (!init) { return -1; };
#define R_INIT_CHECK_VOID()	if (!init) { return; };

static SDL_Window * window = NULL;
static SDL_Surface * surface = NULL;
static char init = 0;

void r_draw_pixel(uint16_t x, uint16_t y, uint32_t color) {
	R_INIT_CHECK_VOID();

	if (x >= surface->w || y >= surface->h) {
		return;
	}

	((uint32_t *) surface->pixels)[x + (y * surface->w)] = color;
}

uint32_t r_get_pixel(uint16_t x, uint16_t y) {
	return ((uint32_t *) surface->pixels)[x + (y * surface->w)];
}

void r_clear_window(uint32_t color) {
	for (uint16_t h = 0; h < surface->h; h++) {
		for (uint16_t w = 0; w < surface->w; w++) {
			r_draw_pixel(w, h, color);
		}
	}
}

void r_update() {
	R_INIT_CHECK_VOID();

	SDL_UpdateWindowSurface(window);
}

int r_init(SDL_Window * w, SDL_Surface * s) {
	SDL_NULL_CHECK(w);
	SDL_NULL_CHECK(s);

	window = w;
	surface = s;
	init = 1;

	return 0;
}
