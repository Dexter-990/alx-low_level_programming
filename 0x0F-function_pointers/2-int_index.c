#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: an int array
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: returns the index of the first element for
 * which the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (cmp != 0 && array != 0)
	{
		if (!(size <= 0))
		{
			for (x = 0; x < size; x++)
			{
				if (cmp(array[x]))
					return (x);
				continue;
				if (!(cmp(array[x])))
					return (-1);
			}
		}
		return (-1);
	}
	return (-1);
}

