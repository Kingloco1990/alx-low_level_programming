#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	unsigned long int bin;
	int i, num = 0;

	for (i = 63; i >= 0; i--)
	{
		bin = n >> i;

		if (bin & 1)
		{
			_putchar('1');
			num = 1;
		}
		else if (num)
		{
			_putchar('0');
		}
	}
	if (num == 0)
	{
		_putchar('0');
	}
}
