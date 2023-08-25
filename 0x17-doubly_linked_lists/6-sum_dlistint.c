#include "lists.h"

/**
 * sum_dlistint - finds the sum of all elemesnts in a list
 * @head: head node
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum = 0;

	if (!head)
		return (0);
	ptr = head;
	while (ptr != NULL)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
