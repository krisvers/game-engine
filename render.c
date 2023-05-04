#include <stdint.h>

#include <common.h>
#include <render.h>

#define R_INIT_CHECK()		if (!init) { return -1; };
#define R_INIT_CHECK_VOID()	if (!init) { return; };

static SDL_Window * window = NULL;
static SDL_Surface * surface = NULL;
static void * framebuffer = NULL;
static uint16_t screen_width = 0;
static uint16_t screen_height = 0;
static uint16_t target_width = 0;
static uint16_t target_height = 0;
static uint8_t scale_width = 0;
static uint8_t scale_height = 0;
static char init = 0;

void r_draw_pixel(uint16_t x, uint16_t y, R_BPP_TYPE color) {
	R_INIT_CHECK_VOID();

	if (x >= screen_width || y >= screen_height) {
		return;
	}

	((R_BPP_TYPE *) framebuffer)[x + (y * screen_width)] = color;
}

void r_draw_scaled_pixel(uint16_t x, uint16_t y, R_BPP_TYPE color) {
	for (uint8_t w = 0; w < scale_width; w++) {
		for (uint8_t h = 0; h < scale_height; h++) {
			r_draw_pixel(x * scale_width + w, y * scale_height + h, color);
		}
	}
}

uint32_t r_get_pixel(uint16_t x, uint16_t y) {
	R_INIT_CHECK();

	return ((R_BPP_TYPE *) surface->pixels)[x + (y * surface->w)];
}

void r_clear_window(R_BPP_TYPE color) {
	R_INIT_CHECK_VOID();

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

int r_init(SDL_Window * w, SDL_Surface * s, uint16_t width, uint16_t height) {
	SDL_NULL_CHECK(w);
	SDL_NULL_CHECK(s);

	window = w;
	surface = s;
	screen_width = surface->w;			screen_height = surface->h;
	framebuffer = surface->pixels;
	target_width = width;				target_height = height;
	scale_width = surface->w / target_width;	scale_height = surface->h / target_height;
	init = 1;

	return 0;
}
