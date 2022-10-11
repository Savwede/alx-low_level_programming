#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees dogs memory space
 * @d: pointer to a dog object or variable
 */

void free_dog(dog_t *d)
{
	free(d);
}
