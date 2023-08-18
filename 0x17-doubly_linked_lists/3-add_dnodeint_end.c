#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end
 * @head:  head of node
 * @n: int to add
 * Return: new list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *ptr = *head;

	if (!head)
		return (NULL);
	new = malloc(sizeof(new));
	if (!new)
		return (NULL);

	new->next = NULL;
	new->n = n;
	new->prev = NULL;

	if (*head)
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
		new->prev = ptr;
	}
	else
	{
		*head = new;
	}

	return (new);
}
