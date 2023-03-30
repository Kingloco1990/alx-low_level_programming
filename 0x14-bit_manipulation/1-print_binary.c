#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	int mask, i;

	mask = 1 << 63;

	for (i = 0; i < 64; i++)
	{
		if ((n & mask) == mask)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
