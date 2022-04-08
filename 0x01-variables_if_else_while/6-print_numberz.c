#include <stdio.h>
/**
 *main - execution and termination of program
 *
 *Return: ends main function
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit);
	}

	putchar('\n');

	return (0);
}
