#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees up a 2d grid
 * @grid: array to be free up
 */

void free_grid(int **grid, int height)
{
	int x;
	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
