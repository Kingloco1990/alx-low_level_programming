#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely (ie.
 *                     can free lists containing loops)
 *                     The function sets the head to NULL.
 * @h: A pointer to a pointer that points to the first
 *     node of the listint_t list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *temp;

	if (h == NULL)
	{
		return (0);
	}

	while (*h != NULL)
	{
		len++;
		temp = *h;
		*h = (*h)->next;

		if (temp <= (*h))
		{
			printf("-> [%p] %d\n", (void *)(*h), (*h)->n);
			*h = NULL;
			free(temp);
			return (len);
		}

		free(temp);
	}

	return (len);
}
