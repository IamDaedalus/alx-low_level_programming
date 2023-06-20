#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialises a struct of type dog
 * @d: the struct to initialise
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->age = age;
		d->name = name;
		d->owner = owner;
	}
}
