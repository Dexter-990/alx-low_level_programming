#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints last digit
 *
 * @n: number to be evaluated
 * Return: returns the value of the last digit
 */

int print_last_digit(int n)
{
	int x;
	if (n >= 0)
	{
		x = n % 10;
	}
	else
	{
		x = (n % 10) *-1;
	}
	_putchar('0' + x);
	return (x);
}

