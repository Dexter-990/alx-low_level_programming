#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string
 *
 * @str: string
 * Return: returns pointer string
 */

char *cap_string(char *str)
{
	int i, j;

	for (i = 0; str[i]; i++)
	{
		if ((i == 0 && str[i] > 96) && (str[i] < 123))
		{
			str[i] -= 32;
		}
		j = i + 1;

		if (str[i] == ' '
			|| str[i] == '.' || str[i] == ',' || str[i] == ';'
			|| str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '('
			|| str[i] == ')' || str[i] == '{' || str[i] == '}' || str[i] == '\n'
			|| str[i] == '\t')
		{
			if (str[j] > 96 && str[j] < 123)
			{
				str[j] -= 32;
			}
		}
	}
	return (str);
}
