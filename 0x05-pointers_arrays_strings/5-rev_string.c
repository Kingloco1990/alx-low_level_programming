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
	char a[1000];

	while (s[count] != '\0')
	{
		count++;
	}

	i = count - 1;

	while (i >= k)
	{
		a[k] = s[i];
		i--;
	}
}
