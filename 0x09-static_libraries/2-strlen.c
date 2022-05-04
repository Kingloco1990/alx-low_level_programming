#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string whose length is to be returned
 * Return: length of a string
 */

int _strlen(char *s)
{
	int a;
	int str_len = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		str_len++;
	}

	return (str_len);
}
