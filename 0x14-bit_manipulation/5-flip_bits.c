#include "main.h"

/**
 * flip_bits - the number of bits you would need to
 * flip to get from one number to another
 * @n: number
 * @m: number
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int len;
	unsigned int count = 0;

	len = n ^ m;
	while (len)
	{
		if (len & 1)
			count++;
		len = len >> 1;
	}
	return (count);
}

