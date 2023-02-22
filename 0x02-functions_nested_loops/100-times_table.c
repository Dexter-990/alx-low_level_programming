#include "main.h"

/**
 * print_times_table - prints times table from 0 to n
 *
 * @n: integer to end multiplication
 */

void print_times_table(int n)
{
	int x, y, z;
	
	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			z = x * y;
			if ((z > 9) && (z < 100))
			{
				putchar((z / 10) + '0');
				putchar((z % 10) + '0');
			}
			else if ((z > 99) && (z < 1000))
			{
				int x, y;
				putchar((z / 100) + '0');
				x = z % 100;
				z = x / 10;
				y = x % 10;
				putchar(z + '0');
				putchar(y + '0');
			}

			else
			{
				putchar(z + '0');
			}
			if (y != n)
			{
				putchar(',');
				if ((z + y > 9) && (z + y < 100))
				{
					putchar('.');
					putchar('.');
				}
				else if ((z + y > 99) && (z + y < 1000))
				{
					putchar('.');
				}
				else
				{
					putchar('.');
					putchar('.');
					putchar('.');
				}
			}
		}
		putchar('\n');
	}
}

int main()
{
	print_times_table(12);
	return (0);
}
