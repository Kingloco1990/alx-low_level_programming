#include "main.h"

/**
 * _strlen - function that computes the lenght of a string
 *
 * @i: variable for string length
 * Return: shows the length of a string
 */

int _strlen(char *i)
{
	int a;
	int str_len = 0;

	for (a = 0; i[a] != '\0'; a++)
	{
		str_len++;
	}

	return (str_len);
}
