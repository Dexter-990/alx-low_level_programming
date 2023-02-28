#include "main.h"
#include <string.h>

/**
 * *_strcpy - copies a string from one variable to another
 *
 * @dest: variable to be copied to
 * @src: variable to be copied from
 * Return: returns pointer 
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int len = strlen(src);

	for (i = 0; i < len + 1; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
