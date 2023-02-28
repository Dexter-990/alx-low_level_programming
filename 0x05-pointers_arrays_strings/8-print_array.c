#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: name of array
 * @n: number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
	}
	else
	{

		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
			{
				printf("%d\n", a[i]);
			}
			else
			{
				printf("%d, ", a[i]);
			}

		}
	}
}
