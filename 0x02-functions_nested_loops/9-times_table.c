#include "main.h"

/**
 * times_table - prints out times table from 0 to 9
 *
 */

void times_table(void)
{
	int i, j, x;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
		{
			x = i * j;
			if (x > 9)
			{
				putchar(x / 10 + '0');
				putchar(x % 10 + '0');
			}
			else
			{
				putchar(x + '0');
			}
			if (i != 9)
			{
				putchar(',');
				if ((x + j) > 9)
				{
					putchar(' ');
				}
				else
				{
					putchar(' ');
					putchar(' ');
				}
			}
			else
			{
				putchar('\n');
			}
		}
	}
}
