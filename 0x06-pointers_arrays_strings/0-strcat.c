#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: string to be concatenated to
 * @src: string to be concatenated from
 * Return: returns the pointer dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i])
	{
		++i;
	}
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		++i;
		++j;
	}
	dest[i] = '\0';
	return (dest);
}
