#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - returns a pointer to an initialised 2d array of integers
  * @width: width of the 2D array
  * @height: height of the 2D array
  * Return: returns the 2D array
  */
int **alloc_grid(int width, int height)
{
	/* I had a explanations to help me in the future but that's not allowed :( */
	int **arr;
	/* we're iterating through a 2d array so we need these */
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);
	/* always check that the malloc operation worked */
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);

		if (arr[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(arr[i]);
			}
			free(arr);
			return (NULL);
		}
	}

	for (i = 0; j < width; j++)
	{
		arr[i][j] = 0;
	}
	return (arr);
}
