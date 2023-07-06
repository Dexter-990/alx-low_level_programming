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
	listint_t *ptr = *head, *current, *add;
	unsigned int x = 0, a;

	if (head != NULL)
	{
		listint_t *new = malloc(sizeof(listint_t));

		if (new != NULL)
		{
			new->n = n;
			new->next = NULL;

			if (idx == 0)
			{
				add = add_nodeint(&ptr, n);
				return (add);
			}
			while (ptr != NULL)
			{
				x++;
				ptr = ptr->next;
			}
			if (idx > x)
			{
				return (NULL);
			}
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
			} return (new);
		} return (NULL);
	} return (NULL);
}


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
