#include <stdlib.h>
#include <time.h>
/**
 *  *main - execution and termination of program
 *   *
 *    *Return: ends main function
 *     */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n>0)
	{
		printf("%d is positive", n);	
	}
	else (n<0)
	{
		printf("%d is negative", n);	
	}
	return (0);
}
