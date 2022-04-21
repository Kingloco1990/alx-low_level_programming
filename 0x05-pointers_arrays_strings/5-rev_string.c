#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, k, l = 0, count = 0;
	char a;

	while (s[count] != '\0')
	{
		count++;
	}

	k = count - 1;

	while (k >= l)
	{
		a[l] = s[k];
		k--;
	}
}
