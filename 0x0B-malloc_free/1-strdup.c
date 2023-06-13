#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - copies a string to anewly allocated memory
 * @str: string
 *
 * Return: returns pointer or NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *ptr_s;
	unsigned long int x = 0;

	if (str == NULL)
		return (NULL);
	ptr_s = malloc(sizeof(char) * (strlen(str) + 1));
	if (ptr_s != NULL)
	{
		while (x < strlen(str))
		{
			*(ptr_s + x) = *(str + x);
			x++;
		}
		return (ptr_s);
	}
	free(ptr_s);
	return (NULL);

}
