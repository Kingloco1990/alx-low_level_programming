#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program followed by a new line
 * @argc: number of arguments passed to the program
 * @argv: arguments (array of strings) passed to the program
 * Return: noting (always zero)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
