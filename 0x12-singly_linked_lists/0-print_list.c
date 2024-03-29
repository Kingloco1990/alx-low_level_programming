#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to first node of the list_t list.
 *
 * Return: Number of nodes in the list.
 */

size_t print_list(const list_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		num_nodes++;
		h = h->next; /*updates the h pointer to point to the next node in the list*/
	}

	return (num_nodes);
}
