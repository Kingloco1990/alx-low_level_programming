#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a specific index
 * @head: Pointer to the beginning of the list
 * @index: Index of the node to be freed
 * Return: 1 if susccessful, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int k;
	listint_t *j;
	listint_t *b;

	j = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (k = 0; k < index - 1 && j != NULL && index != 0; k++)
		j = j->next;
	if (j == NULL)
		return (-1);
	if (index == 0)
	{
		b = j->next;
		free(j);
		*head = b;
	}
	else
	{
		if (j->next == NULL)
			b = j->next;
		else
			b = j->next->next;
		free(j->next);
		j->next = b;
	}
	return (1);
}
