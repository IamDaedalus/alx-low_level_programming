#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - returns the index of the first element that the
 * function pointer cmp, returns 0 for
 * @array: the array to iterate through
 * @size: the size of the array
 * @cmp: the function pointer that checks the value
 * Return: returns the index or -1 if the value is not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int to_return = -1;
	int i;

	if (array && size > 0 && cmp)
	{
		i = 0;
		while (i < size)
		{
			if (cmp(array[i]))
			{
				to_return = i;
				break;
			}
			i++;
		}
	}

	return (to_return);
}
