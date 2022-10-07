#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: address of memory to fill
 * @b: the constant byte for filling the address pointed by @s
 * @n: number of bytes of memory to be filled
 *
 * Return: the pointer @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
