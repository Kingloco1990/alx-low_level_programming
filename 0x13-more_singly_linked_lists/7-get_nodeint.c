#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t
 *                        list.
 * @head: A pointer to the first node of the listint_t list.
 * @index: The index (starting from 0) of the node to locate.
 *
 * Return: The nth node or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node = 0;

	while (node < index)
	{
		if (head == NULL)
		{
			return (NULL);
		}

		head = head->next;
		node++;
	}

	return (head);
}
