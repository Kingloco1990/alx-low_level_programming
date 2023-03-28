#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the first node of the listint_t to check.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	const listint_t *temp;

	if (head == NULL)
	{
		return (len);
	}

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		temp = head;
		head = head->next;
		len++;


		if (temp <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			return (len);
		}
	}

	return (len);

}
