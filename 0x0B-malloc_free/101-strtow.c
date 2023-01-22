#include "main.h"
#include <stdlib.h>

/**
 * word_index - Returns the index marking the end of the
 *            first word of a string.
 * @str: The string to be searched.
 *
 * Return: The index marking the end of the for word pointed to by str.
 */
int word_index(char *str)
{
	int i = 0, len = 0;

	while (*(str + i) != '\0' && *(str + i) != ' ')
	{
		len++;
		i++;
	}

	return (len);
}

/**
 * num_words - Returns the number of words contained within a string.
 * @str: The string to be searched.
 *
 * Return: The number of words contained within str.
 */
int num_words(char *str)
{
	int i = 0, words = 0, len = 0;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			words++;
			i += word_index(str + i);
		}
	}

	return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: If str = NULL, str = "", or the function fails - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	int i = 0, words, j, letters, k;
	char **strings;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = num_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (j = 0; j < words; j++)
	{
		while (str[i] == ' ')
			i++;

		letters = word_index(str + i);

		strings[j] = malloc(sizeof(char) * (letters + 1));
		if (strings[j] == NULL)
		{
			for (; j >= 0; j--)
				free(strings[j]);

			free(strings);
			return (NULL);
		}
		
		for (k = 0; k < letters; k++)
			strings[j][k] = str[i++];

		strings[j][k] = '\0';
	}
	strings[j] = NULL;

	return (strings);
}
