#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: a string
 * @accept: bytes that are determinants to count s
 * Return: returns number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int match;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			match = 1;
			if (s[i] == accept[j])
			{
				match = 0;
				break;
			}
		}
		if (match == 1)
		{
			break;
		}
	}
	return (i);
}
