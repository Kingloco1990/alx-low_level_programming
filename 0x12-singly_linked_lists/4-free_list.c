#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the first node of the list.
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
