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
	unsigned long int x, y;

	ptr_s = malloc(sizeof(char) * (strlen(s1) + strlen(s2)));
	if (ptr_s == NULL)
		return (NULL);
	x = 0;
	while (x < strlen(s1))
	{
		*(ptr_s + x) = *(s1 + x);
		x++;
	}
	y = 0;
	while (y < strlen(s2))
	{
		*(ptr_s + x) = *(s2 + y);
		y++;
		x++;
	}
	return (ptr_s);
}

