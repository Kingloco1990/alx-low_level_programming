#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Return: Upon success - 1.
 *         Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *before, *after;

	if (*head == NULL)
	{
		return (-1);
	}

	while (index != 0)
	{
		if (temp == NULL)
		{
			return (-1);
		}
		temp = temp->next;
		index--;
	}

	if (temp == *head)
	{
		*head = temp->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
	}
	else
	{
		after = temp->next;
		before = temp->prev;
		temp->prev->next = after;
		temp->next->prev = before;
	}

	free(temp);
	return (1);
}
