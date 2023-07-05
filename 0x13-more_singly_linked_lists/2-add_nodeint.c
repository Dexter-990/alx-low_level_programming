#include "lists.h"

/**
 * add_nodeint - adds new node at the begining of list
 * @head: pointer to first node
 * @n: int to be added
 *
 * Return: returns pointer to new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new != NULL)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (*head);

	}
	return (NULL);

}
