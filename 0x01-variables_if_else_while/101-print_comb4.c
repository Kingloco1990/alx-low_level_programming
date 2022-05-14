#include <stdio.h>

/**
 *main - execution and termination of program
 *
 *Return: ends main function
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			for (k = 50; k <= 57; k++)
			{
				if ((i == j) || (j == k))
				{
					continue;
				}
				if ((i > j) || (j > k))
				{
					continue;
				}
				putchar(i);
				putchar(j);
				putchar(k);
				if ((i == 55) && (j == 56) && (k == 57))
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
