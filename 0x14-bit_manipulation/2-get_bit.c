#include "main.h"

/**
 * get_bit - gets the value of a bit at an index
 * @n: decimal integer to be checked
 * @index: index
 * Return: returns value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int cur;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	cur = (n >> index) & 1;
		return (cur);
}
