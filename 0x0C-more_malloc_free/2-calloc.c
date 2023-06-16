#include "main.h"
#include <stdlib.h>

/**
 * _calloc - creates an array of nmemb elements and size bytes
 * each and fills every element with 0
 * @nmemb: the number of elements
 * @size: the size in bytes for each element
 * Return: returns the memory occupied by the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	/* using a char here because char can store numbers to no one's surprise */
	char *result;

	if (nmemb == 0 || size == 0)
		return (NULL);

	result = malloc(nmemb * size);
	if (!result)
		return (NULL);

	i = 0;
	while (i < (nmemb * size))
	{
		result[i] = 0;
		i++;
	}

	return (result);
}
