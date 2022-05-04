#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 *
 * @argc: number of arguments passed to the program
 * @argv: arguments (array of strings) passed to the program
 * Return: nothing (0)
 */

int main(int argc, char **argv)
{
	int k;

	if (argc > 0)
	{
		for (k = 0; k < argc; k++)
		{
			printf("%s\n", argv[k]);
		}
	}
	return (0);
}
