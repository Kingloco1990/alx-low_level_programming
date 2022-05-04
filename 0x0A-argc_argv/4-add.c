#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isnumber - checks if string is a number
 *
 * @s: string
 * Return: 1 if successful and 0 if otherwise
 */

int _isnumber(char *s)
{
	int i, check, d;

	i = 0, d = 0, check = 1;
	if (*s == '-')
		i++;
	for (; *(s + i) != 0; i++)
	{
		d = isdigit(*(s + i));
		if (d == 0)
		{
			check = 0;
			break;
		}
	}
	return (check);
}
/**
 * main - Execution of code
 *
 * @argc: Counts the arguments supplied to the program
 * @argv: Array of pointers to the strings
 * Return: Nil
 */
int main(int argc, char **argv)
{
	int i, n, k;

	k = 0, n = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (_isnumber(argv[i]))
				n += atoi(argv[i]);
			else
				k = 1;
		}
	}
	if (k == 0)
		printf("%i\n", n);
	else
		printf("%s\n", "Error");
	return (k);
}
