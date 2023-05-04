#ifndef EVENTS_H
#define EVENTS_H

enum event_type {
	EVENT_QUIT = -1,
	EVENT_NONE = 0,
	EVENT_KEYUP = 1,
	EVENT_KEYDOWN = 2,
	EVENT_OTHER = 3,
};

short int e_events();

#endif
