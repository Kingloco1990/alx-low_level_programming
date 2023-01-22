#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 *           which contains a copy of the string given as a parameter.
 * @str: The string to be copied.
 *
 * Return: A pointer to the duplicated string (on success) else
 *         It returns NULL if insufficient memory was available
 *         NULL if str = NULL
 */

char *_strdup(char *str)
{
	int i; len = 0;
	char *str1;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		len++;
	}

	str1 = malloc(sizeof(char) * len);

	if (str1 == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		str1[i] = str[i];
	}

	str1[len] = '\0';

	return (str1);
}
