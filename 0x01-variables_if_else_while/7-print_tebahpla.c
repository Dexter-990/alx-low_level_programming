#include <stdio.h>

/**
 * main - prints alphabet in reverse
 *
 * Return: returns 0 if success, else nonzero
 */

int main(void)
{
	char c = 122;

	while (c > 96)
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
