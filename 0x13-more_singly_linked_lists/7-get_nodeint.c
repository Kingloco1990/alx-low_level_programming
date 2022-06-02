#include "lists.h"

/**
 * get_nodeint_at_index - Returns a node
 * @head: Pointer to the first element of the list
 * @index: Expected node
 * Return: Pointer to the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;

	for (k = 0; k < index ; k++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
