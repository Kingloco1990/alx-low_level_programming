#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: A pointer to a pointer that points to the first
 *        node of the listint_t list.
 *
 * Return: The address of the node where the loop starts
 *         or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;
	size_t num_node = 1;

	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}

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
				slow = slow->next;
				fast = fast->next;
			}

			return (slow);
		}
	}

	return (NULL);
}
