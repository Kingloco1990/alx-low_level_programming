#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer
 * @b: constant char
 * @n: number of bytes
 * Return: pointer to s string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
