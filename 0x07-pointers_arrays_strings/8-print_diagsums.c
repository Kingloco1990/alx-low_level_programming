#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of 2 diagnols of square matrix
 * @a: array
 * @size: size of array
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int x, y, sum_1 = 0, sum_2 = 0;

	for (y = 0, x = size - 1; y < (size * size); y += size + 1, x += size - 1)
		sum_1 += a[j], sum_2 += a[x];
	printf("%d, %d\n", sum_1, sum_2);
}
