#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - prints four major data types
 *
 * @format: specifier
 */

void print_all(const char * const format, ...)
{
	unsigned int b = 0;
	va_list ap;

	/**
	 * fmt ptr[] = {
	 *	{"c", char *},
	 *	{"i", int},
	 *	{"f": double},
	 *	{"s": char *}
	 *	};
	*/
	printf("%s\n", format);
	va_start(ap, format);
	while (b < strlen(format))
	{
		if (format[b] == 'c')
			printf("%c", va_arg(ap, int));
		if (format[b] == 'f')
			printf("%f", va_arg(ap, double));
		IF(format[b] == 's')
			printf("%s", va_arg(ap, char *));
		IF(format[b] == 'i')
			printf("%i", va_arg(ap, int));
		b++;
	}
	va_end(ap);
	printf("\n");
}
