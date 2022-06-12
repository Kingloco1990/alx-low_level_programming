#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 *
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, num = 0;
	unsigned long int first;
	unsigned long int second = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		first = second >> k;
		if (first & 1)
			num++;
	}

	return (num);
}
