#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Integer that will be converted in a binary (bits).
 * @index: The index, starting from 0 of the bit you
 *         want to get.
 *
 * Return: The value of the bit at index index or
 *         -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{

	index = 1 << index;

	if (index > 63)
	{
		return (-1);
	}

	if (n & index)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (-1);
}
