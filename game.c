#include <game.h>
#include <common.h>
#include <render.h>
#include <object.h>
#include <events.h>
#include <keyboard.h>

uint32_t color = 0xFF0000;

void g_update() {
	color = k_get_down(KEY_A) ? 0x00FF00 : 0xFF0000;

	for (int w = 0; w < 320; w++) {
		for (int h = 0; h < 200; h++) {
			r_draw_scaled_pixel(w, h, w * 0x010000 + h * 0x000100 + 0xFF + ((w / 2) * -0x000001) + ((h / 2) * -0x000001));
		}
	}
}

int g_main() {
	while (e_events() != -1) {
		g_update();
		r_update();
	}

	return 0;
}
