#include <stddef.h>

/**
  * array_iterator - iterates through an array and calls a func ptr on each e
  * @array: the array to iterate through
  * @size: the size of the array
  * @action: the action to perform on each element of the array
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}

}
