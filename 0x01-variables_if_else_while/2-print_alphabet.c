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

	for(letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	putchar("\n");
	
	return (0);
}
