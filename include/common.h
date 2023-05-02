#ifndef COMMON_H
#define COMMON_H

#include <SDL2/SDL.h>

#define WINDOW_NAME	"game"
#define WINDOW_WIDTH	800
#define WINDOW_HEIGHT	600

#define SDL_NULL_CHECK(a)	if (a == NULL) { fprintf(stderr, "%s\n", SDL_GetError()); };

#endif
