#ifndef RENDER_H
#define RENDER_H

#include <SDL2/SDL.h>

void r_clear_window(uint32_t color);
uint32_t r_get_pixel(uint16_t x, uint16_t y);
void r_update();
int r_init(SDL_Window * w, SDL_Surface * s);
void r_draw_pixel(uint16_t x, uint16_t y, uint32_t color);

#endif
