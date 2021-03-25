#include "holberton.h"
#include <stdlib.h>


/**
 * free_grid - Frees a 2 dimensional grid
 *
 * @grid: 2 dimensional array of integers
 * @height: Height of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
