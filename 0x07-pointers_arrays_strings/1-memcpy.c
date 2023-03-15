#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @n: number of bytes to be copied
 * @src: memory area to be copied
 * @dest: memory to copy to.
 * Return: returns pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
