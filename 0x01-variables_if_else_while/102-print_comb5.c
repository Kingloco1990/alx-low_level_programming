#include <stdio.h>
/**
 *main - execution and termination of program
 *
 *Return: ends main function
 */
int main(void)
{
	int digit;
	int number;

	for (digit = 0; digit <= 98; digit++)
	{
		for (number = digit + 1; number <= 99; number++)
		{
			putchar((digit / 10) + '0');
			putchar((digit % 10) + '0');
			putchar(' ');
			putchar((number / 10) + '0');
			putchar((number % 10) + '0');

			if (digit == 98 && number == 99)
			{
			       	continue;
			}

			putchar(',');

			putchar(' ');
		}
	}


	putchar('\n');
	
	return (0);
}
