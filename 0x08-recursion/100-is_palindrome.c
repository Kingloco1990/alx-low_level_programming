#include "main.h"

/**
 * palind2 - obtains length of a
 *
 * @x: string
 * @y: integer to count length
 * Return: On success 1.
 */
int palind2(char *x, int y)
{
	if (*x == 0)
		return (y - 1);
	return (palind2(x + 1, y + 1));
}
/**
 * palind3 - compares string vs string reverse
 *
 * @x: string
 * @y: length
 * Return: On success 1.
 */

int palind3(char *x, int y)
{
	if (*x != *(x + y))
		return (0);
	else if (*x == 0)
		return (1);
	return (palind3(x + 1, y - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: string to evaluate
 * Return: On success 1.
 */
int is_palindrome(char *s)
{
	int i;

	i = palind2(s, 0);
	return (palind3(s, i));
}
