#include "main.h"
#include <stdio.h>

/**
 * main - prints the sum of the multiples of 3 or 5
 *
 * Return: returns 0
 */

int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			sum += i;
		}
		else if (i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
