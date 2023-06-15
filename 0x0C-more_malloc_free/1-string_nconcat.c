#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string to be concat.
 * @s2: string to concat. with
 * @n: bytes of s2 to concatenate
 *
 * Return: returns pointer to new allocated memory of the newly formed string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr_c;
	unsigned long int a, b;
	int c, size;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > strlen(s2))
		n = strlen(s2);

	size =  n + strlen(s1);
	ptr_c = malloc(sizeof(*ptr_c) * size + 1);

	if (ptr_c == NULL)
		return (NULL);

	c = 0;
	for (a = 0; a < strlen(s1); a++)
	{	ptr_c[c] = s1[a];
		c++;
	}

	for (b = 0; b < n; b++)
	{
		ptr_c[c] = s2[b];
		c++;
	}
	ptr_c[c] = '\0';

	return (ptr_c);
}
