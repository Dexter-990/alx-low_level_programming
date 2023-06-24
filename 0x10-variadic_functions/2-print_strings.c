#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 *
 * @separator: separator of sstring
 * @n: parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list ap;

	va_start(ap, n);
	for (x = 0; x < n; x++)
	{
		printf("%s", va_arg(ap, char *));
		if (separator != NULL && x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
