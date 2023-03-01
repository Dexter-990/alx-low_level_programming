
#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: destination array
 * @src: string to be copied
 * @n: number of bytes to be copied from src
 * Return: returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (src[j] && j < n)
	{
		*(dest + j) = src[j];
		++j;

	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
