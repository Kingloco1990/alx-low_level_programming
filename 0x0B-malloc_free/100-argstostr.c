#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of your program
 *             arguments are separated by a new line in the string.
 * @ac: The number of arguments passed to the program.
 * @av: An array of all the arguments.
 *
 * Return: If ac == 0, av == NULL, or the function fails - NULL
 *         Otherwise - a pointer to the new string.
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, size = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		j = 0;

		while (av[i][j] != '\0')
		{
			j++;
		}
		size += (j + 1);
	}

	str = malloc(sizeof(char) * (size + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}

	str[size] = '\0';

	return (str);
}
