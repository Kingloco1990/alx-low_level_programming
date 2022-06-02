#include "lists.h"

/**
 * free_listint - Frees a list
 * @head: Pointer to the first element of the list
 */
void free_listint(listint_t *head)
{
	listint_t *k;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		k = head->next;
		free(head);
		head = k;
	}
	free(head);
}

