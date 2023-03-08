#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: an array of integers
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i, j;

	j = 1;
	for (i = 0; i < n; i++)
	{
		if (i != 0)
			printf(", ");
		printf("%d", a[n - j]);
		j++;
	}
	printf("\n");
}
