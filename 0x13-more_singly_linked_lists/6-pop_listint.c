#include "lists.h"

/**
 * pop_listint - Deletes the first element of a list
 * @head: pointer to the first node of the list
 * Return: The first node's data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *k;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	k = *head;
	*head = (*head)->next;
	free(k);
	return (n);
}
