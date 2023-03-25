#include "function_pointers.h"

/**
  * int_index - returns the index of an array tht returns the first
  * value that cmp returns >0
  * @array: the array of integers to check
  * @size: size of the array
  * @cmp: the function that is used to compare the values
  * Return: returns the index of the element that cmp returns > 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && size > 0 && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}

	return (-1);
}
