#include "main.h"

/**
 * binary_to_uint - converts binary to decimal
 * @b: pointer to binary
 * Return: returns converted number
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, c, x = 0;

	if (b == NULL)
		return (0);
	while (b[x])
		x++;

	while (*b)
	{
		c = (*b) - '0';
		if (c > 1)
			return (0);
		x--;
		sum += c << x;
		b++;
	}
	return (sum);
}

