#include "main.h"

/**
 *print_number - prints an integer
 *@n: integer to be printed
 */

void print_number(int n)
{
	unsigned int a = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n == 0)
		_putchar('0');
	else
	{
		while ((n / a) >= 10)
			a *= 10;

		while (i > 0)
		{
			_putchar((n / a) + '0');
			n %= a;
			a /= 10;
		}
	}
}
