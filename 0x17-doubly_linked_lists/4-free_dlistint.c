#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: head of node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	ptr = head;
	while (ptr->next != NULL)
	{
		head = ptr->next;
		free(ptr);
		ptr = head;
	}
	free(head);
}
