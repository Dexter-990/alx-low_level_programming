#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to first node
 */

void free_list(list_t *head)
{
	list_t *ptr = head;

	while (ptr != NULL)
	{
		free(ptr);
		free(ptr->str);
		ptr = ptr->next;
	}
}
