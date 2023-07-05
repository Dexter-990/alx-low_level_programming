#include "lists.h"

/**
 * listint_t *get_nodeint_at_index - gets the nth node of listint_t list
 *
 * @head: pointer to first node
 * @index: index of node
 * Return: returns value of index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *ptr = head;

	if (ptr != NULL)
	{
		while (x != index)
		{	x++;
			ptr = ptr->next;
		}
		return (ptr);
	}
	return (0);
}
