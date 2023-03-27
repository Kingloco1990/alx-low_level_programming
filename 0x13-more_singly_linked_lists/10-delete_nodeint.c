#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to a pointer that points to the first
 *        node of the listint_t list.
 * @index: The index of the node to be deleted (it starts at 0).
 *
 * Return: 1 if successful of
 *        -1 if not successful.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *hold;
	unsigned int i = 0;

	temp = *head;

	if (temp == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < (index - 1))
	{
		if (temp->next == NULL)
		{
			return (-1);
		}

		temp = temp->next;
		i++;
	}

	hold = temp->next;
	temp->next = hold->next;
	free(hold);

	return (1);
}
