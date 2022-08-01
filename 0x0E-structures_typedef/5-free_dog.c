#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free memory occupied by dog
 * @d: memory pointer
 */
void free_dog(dog_t *d)
{
	free(d);
}
