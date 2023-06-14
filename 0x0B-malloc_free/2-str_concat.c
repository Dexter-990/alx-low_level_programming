#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 *
 * Return: pointer to address of s1 and contents of s2 null terminated or
 * returns NULL if failed
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr_s;
	unsigned int x, y;

		if (s1 == NULL)
		{
			s1 = "";
		}
		if (s2 == NULL)
		{
			s2 = "";
		}

	ptr_s = malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);

	if (ptr_s == 0)
		return (NULL);

	for (x = 0; *(s1 + x) != '\0'; x++)
		*(ptr_s + x) = *(s1 + x);
	for (y = 0; *(s2 + y) != '\0'; y++)
	{
		*(ptr_s + x) = *(s2 + y);
		x++;
	}

	return (ptr_s);
}

