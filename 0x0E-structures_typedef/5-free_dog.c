#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - frees the dog_t from memory
  * @d: the dog to free
  */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		/* apparently you can't free floating point values */
		free(d->owner);
		free(d);
	}
}
