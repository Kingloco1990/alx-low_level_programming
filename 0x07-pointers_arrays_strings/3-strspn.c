#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: characters that prefix substring must include
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k = 0, l = 0;

	while (accept[k] != '\0')
		k++;
	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < k; j++)
			if (s[i] == accept[j])
				l++, j = k;
			else
				if (j == k - 1)
					goto exit;
exit: return (l);
}
