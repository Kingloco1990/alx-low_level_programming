#include "main.h"
/**
 *main - execution and termination of program
 *
 *Return: ends main function
 */
int main(void)
{
	char word[] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(word[i]);
	}

	_putchar('\n');

	return (0);
}
