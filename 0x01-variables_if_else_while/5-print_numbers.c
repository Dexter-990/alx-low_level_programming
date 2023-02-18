#include <stdio.h>

/**
 * main - prints all single digits of base 10 starting from 0
 *
 * Return: returns 0 if success, else nonzero
 */

int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
