#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	int i, num = 0;

	for (i = 15; i >= 0; i--)
	{
		if  ((1 << i) & n)
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
