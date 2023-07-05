#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to first node
 *
 * Return: returns number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t count = 0;

	if (ptr != NULL)
	{
		while (ptr != NULL)
		{
			count++;
			printf("%d\n", ptr->n);
			ptr = ptr->next;
		}
		return (count);
	}
	return (0);
}

