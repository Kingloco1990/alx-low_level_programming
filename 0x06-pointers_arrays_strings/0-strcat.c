#include "main.h"

/**
 * _strcat - concatinates two strings
 * @dest: first string
 * @src: second string
 * Return: concatinated string
 */

char *_strcat(char *dest, char *src)
{
	int k = 0, b = 0;

	while (dest[k] != '\0')
	{
		k++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		k++;
		b++;
	}

	dest[a] = '\0';

	return (dest);
}
