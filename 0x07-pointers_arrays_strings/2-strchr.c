#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 *
 * @c: character to be loocated
 * @s: string to be searched
 * Return: returns a pointer to the 1st occ. of c or NULL if not
 */

char *_strchr(char *s, char c)
{
	int i;
	char *ptr;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			break;
		}
		else
		{
			ptr = NULL;
		}
	}
	return (ptr);
}
