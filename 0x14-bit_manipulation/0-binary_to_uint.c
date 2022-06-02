#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to the binary number
 * Return: the converted number or Zero
 */

unsigned int binary_to_uint(const char *b)
{
    int k;
    unsigned int bin_j = 0;

    if (!b)
        return (0);

    for (k = 0; b[k]; k++)
    {
        if (b[k] < '0' || b[k] > '1')
            return (0);
        bin_j = 2 * bin_j + (b[k] - '0');
    }

    return (bin_j);
}
