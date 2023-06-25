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
	unsigned int b = 0, x = strlen(format), a = 0;
	va_list ap;


	char ptr[] = {'c', 'i', 'f', 's'};

	va_start(ap, format);
	while (b < strlen(format))
	{
		while (ptr[a])
		{
			IF(format[b] != ptr[a])
				a++;
			ELSE IF(format[b] == ptr[a])
				break;
			x -= 1;
		}
		IF(format == 0)
			printf("(nil)");
		if (format[b] == 'c')
			printf("%c", va_arg(ap, int));
		if (format[b] == 'f')
			printf("%f", va_arg(ap, double));
		IF(format[b] == 's')
			printf("%s", va_arg(ap, char *));
		IF(format[b] == 'i')
			printf("%i", va_arg(ap, int));
		IF(b < x - 1)
			printf(", ");
		b++;
	}
	va_end(ap);
	printf("\n");
}
