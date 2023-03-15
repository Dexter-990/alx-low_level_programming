#include "main.h"

/**
 * _strstr - finds the first occurence of substring needle
 * in the string haystack
 *
 * @needle: string to be compared
 * @haystack: string to be compared
 * Return: returns pointerto the begining of located substring or 0 if not
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, index;

	for (i = 0; needle[i]; i++)
	{
		for (j = 0; haystack[j]; j++)
		{
			if ((haystack[j] == needle[i]) &&
				(haystack[j] != '\0' || needle[i] != '\0'))
			{
				index = j;
				do {
					if (needle[i + 1] == '\0')
					{
						return (&haystack[index]);
					}
					j++;
					i++;
				} while (haystack[j] == needle[i]);
			}
		}
	}
	return ('\0');
}

