#include "lists.h"

/**
 * add_node_end - Add a new node at the end of the list.
 * @head: Pointer to the ponter pointing to the first node
 *        of the list.
 * @str: Ponter to the string in a node.
 *
 * Return: Address of the new node of NULL if the
 *         function fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	char *s;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	s = strdup(str);
	if (s == NULL)
	{
		free(new);
		return (NULL);
	}

	while (s[len])
		len++;

	new->str = s;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new;
	}

	return (new);
}
