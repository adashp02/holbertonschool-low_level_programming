#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * previously created by my alloc_grid function.
 * @grid: the 2D array to have the memory freed
 * @height: array of rows
 *
 * Return: void
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
