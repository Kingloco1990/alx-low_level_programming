#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to a pointer that points the first node of the
 *        the list.
 * @str: String to be added to the new list.
 *
 * Return: The address of the new node or NULL if the
 *         function fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *s;
	int len = 0;

	/*Allocates memory on the heap for data of type list_t*/
	new_node = malloc(sizeof(list_t));
	if new_node == NULL
		return (NULL);

	s = strdup(str);
	if (s == NULL)
	{
		free(new_node);
		return (NULL);
	}
	else
	{
		while (s[len])
			len++;
	}

	/*Set the values of the structure*/
	new_node->str = s;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
