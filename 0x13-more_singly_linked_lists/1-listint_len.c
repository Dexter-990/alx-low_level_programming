#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked listint_t list
 * @h: pointer to first node
 *
 * Return: returns number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr  = h;

	if (ptr != NULL)
	{
		while (ptr != NULL)
		{
			count++;
			ptr = ptr->next;
		}
		return (count);
	}
	return (0);
}
