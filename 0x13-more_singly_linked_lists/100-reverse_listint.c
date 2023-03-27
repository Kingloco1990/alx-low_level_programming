#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to a pointer that points to
 *        the first node of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before, *after;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}

	before = NULL;

	while ((*head)->next != NULL)
	{
		after = (*head)->next;
		(*head)->next = before;
		before = *head;
		*head = after;
	}

	(*head)->next = before;

	return (*head);
}
