#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: first string
 * @src: second string
 * @n: n bytes from src
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (n > b)
	{
		if (src[b] == '\0')
		{
			for (; b < n; b++)
			{
				dest[a] = '\0';
				a++;
			}
		}

		else
		{
			dest[a] = src[b];
			b++;
			a++;
		}
	}

	return (dest);
}
