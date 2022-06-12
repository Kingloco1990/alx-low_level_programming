#include "main.h"

/**
 *print_number - prints an integer
 *@n: integer to be printed
 *
 * Return: nothing
 */

void print_number(int n)
{
	int i, j = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	i = n;

	while (i > 9)
	{
		i /= 10;
		j *= 10;
	}
	for (; j >= 1; j /= 10)
	{
		_putchar(((n / j) % 10) + '0');
	}
}
