#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to first node
 */

void free_list(list_t *head)
{
	list_t *ptr = head, *c;

	while (ptr != NULL)
	{
		c = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = c;
	}
}
