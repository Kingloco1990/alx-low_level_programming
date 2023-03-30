#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number or 0 If b is NULL or contains
 *         chars that are not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int bin_con = 0, mul = 1;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		i++;
	}

	for (i -= 1; i >= 0; i--)
	{
		bin_con += (b[i] - 48) * mul;
		mul *= 2;
	}

	return (bin_con);
}
