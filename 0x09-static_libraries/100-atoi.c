#include "main.h"

/**
 *  * _atoi - converts a string to an integer
 *   * @s: string to be converted
 *    *
 *     * Return: integer
 *      */

int _atoi(char *s)
{
	int res;
	for (int i = 0; s[i] != '\0'; ++i)
		res = res * 10 + s[i] - '0';

	return res;
}
