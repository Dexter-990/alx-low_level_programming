#include "main.h"

/**
 * _puts - prints string to standard output
 *
 * @str: string variable to be printed
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
