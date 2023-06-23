#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: number of arguments to be passed
 * Return: returns the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int x;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (x = 0; x < n; x++)
	{
		sum += va_arg(ap, unsigned int);
	}
	va_end(ap);
	return (sum);
}
