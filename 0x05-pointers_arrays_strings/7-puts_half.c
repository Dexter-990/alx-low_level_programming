#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 *
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int i;
	int len;
	int s;

	len = strlen(str);
	s = ( len - 1) / 2;

	if (len % 2 == 0)
	{
		for (i = len ; str[i]; i++)
		{	
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = len - s; str[i]; i++)
		{	
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
