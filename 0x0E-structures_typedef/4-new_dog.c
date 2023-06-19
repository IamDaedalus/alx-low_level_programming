#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog_t struct
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: returns a new dog_t struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *n, *o;
	dog_t *result;

	n = !name ? NULL : name;
	o = !owner ? NULL : owner;

	if (!n || !o)
		return (NULL);

	result = malloc(sizeof(dog_t));
	if (!result)
		return (NULL);

	result->name = n;
	result->age = age;
	result->owner = o;

	return (result);
}
