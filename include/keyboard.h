#ifndef KEYBOARD_H
#define KEYBOARD_H

#include <stdint.h>

enum key_codes {
	KEY_UNKNOWN = 0,
	KEY_A = 1,
	KEY_B = 2,
	KEY_C = 3,
	KEY_D = 4,
	KEY_E = 5,
	KEY_F = 6,
};

void k_register_up(uint8_t scancode);
void k_register_down(uint8_t scancode);
uint8_t k_get_down(enum key_codes key);
uint8_t k_get_up(enum key_codes key);

#endif
