#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array
 *
 * @array: array where numbers are at
 * @size: size of the array
 * @action: pointer to function needed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (action != 0)
	{
		for (x = 0; x < size; x++)
		{
			action(array[x]);
		}
	}
}
