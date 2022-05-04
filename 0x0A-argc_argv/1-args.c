#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: number of arguments passed to the program
 * @argv: arguments (array of strings) passed to the program
 * Return: noting (always zero)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
