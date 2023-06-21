#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - iterates through an array and calls action
 * on each element
 * @array: the array to iterate through
 * @size: the size of the array
 * @action: the fucntion pointer to call on the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action && size > 0)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}

}
