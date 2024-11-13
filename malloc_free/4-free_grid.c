#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - Frees a 2D grid created by alloc_grid.
 *
 *@grid: The 2D array to be freed.
 *@height: The height of the 2D array.
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
