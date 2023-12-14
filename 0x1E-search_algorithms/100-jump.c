#include "search_algos.h"

#include <math.h>

/**
 * jump_search - jump search works by jumping to a point in the dataset
 * and comparing if the current value is larger than the one we're
 * looking for and if it is we linear search our way up there otherwise
 * we jump again
 * @array: the array we're looking for
 * @size: the size of the array
 * @value: the value we're looking for
 * Return: -1 if the value is not found or the value's index in the arr
 */
int jump_search(int *array, size_t size, int value)
{
	int retval = -1;
	size_t i = 0, prev_jmp = 0;
	size_t jmp = sqrt(size);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			retval = i;
			break;
		}
		else if (array[i] > value)
		{
			size_t j = prev_jmp;

			while (j < i)
			{
				if (array[j] == value)
				{
					printf("Value found between indexes [%lu] and [%lu]\n", prev_jmp, i);
					retval = j;
					break;
				}
				j++;
			}

			break;
		}
		else
		{
			prev_jmp = i;
			i += jmp;
		}
	}

	return (retval);
}

