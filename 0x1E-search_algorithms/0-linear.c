#include "search_algos.h"

/**
 * linear_search - basic linear search algorithm
 * @array: the array to look through
 * @size: the size of the array
 * @value: the value to find in the array
 * Return: the index of the value if found else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int retval = -1;

	if (!array || size <= 0)
		return (retval);

	while (i < size)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			retval = i;
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		i++;
	}

	return (retval);
}
