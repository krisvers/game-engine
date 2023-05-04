#ifndef COMMON_H
#define COMMON_H

#include <config.h>

#include <SDL2/SDL.h>

#define SDL_NULL_CHECK(a)	if (a == NULL) { fprintf(stderr, "%s\n", SDL_GetError()); };

#endif
