#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src to dest
 *
 * @src: pointer
 * @dest: pointer
 * Return: dest
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (j = 0; src[j] != '\0'; j++)
	{
	}

	for (i = 0; i <= j ; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
