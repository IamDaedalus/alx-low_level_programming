#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array and fills it with ints
 * @min: the smallest number in the array
 * @max: the largest number in the array
 * Return: returns an array of size (max - min) with elements starting
 * from min and incremented to max
 */
int *array_range(int min, int max)
{
	int *result;
	int i, result_index;

	if (max < min)
		return (NULL);

	result = malloc(sizeof(int) * (max - min) + 1);
	if (!result)
		return (NULL);

	i = min;
	result_index = 0;
	while (i <= max)
	{
		result[result_index] = i;
		i++;
		result_index++;
	}

	return (result);

}
