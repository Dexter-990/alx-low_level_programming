#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 *
 * @s: string to be searched
 * @accept: determinant for s
 * Return: returns a pointer to s
 */


char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (&*(s + i));
			}
		}
	}
	return (&*(s + i));
}
