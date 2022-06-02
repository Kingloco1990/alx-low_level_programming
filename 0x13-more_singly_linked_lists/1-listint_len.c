#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: Pointer to the begining of the list
 * Return: nodes
 */
size_t listint_len(const listint_t *h)
{
	unsigned int k;

	if (h == NULL)
		return (0);
	for (k = 0; h != NULL; k++)
		h = h->next;
	return (k);
}
