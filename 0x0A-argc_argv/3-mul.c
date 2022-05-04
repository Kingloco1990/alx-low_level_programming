#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: number of arguments passed to the program
 * @argv: arguments (array of strings) passed to the program
 * Return: Nil
 */

int main(int argc, char **argv)
{
	int n, k;

	k = 0;
	if (argc != 3)
	{
		printf("%s\n", "Error");
		k = 1;
	}
	else
	{
		n = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", n);
	}
	return (k);
}
