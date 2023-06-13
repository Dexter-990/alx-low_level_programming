#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars and initializes it with specific char
 * @size: size of the array
 * @c: character to initialize the array with
 *
 * Return: NULL if size is 0 or pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptr_c;
	unsigned int x = 0;

	if (size == 0)
		return (NULL);
	ptr_c = malloc(sizeof(char) * size);
	if (ptr_c != NULL)
	{
		while (x < size)
		{
			ptr_c[x] = c;
			x++;
		}
		return (ptr_c);
	}
	return (NULL);
}
