#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head (first node) of the listint_t list.
 *
 * Return: The number of nodes in the listint_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t num_node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num_node++;
		h = h->next;
	}

	return (num_node);
}
