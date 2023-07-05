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
	unsigned int x = 0, a;
	listint_t *ptr = head;

	if (ptr != NULL)
	{
		while (ptr != NULL)
		{
			x++;
			ptr = ptr->next;
		}
		ptr = head;
		for (a = 0; a < x; a++)
		{
			if (index != a)
			{
				ptr = ptr->next;
				continue;
			}
			if (index == a)
			{
				return (ptr);
			}
			return (NULL);
		}
	}
	return (0);
}
