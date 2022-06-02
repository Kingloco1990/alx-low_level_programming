#include "lists.h"
listint_t *create_new_node(int n);

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: Pointer to the first element of the list
 * @idx: Index to insert a node
 * @n: number to be inserted into the node
 * Return: The address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *j;
	listint_t *jj;
	listint_t *kk;

	j = *head;
	if (head == NULL)
		return (NULL);
	kk = create_new_node(n);
	if (kk == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = kk;
		return (kk);
	}

	if (idx == 0)
		*head = kk;
	for (k = 0; k < idx - 1 && j != NULL && idx != 0; k++)
		j = j->next;
	if (j == NULL)
		return (NULL);
	if (idx == 0)
		kk->next = j;
	else
	{
		jj = j->next;
		j->next = kk;
		kk->next = jj;
	}
	return (kk);
}

/**
 * create_new_node - Creates a new node
 * @n: Value to add to new node
 * Return: A pointer to a node
 */
listint_t *create_new_node(int n)
{
	listint_t *kk;

	kk = malloc(sizeof(listint_t));
	if (kk == NULL)
		return (NULL);
	kk->n = n;
	kk->next = NULL;

	return (kk);
}
