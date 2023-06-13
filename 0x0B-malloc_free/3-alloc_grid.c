#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates memory and initialises a 2D grid
 * @width: the width of the grid
 * @height: the heigh tof the grid
 * Return: returns a new 2D array of initialised grid
 */
int **alloc_grid(int width, int height)
{
	int **result;
	int h, w;

	if (width <= 0 || height <= 0)
		return (NULL);

	result = malloc(sizeof(int **) * height);
	if (!result)
		return (NULL);

	h = 0;
	while (h < height)
	{
		result[h] = malloc(sizeof(int) * width);
		if (!result[h])
		{
			h = h - 1;
			while (h >= 0)
			{
				free(result[h]);
				h--;
			}
			free(result);
			return (NULL);
		}
		h++;
	}

	h = 0;
	while (w < height)
	{
		result[h][w] = 0;
		w++;
	}

	return (result);
}
