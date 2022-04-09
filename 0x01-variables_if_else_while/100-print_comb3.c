#include <stdio.h>
/**
 *main - execution and termination of program
 *
 *Return: ends main function
 *
 */
int main(void)
{
	int digit;
	int number;

	for (digit = '0'; digit < '10'; digit++)
	{
		for (number = '0'; number < '10'; number++)
		{
			if (digit < number)
			{
				putchar(digit);
				putchar(number);

				if (digit != '8' || (digit == '8' && number == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	return (0);
i}
