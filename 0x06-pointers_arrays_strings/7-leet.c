#include "main.h"

/**
 * leet - encodes string into 1337
 *
 * @str: string to be encoded
 * Return: returns pointer str
 */

char *leet(char *str)
{
	int i, j;
	char uncoded[11] = "aAeEoOtTlL";
	char coded[11] = "4433007711";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; uncoded[j]; j++)
		{
			if (str[i] == uncoded[j])
			{
				str[i] = coded[j];
			}
		}
	}
	return (str);
}
