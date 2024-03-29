#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the head (first node) of the listint_t list.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
