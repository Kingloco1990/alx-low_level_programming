# include "main.h"
# include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string whose end will be appended.
 * @s2: The string to be concatenated to s1.
 *
 * Return: On failure, NULL is returned
 *         Otherwise, a pointer to the newly allocated space in memory
 *         containing the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, str_index = 0, len = 0;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		len++;
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		str[str_index++] = s1[i];
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		str[str_index++] = s2[i];
	}

	return (str);
}
