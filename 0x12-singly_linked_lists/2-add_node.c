#include "lists.h"

/**
 * add_node - adds new node
 * @head: pointer to first node
 * @str: string
 *
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	struct list_s *new = malloc(sizeof(list_t));

	if (new != NULL)
	{
		new->str = strdup(str);
		new->len = strlen(str);
		new->next = *head;
		*head = new;
		return (*head);
	}
	return (NULL);
}

