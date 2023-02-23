#include <stdio.h>

/**
 * main - prints out the first 50 fibnacci numbers starting with 1 and 2
 *
 * Return: returns 0
 */

int main(void)
{
	int i;
	long int j, k, next;

	j = 1;
	k = 2;
	i = 0;
	while (i < 50)
	{
		printf("%ld\n", j);
		next = j + k;

		j = k;
		k = next;
		++i;
	}

	return (0);
}
