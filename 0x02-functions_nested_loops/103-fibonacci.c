#include <stdio.h>

/**
 * main - prints even numbers 4 million in fibonacci
 *
 * Return: returns 0
 */

int main(void)
{
	long int x, y, z, next, sum;

	x = 1;
	y = 2;
	z = 0;
	sum = 0;

	while (z < 50)
	{
		if ((y <= 4000000) && (y % 2 == 0))
			sum += y;

		next = x + y;
		x = y;
		y = next;
		z++;
	}
	printf("%ld\n", sum);
	return (0);
}

