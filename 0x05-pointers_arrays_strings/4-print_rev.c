#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 *
 * @i: a string
 *
 */

void print_rev(char *i)
{
	int a = 0;
	int b;

	for (b = 0; i[b] != '\0'; b++)
	{
	}

	for (a = b - 1; a >= 0; a--)
	{
		_putchar(i[a]);
	}

	_putchar('\n');
}
