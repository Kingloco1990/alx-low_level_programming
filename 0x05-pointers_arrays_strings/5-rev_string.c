#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, k = 0, count = 0;
	char a, b;

	while (s[count] != '\0')
	{
		count++;
	}

	i = count - 1;

	while (i >= k)
	{
		a = s[k];
		b = s[i];
		s[k] = b;
		s[i] = a;
		i--;
		k++;
	}
}
