#include <game.h>
#include <common.h>
#include <render.h>
#include <object.h>
#include <events.h>

void g_update() {

}

int g_main() {
	while (e_events() != -1) {
		g_update();
		r_update();
	}

	return 0;
}
