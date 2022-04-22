#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers, followed by a new line
 *
 * @i: array to be printed
 * @k: number of elements of the array to be printed
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int r;

	while (r < n)
	{
		printf("%d", a[r]);
		printf(", ");
		r++;
	}

	printf("\n");
}
