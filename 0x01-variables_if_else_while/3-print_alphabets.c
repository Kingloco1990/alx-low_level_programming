#include <stdio.h>
/**
 * main - execution and termination
 *
 * Return: ends main function
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
