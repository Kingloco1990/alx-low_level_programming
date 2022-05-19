#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: const
 * Return: integer
 */

int sum_them_all(const unsigned int n, ...)
{
	int i;
	va_list num;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(num, int);
	}
	va_end(num);
	return (sum);
}
