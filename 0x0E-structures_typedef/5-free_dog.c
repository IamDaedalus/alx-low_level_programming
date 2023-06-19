#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a struct dog_t from memory
 * @d: the dog_t struct to free
 */
void free_dog(dog_t *d)
{
	free(d);
}
