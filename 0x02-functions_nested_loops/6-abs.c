#include "main.h"

/**
 * _abs - finds the absolute value of a number
 *
 * @x: integer to be evaluated
 * Return: returns the num
 */

int _abs(int x)
{
	if (x < 0)
	{
		x += x - x;
		return (x);
	}
	else
	{
		return (x);
	}
}

