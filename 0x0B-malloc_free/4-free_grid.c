#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid
 * @grid: the jailed grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (!grid)
		return;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}
