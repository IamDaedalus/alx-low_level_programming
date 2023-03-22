#include "main.h"
#include <stdlib.h>

/**
  * _calloc - returns an array w specific size set filled with zeroes
  * @nmemb: unsigned value
  * @size: unsigned value for the size
  * Return: returns a new allocated memory or NULL if something fails
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	result = malloc(nmemb * size);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		result[i] = 0;

	return (result);
}
