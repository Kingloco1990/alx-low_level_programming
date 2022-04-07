#include <stdio.h>
/**
 * main - execution and termination of program
 * Return: ends main function
 */
int main(void)
{
	char name[] = "Dora Korpar";
	char str_1[] = "and that piece of art is useful";
	int year = 2015;
	int month = 10;
	int day = 19;
	fprintf(stderr, "%s\"- %s, %d-%d-%d \n", str_1, name, year, month, day);
	return (1);
}
