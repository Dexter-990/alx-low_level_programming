#include "main.h"

/**
 * 3-islower - checks if word is lower
 *
 * Return: returns 1 if true otherwise 0
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
