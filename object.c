#include <object.h>
#include <common.h>
#include <stdio.h>

void object_generic_func(void * obj) {
	printf("object is of type: %d, draw func: %p, logic func: %p\n", ((struct GenericObject *) obj)->type, (void *) ((struct GenericObject *) obj)->draw, (void *) ((struct GenericObject *) obj)->logic);
}
