#include "main.h"

/**
 *print_number - print an integer
 *@n: the number to be printed
 *
 * Return: nothing
 */

void print_number(int n)
{
	int i = 0, j = 1;

	if (n < 0)
	{
		putchar('-');
		n *= -1;
	}

	i = n;

	while (i > 9)
	{
		i /= 10;
		j *= 10;
	}

	for (; j >= 1 ; j /= 10)
	{
		putchar(((n / j) % 10) + '0');
	}
}
