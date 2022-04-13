#include <stdio.h>
/**
 *main - execution and termination of program
 *
 *Return: ends the main function
 */
int main(void)
{
	long int i, j = 1, k = 2, sum = 0, tSum = 0;

	for (i = 0; i < 49; i++)
	{
		if ((k % 2 == 0) && (k <= 4000000))
		{
			tSum = tSum + k;
		}
		sum = j + k;
		j = k;
		k = sum;
	}
	printf("%ld\n", tSum);
	return (0);
}
