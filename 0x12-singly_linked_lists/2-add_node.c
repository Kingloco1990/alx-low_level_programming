#include "lists.h"

/**
 * add_node - Adds a new node at the beginnig of a list_t list.
 * @head: A double pointer to the head of the list_t list.
 * @str: A string.
 *
 * Return: The address of the newly added node
 *         or NULL if function fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *s;
	list_t *new_node;
	int i = 0;

	/*Allocates memory on the heap for data of type list_t*/
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	s = strdup(str);

	if (s == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[i])
		i++;

	/*Set the values of the structure*/
	new_node->str = s;
	new_node->len = i;
	/*Should point to the address of the previously created node*/
	new_node->next = *head;

	*head = new_node; /*Double pointer pointing to the new node*/

	return (new_node);
}
