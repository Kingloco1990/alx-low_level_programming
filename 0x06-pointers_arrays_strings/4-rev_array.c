#include "main.h"

/**
 * reverse_array - reverse an array of integers
 * @a: array
 * @n: number of elements of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int r, s, t;

	s = n - 1;

	for (r = 0; r < n / 2; r++)
	{
		t = a[r];
		a[r] = a[s];
		a[s] = t;
		s--;
	}
}
