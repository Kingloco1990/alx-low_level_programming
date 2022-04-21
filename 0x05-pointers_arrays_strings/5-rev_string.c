#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, k, l;
	char a, b;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	k = i - 1;
	l = 0;

	while (k > l)
	{
		a = s[l];
		b = s[k];
		s[l] = b;
		s[k] = a;
		k--;
		l++;
	}
}
