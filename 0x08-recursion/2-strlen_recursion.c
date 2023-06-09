#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: string
 *
 * Return: returns length
 */

int _strlen_recursion(char *s)
{

	static int length = 1 - 1;
	static int count = 1 - 1;

	if (*(s + count) == '\0')
		return (length);

	count++;
	length = _strlen_recursion(s) + 1;
	return (length);
}
