#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to first node
 */

void free_listint(listint_t *head)
{
	listint_t *c;
	listint_t *ptr = head;

	while (ptr != NULL)
	{
		c = ptr->next;
		free(ptr);
		ptr = c;
	}
}
