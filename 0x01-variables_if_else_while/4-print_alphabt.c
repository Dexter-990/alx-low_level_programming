#include <stdio.h>

/**
 * main - prints all alphabet except q and e
 *
 * Return: returns 0 if success, otherwise nonzero
 */

int main(void)
{
	char c = 97;

	while (c < 123)
	{
		if (c == 113 || c == 101)
			c += 1;
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
