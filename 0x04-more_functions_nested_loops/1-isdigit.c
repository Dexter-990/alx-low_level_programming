#include "main.h"

/**
 * _isdigit - checks if number is a digit
 *
 * @c: number to be checked
 * Return: returns 1 if true else 0
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
