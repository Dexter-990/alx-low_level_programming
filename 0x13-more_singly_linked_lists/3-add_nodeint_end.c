#include "lists.h"

/**
 * add_nodeint_end - adds new node at the ending
 * @head: pointer to first node
 * @n: integer to be added
 *
 * Return: returns pointer to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *ptr = *head;

	(void) ptr;
	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
		if (*head == NULL)
		{
			*head = new;
			return (*head);
		}

		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new;
		return (new);
	}
	return (0);
}

