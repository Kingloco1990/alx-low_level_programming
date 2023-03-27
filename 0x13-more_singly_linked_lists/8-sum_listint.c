#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n)
 *               of a listint_t list.
 * @head: A pointer to the first node of the listint_t list.
 *
 * Return: The sum of all the data or 0 if the list is
 *         empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
