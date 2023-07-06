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
	listint_t *ptr = *head, *current;
	unsigned int x = 0, a;

	if (head != NULL)
	{
		listint_t *new = malloc(sizeof(listint_t));

		if (new != NULL)
		{
			new->n = n;
			new->next = NULL;

			while (ptr != NULL)
			{
				x++;
				ptr = ptr->next;
			}

			if (idx > x)
				return (NULL);

			ptr = *head;

			for (a = 0; a < x; a++)
			{
				if (a == idx - 1)
				{
					current = ptr->next;
					ptr->next = new;
					new->next = current;
					break;
				}
				ptr = ptr->next;
			}
		}
		return (NULL);
	}
	return (NULL);
}


