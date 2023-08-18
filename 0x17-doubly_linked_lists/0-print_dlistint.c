#include "lists.h"

/**
 * print_dlistint - prints all elements fo a doubly linked list
 * @h: a doubly linked list
 * Return: returns number of elements contained in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t count = 0;

	while (ptr != NULL)
	{
		count++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (count);
}
