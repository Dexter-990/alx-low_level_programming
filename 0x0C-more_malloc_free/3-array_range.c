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
<<<<<<< HEAD
	int *ptr, x;
	unsigned int size = sizeof(*ptr) * (max - min) + 1;
=======
	int *ptr, x, z = (max - min) + 1;
	unsigned int size = sizeof(*ptr) * z;
>>>>>>> 4d6811167107c3bf7f3f0859fd6aaa945ba52003


	if (min > max)
		return (NULL);

	ptr = malloc(size);

	if (ptr == NULL)
		return (NULL);

<<<<<<< HEAD
	for (x = 0; x < (max - min) + 1; x++)
=======
	for (x = 0; x < z; x++)
>>>>>>> 4d6811167107c3bf7f3f0859fd6aaa945ba52003
	{
		*(ptr + x) = min;
		min++;
	}

	return (ptr);
}

