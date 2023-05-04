#include <keyboard.h>

#include <stdint.h>

static uint8_t keys[256];

void k_register_up(uint8_t scancode) {
	keys[scancode] = 0;
}

void k_register_down(uint8_t scancode) {
	keys[scancode] = 1;
}

uint8_t k_get_down(enum key_codes key) {
	return keys[key];
}

uint8_t k_get_up(enum key_codes key) {
	return keys[key];
}
