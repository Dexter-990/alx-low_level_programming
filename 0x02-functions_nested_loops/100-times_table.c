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

			if (z == 0)
			{
				putchar(z + '0');
			}
			else if (z < 10 && z != 0)
			{
				putchar(',');
				putchar(' ');
				putchar(' ');
				putchar(' ');
				putchar(z + '0');
			}
			else if ((z > 9) && (z < 100))
			{
				putchar(',');
				putchar(' ');
				putchar((z / 10) + '0');
				putchar((z % 10) + '0');
			}
			else if (z >= 100)
			{
				int x, y;
				
				putchar(',');
				putchar(' ');
				putchar((z / 100) + '0');
				x = z % 100;
				z = x / 10;
				y = x % 10;
				putchar(z + '0');
				putchar(y + '0');
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
