#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int k, num = 0;
	unsigned long int first;

	for (k = 63; k >= 0; k--)
	{
		first = n >> k;
		if (first & 1)
	{
		_putchar('1');
		num++;
	}
	else if (num)
		_putchar('0');
	}
	if (!num)
		_putchar('0');
}
