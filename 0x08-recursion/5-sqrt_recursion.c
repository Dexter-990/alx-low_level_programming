#include "main.h"

/**
 * _sqrt - finds the square root
 * @x: given number
 * @y: number for addition
 * Return: returns square root
 */
int _sqrt(int x, int y)
{
	int s;

	if (x < 1)
		return (-1);
	s = x / y;
	if ((y == s) && (x % y == 0))
		return (s);
	else if (y > s)
		return (-1);


	return (_sqrt(x, y + 1));
}


/**
 * _sqrt_recursion - finds the square root of a given number
 * @n: given number
 *
 * Return: returns square root of n
 */

int _sqrt_recursion(int n)
{
	int x = _sqrt(n, 1);

	x *= 1;
	return (x);
}
