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
		exit(98);
	}

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		len++;
		temp = head;
		head = head->next;


		if (temp <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}
	}

	return (len);
}
