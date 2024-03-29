#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to int
 * @index: index to be changed
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	m = 1 << index;
	*n = *n & ~m;
	return (1);
}

