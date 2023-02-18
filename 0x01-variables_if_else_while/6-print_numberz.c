#include <stdio.h>

/**
 * main - prints single digits in base 10 without the use of char
 *
 * Return: returns 0 if success, else nonzero
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
