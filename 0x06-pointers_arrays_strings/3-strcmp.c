#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - cmpares two strings
 *
 * @s1: First string to be compared
 * @s2: Second string to be compared
 * Return: returns 0, positive or negative difference of the two strings
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i]; i++)
	{
		if (s1[i] == s2[i])
		{
			continue;
		}
		else if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
