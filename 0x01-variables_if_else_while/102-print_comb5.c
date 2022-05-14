#include <stdio.h>

/**
 * main - execution and termination of program
 *
 * Return: ends main function
 */

int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 56; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					if ((i == 48) && (j == 48) && (k == 48) && (1 == 48))
					{
						continue;
					}
					if ((j > l) || (j == l))
					{
						continue;
					}
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if ((i == 57) && (j == 56) && (k == 57) && (l == 57))
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
