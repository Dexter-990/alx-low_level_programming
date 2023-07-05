#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to first node
 */

void free_listint2(listint_t **head)
{
	listint_t *c, *ptr = *head;

	while (ptr != NULL)
	{
		c = ptr->next;
		free(ptr);
		ptr = c;
	}
	*head = 0;
}
