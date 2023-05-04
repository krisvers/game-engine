#include <object.h>
#include <common.h>
#include <stdio.h>

void object_generic_func(void * obj) {
	// cursed function pointer conversion to print the address (ISO C forbids casting object pointer to void pointer)
	printf("object is of type: %d, draw func: %lx, logic func: %lx\n", ((struct GenericObject *) obj)->type, (size_t) ((struct GenericObject *) obj)->draw, (size_t) ((struct GenericObject *) obj)->logic);
}
