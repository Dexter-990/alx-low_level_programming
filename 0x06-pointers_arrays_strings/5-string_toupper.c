#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 *
 * @str: string
 * Return: returns a pointer
 */

char *string_toupper(char *str)
{
	int i = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] = str[i] - 32;
		}
		else
		{
			continue;
		}
	}
	return (str);
}
