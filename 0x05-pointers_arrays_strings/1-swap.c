#include "main.h"

/**
 * swap_int - swaps values of two variables
 *
 * @a: variable to be swaped
 * @b: variable to be swaped
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}

