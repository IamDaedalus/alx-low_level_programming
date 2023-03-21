#include "dog.h"
#include <stdlib.h>

/**
  * new_dog - creates a new struct of type dog
  * @name: the name of this doggo
  * @age: the age of this doggo
  * @owner: the caretaker and owner of doggo
  * Return: returns the new dog struct
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *poppy;

	poppy = malloc(sizeof(dog_t));

	if (poppy == NULL)
		return (NULL);

	poppy->name = name;
	poppy->age = age;
	poppy->owner = owner;

	return (poppy);
}
