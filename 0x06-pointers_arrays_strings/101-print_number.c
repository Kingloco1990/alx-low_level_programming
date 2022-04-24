#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: the integer to be printed
 * Return: integer
 */

void print_number(int n)
{
	unsigned int i = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n == 0)
	{
		_putchar('0');
	}

	else
	{
		while ((n / i) >= 10)
			i *= 10;

		while (i > 0)
		{
			_putchar((n / i) + '0');
			n %= i;
			i /= 10;
		}
	}
}