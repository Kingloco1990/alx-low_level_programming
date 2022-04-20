#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @i: integer
 * @k: integer
 */

void swap_int(int *i, int *k)
{
	int l;

	l = *i;
	*i = *k;
	*k = l;
}
