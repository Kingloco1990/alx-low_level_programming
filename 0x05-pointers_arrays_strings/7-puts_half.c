#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 *
 * @str: string to be printed
 * Return: nothing
 */

void puts_half(char *str)
{
	int i = 0, j, k;

	while(str[i] != '\0')
	{
		i++;
	}

	j = (i - 1) / 2;

	for (k = j + 1; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}

	_putchar('\n');
}
