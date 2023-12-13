#include "search_algos.h"

/**
 * binary_search - simple binary search algorithm
 * @array: array to search within
 * @size: the size of the array
 * @value: the value to search
 * Return: the index of the value if found else -1
 */
int binary_search(int *array, size_t size, int value)
{
	int retval = -1;
	int min = 0;
	int max = size - 1;

	while (min <= max)
	{
		/* mid is calculated this to update it always */
		int mid = (min + max) / 2;
		int i = min;

		printf("Searching in array: ");
		while (i <= max)
		{
			if (i != max)
				printf("%d, ", array[i]);
			else
				printf("%d", array[i]);

			++i;
		}
		printf("\n");

		if (array[mid] < value)
			min = mid + 1;
		else if (array[mid] > value)
			max = mid - 1;
		else
		{
			retval = mid;
			break;
		}
	}

	return (retval);
}
