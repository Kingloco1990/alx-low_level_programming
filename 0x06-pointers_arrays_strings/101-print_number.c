#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: integer to be printed
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int i = 1;

	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
