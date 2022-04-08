#include <stdio.h>
/**
 *main - execution and termination of program
 *
 *Return: ends main function
 */
int main(void)
{
	int digit;

	for (digit = 48; digit < 58; digit++)
	{
		putchar(digit);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
