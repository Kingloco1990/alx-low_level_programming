#include "lists.h"

/**
 * free_dlistint - Frees a linked dlistint_t list.
 * @head: The head of the dlistint_t list.
 */
void free_dlistint(dli	{
		tmp = head->next;
		free(head);
		head = tmp;stint_t *head)
{
	dlistint_t *tmp;

	while (head)

	}
}
