#include "main.h"

/**
 * puts_half - unction that prints half of a string
 *
 * @str: a string
 *
 */

void puts_half(char *str)
{
	int i, k, l;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	k = (i - 1) / 2;

	for (l = k + 1; str[l] != '\0'; l++)
	{
		_putchar(str[l]);
	}

	_putchar('\n');
}
