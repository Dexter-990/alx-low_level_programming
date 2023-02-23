#include <stdio.h>

/**
 * main - prints even numbers 4 million in fibonacci
 *
 * Return: returns 0
 */

int main(void)
{
	int x, y, z, next;

	x = 1;
	y = 2;
	z = 0;

	while (z < 40)
	{

		next = x + y;
		x = y;
		y = next;
		if (y < 4000000 && y % 2 == 0)
			printf("%d\n", y);
		z++;
	}
	return (0);
}

