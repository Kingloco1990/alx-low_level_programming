#include "main.h"

/**
 * prime2 - returns 1 if prime and 0 if otherwise
 *
 * @x: same number as n
 * @y: number that iterates from 1 to n
 * Return: integer
 */
int prime2(int x, int y)
{
	if (x == y)
		return (1);
	else if (x % y == 0)
		return (0);
	return (prime2(x, y + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: integer
 *
 * Return: integer
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
