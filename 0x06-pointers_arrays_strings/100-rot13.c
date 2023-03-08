#include "main.h"

/**
 * rot13 - encodes a string in rot13
 *
 * @s: string to be encoded
 * Return: returns the pointer s
 */

char *rot13(char *s)
{
	int i, j;
	char uncoded[] = "abcdefghijklmnopqrstuvwsyzABCDEFGHIJKLMNOPQRSTUVWSYZ";
	char coded[] = "nopqrstuvwsyzabcdefghijklmNOPQRSTUVWSYZABCDEFGHIJKLM";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; uncoded[j]; j++)
		{
			if (s[i] == uncoded[j])
			{
				s[i] = coded[j];
				break;
			}
		}
	}
	return (s);
}
