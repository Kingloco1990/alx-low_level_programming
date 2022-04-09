#include <stdio.h>
/**
 *main - execution and termination of program
 *
 *Return: ends main function
 */
int main(void)
{
	int digit, number, figure;

	for (digit = '0'; digit <= '9'; digit++)
	{
		for (number = '0'; number <= '9'; number++)
		{
			for (figure = '0'; figure <= '9'; figure++)
			{
				if (digit < number && number < figure)
				{
					putchar(digit);
					putchar(number);
					putchar(figure);

					if (digit == '7' && number == '8' && figure == '9')
					{
						break;
					}
					
					putchar(',');
					putchar(' ');
				}
			}

		}
	}

	putchar('\n');

	return (0);
}
