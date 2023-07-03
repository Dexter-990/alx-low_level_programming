#include "lists.h"

/**
 * add_node_end - adds new node at the end
 * @head: pointer to the address of head
 * @str: string
 *
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	struct list_s *new = malloc(sizeof(list_t));
	list_t *ptr = NULL;


	ptr = *head;
	if (new != NULL)
	{
		new->str = strdup(str);
		new->len = strlen(str);
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
		return (ptr);
	}
	return (0);
}
