#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Free 2D array
 * @grid: rows of the grid
 * @height: Number of rows in the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	while (height)
		free(grid[--height]);
	free(grid);
}
