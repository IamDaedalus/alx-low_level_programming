#include "main.h"
#include <stdlib.h>

/**
  * array_range - creates an array of ints
  * @min: the min number of elements
  * @max: the max number of elements
  * Return: the array
  */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = min; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
