#include "main.h"

/**
 * _strncat - concatinates two strings
 * @dest: first string
 * @src: second string
 * @n: n bytes from src
 * Return: concatinated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}

	if (n > 0)
	{
		dest[a] = '\0';
	}

	return (dest);
}
