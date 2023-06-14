#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return pointer to two dimentional array
 * @width: integer
 * @height: integer
 *
 * Return: NULL on failure or if w or h is 0
 */


int **alloc_grid(int width, int height)
{
	int **ptr_x, x, y;

	if (width == 0 || height == 0)
		return (NULL);

	ptr_x = malloc(sizeof(int *) * width);

	if (ptr_x == 0)
		return (NULL);
	for (x = 0; x < width; x++)
	{
		ptr_x[x] = malloc(sizeof(int) * height);
		if (ptr_x[x] == 0)
			return (NULL);
	}

	for (x = 0; x < width; x++)
	{
		for (y = 0; y < height; y++)
		{
			ptr_x[x][y] = 0;
		}
	}
	return (ptr_x);
}
