#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at a specific position
 * @h: head pointer
 * @idx: index where new node should be added
 * @n: new nodes data
 * Return: dlistint list
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *temp;
	dlistint_t *new;
	unsigned int indx = 0, len = 1;

	if (!h || !*h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	ptr = *h;
	while (ptr)
	{
		if (indx == idx)
		{
			new = malloc(sizeof(new));
			if (!new)
				return (NULL);
			new->n = n;
			new->next = ptr;
			new->prev = ptr->prev;
			ptr->prev->next = new;
			ptr->prev = new;
			return (new);
		}
		indx++;
		ptr = ptr->next;
	}
	if (indx == idx)
		return (add_dnodeint_end);
	return (NULL);
}
