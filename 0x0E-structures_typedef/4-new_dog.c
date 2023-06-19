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
	dog_t *result;

	result = malloc(sizeof(dog_t));

	if (result == NULL)
		return (NULL);

	result->name = name;
	result->age = age;
	result->owner = owner;

	return (result);
}
