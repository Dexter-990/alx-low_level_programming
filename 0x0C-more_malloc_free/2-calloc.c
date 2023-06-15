#include <stdlib.h>
#include "main.h"

/**
 * _calloc - creates memory for an array using malloc
 * @nmemb: array size
 * @size: size bytes for each element
 *
 * Return: returns pointer of the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	for (x = 0; x < nmemb; x++)
	{
		*((char *) ptr + x) = 0;
	}
	return (ptr);
}
