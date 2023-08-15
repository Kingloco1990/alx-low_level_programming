#include "lists.h"

/**
 * looped_listint_len - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t num_node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head;
	fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = (fast->next)->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				num_node++;
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;

			while (slow != fast)
			{
				num_node++;
				slow = slow->next;
			}

			return (num_node);
		}


	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_node, index = 0;

	num_node = looped_listint_len(head);

	if (num_node == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			num_node++;
		}
	}
	else
	{
		while (index < num_node)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			index++;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (num_node);
}
