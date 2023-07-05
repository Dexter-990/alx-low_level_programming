#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to first node
 */

void free_listint2(listint_t **head)
{
	listint_t *c;

	if (head == NULL)
		return;
	while ((*head) != NULL)
	{
		c = (*head)->next;
		free(*head);
		*head = c;
	}
	*head = NULL;
}
