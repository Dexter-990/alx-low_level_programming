#include <stdio.h>

/**
 * main - prints numbers
 *
 * Return: returns 0 for success
 */

int main(void)
{
	int i, j, c;

	for (i = 48, j = 44, c = 32; i < 58; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(j);
			putchar(c);
		}

	}

	putchar('\n');
	return (0);
}
