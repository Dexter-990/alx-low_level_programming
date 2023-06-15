#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using alloc
 * @b: size in bytes to allocate
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *ptr_x;

	ptr_x = malloc(sizeof(ptr_x) * b);

	if (ptr_x == NULL)
		exit(98);

	return (ptr_x);
}
