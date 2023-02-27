#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - reserves a string
 *
 * @s: string to be reversed
 */


void print_rev(char *s)
{
	int len = strlen(s);
	int i;
	char str[100] = "dsaonvfidvfe";

	for (i = 0; s[i]; i++)
	{
		str[i] = s[len - 1];
		len--;
	}
	puts(str);
}

