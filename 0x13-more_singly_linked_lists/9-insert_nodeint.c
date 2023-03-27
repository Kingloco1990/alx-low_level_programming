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
	unsigned int i = 0;
	listint_t *temp, *new;

	temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (NULL);
	}

	while (i < (idx - 1))
	{
		if (temp == NULL || temp->next == NULL)
		{
			return (NULL);
		}

		temp = temp->next;
		i++;
	}

	new->n = n;
	new->next = temp->next;
	temp->next = new;

	return (new);
}	
