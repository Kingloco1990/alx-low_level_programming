#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @str: a string
 *
 */

void rev_string(char *str)
{
	int i, k, l;
	char a, b;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	k = i - 1;
	l = 0;

	while (k > l)
	{
		a = str[l];
		b = str[k];
		str[l] = b;
		str[k] = a;
		k--;
		l++;
	}
}
