#include "lists.h"

/**
 * get_dnodeint_at_index - retrieves the nth node of a list
 * @head: hed of the node
 * @index: index of node to retrieve
 * Return: returns the element
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int count = 0;
	if (!head)
		return (NULL);
	ptr = head;

	while (ptr->next != NULL)
	{
		if (count == index)
			return (ptr);
		ptr = ptr->next;
		count++;
	}
	return (NULL);
}
