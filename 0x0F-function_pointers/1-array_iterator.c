#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}

}
