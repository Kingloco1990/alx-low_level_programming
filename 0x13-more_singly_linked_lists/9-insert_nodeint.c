#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node into a 
 *                           listint_t list at a given 
 *                           position.
 * @head: A pointer to a pointer that points to the first
 *        node of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - (it starts from 0).
 * @n: The integer to insert into the new node.
 *
 * Return: The address of the new node, or NULL 
 *         if the function fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0, j;
	listint_t *temp, *hold, *new;

	temp = *head;
	j = idx - 1;

	while (i < j)
	{
		temp = temp->next;
		i++;
	}

	hold = temp;
	hold = temp->next;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = hold;
	temp->next = new;

	return (new);
}	
