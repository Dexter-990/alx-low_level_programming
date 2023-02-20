#include <stdio.h>

/**
 * main - prints combinations of two two-digits
 *
 * Return: returns success always
 */

int main(void)
{
	int x, y, z, a;

	for (x = 0; x <= 98; x++)
	{
		for (y = x + 1; y <= 99; y++)
		{
			putchar(48 + (x / 10));
			putchar(48 + (x % 10));
			putchar(' ');
			putchar(48 + (y / 10));
			putchar(48 + (y % 10));
			if (x != 98 || y != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
