#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of
 * a dlistint_t linked list
 * @head: head pointer of list
 * @index: index to delete node
 * Return: 1 if succeeded -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	unsigned int idx = 0;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		*head = ptr->next;
		ptr->prev = NULL;
		return (1);
	}
	while (ptr)
	{
		if (idx == index)
		{
			ptr->prev->next = ptr->next;
			ptr->next->prev = ptr->prev;
			free(ptr);
			return (1);
		}
		ptr = ptr->next;
		idx++;
	}
	return (-1);
}
