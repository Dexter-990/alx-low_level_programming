#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 *
 * @n: Where n is the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int i;
	int space;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (space = 0; space < i; space++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
