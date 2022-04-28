#include "main.h"

/**
 * sqrt2 - returns the natural square root of a number
 *
 * @x: same number as n
 * @y: number that iterates from 1 to n
 * Return: integer
 */

int sqrt2(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (sqrt2(x, y + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: integer
 *
 * Return: On success 1.
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
