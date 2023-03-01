#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 *
 * @dest: string to be cat.
 * @src: string to be cat
 * @n: number of bytes to use from src
 * Return: dest pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, len;

	for (i = 0; dest[i]; i++)
	{
	}
	for (len = 0; src[len]; len++)
	{}

	for (j = 0; j < n; j++, i++)
	{

		if (j > len)
			break;
		dest[i] = src[j];
	}
	if (n < 0)
		dest[i] = '\0';
	return (dest);
}
