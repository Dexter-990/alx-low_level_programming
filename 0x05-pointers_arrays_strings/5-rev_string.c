#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - reserves a string
 *
 * @s: string to be reversed
 */


void rev_string(char *s)
{
	int len = strlen(s);
	int i;
	char str[1000] = "";

	for (i = 0; s[i]; i++)
	{
		str[i] = s[len - 1];
		len--;
	};
	strcpy(s, str);
}

