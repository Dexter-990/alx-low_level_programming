#include "main.h"

/**
 * _atoi - prints integer values of strings
 *
 * @s: string pointer
 * Return: returns the converted integer
 */

int _atoi(char *s)
{
	int i, j;
	int result = 0;
	int sign = 1;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (s[i] > 47 && s[i] < 58)
		{
			for (j = i; s[j] > 47 && s[j] < 58; j++)
			{
				result = (result * 10) + s[j] - '0';
			}
			break;
		}
	}
	if (sign < 0)
		result *= sign;
	return (result);
}

