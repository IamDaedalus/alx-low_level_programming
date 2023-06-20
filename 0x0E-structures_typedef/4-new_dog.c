#include "dog.h"
#include <stdlib.h>

char *dupstr(char *str)
{
	char *result;
	int len = 0, i = 0;

	if (str)
	{
		while (str[i] != '\0')
		{
			len++;
			i++;
		}

		result = malloc(sizeof(char) * len + 1);

		i = 0;
		while (str[i] != '\0')
		{
			result[i] = str[i];
			i++;
		}
	}
	else
		return (NULL);

	result[i] = '\0';
	return (result);
}


/**
 * new_dog - creates a new dog_t struct
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *n, *o;
	dog_t *result;

	n = !name ? NULL : dupstr(name);
	o = !owner ? NULL : dupstr(owner);

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
