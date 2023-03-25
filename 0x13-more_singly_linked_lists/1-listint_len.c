#include "lists.h"

/**
 * listint_len - Returns the number of elements
 *               in a listint_t list.
 * @h: Pointer to the head (first node) of the listint_t list.
 *
 * Return: The number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t num_element = 0;

	while (h)
	{
		num_element++;
		h = h->next;
	}

	return (num_element);
}
