#include "main.h"

/**
 * print_sign- prints sign of number
 *
 * @n: contains variable to be checked
 * Return: returns 1 if positive, 0 if number is 0, -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		putchar(',');
		putchar(' ');
		putchar(n)
		putchar('\n');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		putchar(',');
		putchar(' ');
		putchar(n);
		putchar('\n');
		return (0);
	}
	else
	{

		putchar('-');
		putchar(',');
		putchar(' ');
		putchar(n);
		putchar('\n');
		return (-1);
	}
}
