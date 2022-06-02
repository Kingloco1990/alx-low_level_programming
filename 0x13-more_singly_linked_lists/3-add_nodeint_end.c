#include "lists.h"
listint_t *create_node(const int n);

/**
 * add_nodeint_end - Adds a node at the end of a list
 * @head: Pointer to the first list
 * @n: number to add to the node
 * Return: Address or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *first;
	listint_t *k;

	k = *head;
	if (head == NULL)
		return (NULL);

	first = create_node(n);
	if (first == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = first;
		return (*head);
	}
	while (k->next != NULL)
		k = k->next;
	k->next = first;

	return (*head);
}

/**
 * create_node - Creates a node
 * @n: Value for the node
 * Return: A pointer to the beginning of the list
 */
listint_t *create_node(const int n)
{
	listint_t *first;

	first = malloc(sizeof(listint_t));
	if (first == NULL)
		return (NULL);
	first->n = n;
	first->next = NULL;

	return (first);
}
