#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: pointer to first node
 * Return: returns  the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int c;

	if ((*head) == NULL)
		return (0);
	*head = (*head)->next;
	c = temp->n;
	free(temp);
	return (c);
}
