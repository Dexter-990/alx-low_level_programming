#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * _switch - uses the switch call
 *
 * @f: param
 * @b: param
 * @ap: param
 */

void _switch(const char * const f, int b, va_list ap)
{
	char *str;

	switch (f[b])
	{

		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			str = va_arg(ap, char *);
			IF(str == 0)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		case 'i':
			printf("%i", va_arg(ap, int));
			break;
	}
}

/**
 * print_all - prints four major data types
 *
 * @format: specifier
 */
void print_all(const char * const format, ...)
{
	unsigned int x = strlen(format);
	int b = 0, a, q = x, y = 0;
	va_list ap;
	char ptr[] = "cifs";

	va_start(ap, format);

	printf("%d\n", q);
	while (format[b] && format)
	{
		a = 0;
		while (ptr[a++])
		{
			if (format[b] == ptr[a])
				break;
			ELSE IF(format[b] != ptr[a])
				continue;
		}
		IF(format[b] != ptr[a])
		{
			q -= 1;
		}
		_switch(format, b, ap);
		IF(y < q - 1)
		{
			printf(", ");
		}
		y++;
		b++;
	}
	va_end(ap);
	printf("\n");
	printf("%d\n", q);
}
