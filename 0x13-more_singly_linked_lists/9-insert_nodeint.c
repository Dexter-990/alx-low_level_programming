#include "lists.h"

/**
 * insert_nodeint_at_index - adds new node at index
 *
 * @head: pointer to first node
 * @idx: index to add new node
 * @n: integer
 *
 * Return: returns address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	unsigned int a;

	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;


	if (*head == NULL && idx == 0)
	{
		*head = new;
		new->next = ptr;
		return (*head);
	}
	else if (idx == 0 && *head != NULL)
	{
		*head = new;
		new->next = ptr;
		return (*head);
	}

	for (a = 0; a < (idx - 1); a++)
	{
		ptr = ptr->next;
	}
	new->next = ptr->next;
	ptr->next = new;
	return (ptr->next);
}
