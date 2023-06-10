#include "main.h"

/**
 * factorial - finds the factorial of a number
 * @n: number
 *
 * Return: returns -1 if n is less than 0, otherwise returns the factorial
 */

int factorial(int n)
{
	int result = 1;

	if (n == 1)
		return (result);
	else if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	result = n * factorial(n - 1);
	return (result);
}
