#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and
 *                 sets the head to NULL.
 * @head: A pointer to a pointer to the first node of 
 *        the listint_t list.
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	while (*hea)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
