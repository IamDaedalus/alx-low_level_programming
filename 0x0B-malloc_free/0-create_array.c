#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * create_array - create an array using malloc
  * @size: the size of the array
  * @c: the char to initialise with
  * Return: returns a ptr to the first element
  */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	str = malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(str + i) = c;

	return (str);
}
