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
	int temp[50];

	j = 1;
	for (i = 0; i < n; i++)
	{
		temp[i] = a[i];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = temp[n - j];
		j++;
	}
}
