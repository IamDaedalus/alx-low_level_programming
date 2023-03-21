#include "dog.h"
#include <stdlib.h>

/**
  * init_dog - this initialises a given struct
  * @d: the struct to initialise
  * @name: the name of the dog in the struct
  * @age: the age of the dog
  * @owner: who takes care of the doggy
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
