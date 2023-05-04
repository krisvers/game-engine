#ifndef RENDER_H
#define RENDER_H

#include <common.h>

#include <SDL2/SDL.h>

void r_clear_window(R_BPP_TYPE color);
R_BPP_TYPE r_get_pixel(uint16_t x, uint16_t y);
void r_update();
int r_init(SDL_Window * w, SDL_Surface * s, uint16_t width, uint16_t height);
void r_draw_pixel(uint16_t x, uint16_t y, R_BPP_TYPE color);
void r_draw_scaled_pixel(uint16_t x, uint16_t y, R_BPP_TYPE color);

#endif
