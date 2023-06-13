#include "main.h"
#include <stdlib.h>

/**
 * create_array - this creates a str and fills it with an initial char
 * @size: the size of the str
 * @c: the char to fill the str with
 * Return: returns a str filled with a specific char
 */
char *create_array(unsigned int size, char c)
{
	char *result;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	result = malloc(sizeof(char) * size);
	if (!result)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		result[i] = c;
	}

	return (result);
}
