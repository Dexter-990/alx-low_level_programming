#include "main.h"

/**
 * print_triangle - prints number in a triangular pattern
 *
 * @size: size of number to be printed
 */

void print_triangle(int size)
{
	int i, space;
	int spc = size;
	int pound;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (space = 0; space < spc - 1; space++)
			{
				_putchar(' ');
			}
			for (pound = 0; pound < i + 1; pound++)
			{
				_putchar(35);
			}

			_putchar('\n');
			spc--;
		}
	}
}


