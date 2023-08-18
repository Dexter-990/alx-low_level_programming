#include "lists.h"

/**
 * dlistint_len - finds the number of elements in a list
 * @h: pointer to the start of the list
 * Return: number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t count = 0;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
