#include <stdio.h>
/**
 *main - execution and termination of program
 *
 *Return: ends main function
 *
 */
int main(void)
{
	char letter;

	for(letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(tolower(letter));
	}

	putchar("\n");

	return (0);
}
