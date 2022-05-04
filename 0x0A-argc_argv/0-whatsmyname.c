#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program followed by a new line
 *
 * @argc: number of arguments passed to the program
 * @argv: arguments (array of strings) passed to the program
 * Return: nothing (0)
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
