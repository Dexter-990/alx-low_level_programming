#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: list_t list
 *
 * Return: returns number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int count;

	if (h != NULL)
	{
		count = 0;
		while (h != NULL)
		{
			if (h->str == NULL)
			{
				count++;
				printf("[0] (nil)\n");
			}
			else
			{
				count++;
				printf("[%d] %s\n", h->len, h->str);
			}
			h = h->next;
		}
	}
	return (count);
}
