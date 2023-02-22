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
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);;
		return (0);
	}
	else
	{

		_putchar('-');
		return (-1);
	}
}
