#include "lists.h"

/**
 * sum_listint - sums up integer in each node
 *
 * @head: pointer to first node
 * Return: returns the sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	if (head != NULL)
	{
		while (ptr != NULL)
		{
			sum += ptr->n;
			ptr = ptr->next;
		}
		return (sum);
	}
	return (0);
}
