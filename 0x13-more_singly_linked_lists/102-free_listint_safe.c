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
	listint_t *temp;
	size_t node, counter = 0;

	node = looped_listint_len(*h);

	if (node == 0)
	{
		while (*h != NULL && h != NULL)
		{
			node++;
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}
	else
	{
		while (counter < node)
		{
			counter++;
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}

		*h = NULL;
	}

	return (node);
}
