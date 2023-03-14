#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 *
 * @h: Pointer to the list_t list.
 * Return: Number of nodes in the list.
 */

size_t print_list(const list_t *h)
{
	size_t num_nodes = 0;

	if (h->str == NULL)
		printf("[0] (nil)\n");

	while (h != NULL)
	{
		printf("[%d] %s\n", c->len, c->str);
		num_nodes++;
		h = h->next; /*updates the h pointer to point to the next node in the list*/
	}

	return (num_nodes);
}
