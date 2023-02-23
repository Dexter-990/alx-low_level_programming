
#include <stdio.h>

/**
 * main - prints out the first 50 fibnacci numbers starting with 1 and 2
 *
 * Return: returns 0
 */

int main(void)
{
	int i;
	unsigned long int j, k, next;
	long double o = 16008811023750.101250;
	j = 1;
	k = 2;
	i = 0;
	while (i < 98)
	{
		printf("%lu\n", j);
		next = j + k;

		j = k;
		k = next;
		++i;
	}

	return (0);
}
