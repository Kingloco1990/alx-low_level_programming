#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 *
 * @i: an array
 * @k: lenght of array
 *
 */

void print_array(int *i, int k)
{
	int r;

	for (r = 0; r < k; r++)
	{
		printf("%d", i[r]);
		if (r < k - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
