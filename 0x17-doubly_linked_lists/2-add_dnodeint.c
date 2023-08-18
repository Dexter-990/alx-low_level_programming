#include "lists.h"

/**
 * add_dnodeint - adds node at begining of list
 * @head: head ptr of the list
 * @n: const int to add
 * Return: returns ptr to the updated list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->prev = NULL;
	temp->next = *head;

	if (*head)
		(*head)->prev = temp;
	*head = temp;
	return (temp);
}
