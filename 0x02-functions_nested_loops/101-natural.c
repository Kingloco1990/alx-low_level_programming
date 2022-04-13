#include <stdio.h>
/**
 *main - execution and termination of program
 *
 *Return: ends the main funtion
 */
int main(void)
{
	int i = 1024, j, sum = 0;
	
	for (j = 0; j < i; j++)
	{
		if ((j % 3 == 0) || (j % 5 == 0))
		{
			sum = sum + j;
		}
	}
	printf("%d\n", sum);
	return (0);
}
