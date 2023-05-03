#ifndef OBJECT_H
#define OBJECT_H

#include <stdint.h>

enum obj_type {
	OBJ_TYPE_GENERIC = 0,
	OBJ_TYPE_BASIC = 1,
	OBJ_TYPE_ENTITY = 2,
	OBJ_TYPE_TEXTURED = 3,
	OBJ_TYPE_HITBOX = 4,
};

typedef void obj_func(void * obj);

struct GenericObject {
	enum obj_type type;
	obj_func * draw;
	obj_func * logic;
};

void object_generic_func(void * obj);

#endif
