#include "lists.h"

/**
 * add_nodeint - Adds new node at the beginning of the list
 * @head: pointer to the first list
 * @n: number to add to a node
 * Return: Address or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first;

	if (head == NULL)
		return (NULL);

	first = malloc(sizeof(listint_t));
	if (first == NULL)
		return (NULL);
	if (*head == NULL)
		first->next = NULL;
	else
		first->next = *head;
	first->n = n;
	*head = first;

	return (*head);
}
