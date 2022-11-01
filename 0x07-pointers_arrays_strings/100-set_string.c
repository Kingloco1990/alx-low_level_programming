#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: Double pointer to the string
 * @to: Pointer to the string
 *
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
