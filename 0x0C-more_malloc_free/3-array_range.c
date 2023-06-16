#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: number to start initializing the array
 * @max: number to end the initialiation
 *
 * Return: returns pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr, x, z = (max - min) + 1;
	unsigned int size = sizeof(*ptr) * z;


	if (min > max)
		return (NULL);

	ptr = malloc(size);

	if (ptr == NULL)
		return (NULL);

	for (x = 0; x < z; x++)
	{
		*(ptr + x) = min;
		min++;
	}

	return (ptr);
}

