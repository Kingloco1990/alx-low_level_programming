#include "main.h"
/**
 *print_alphabet_x10 - function that prints 10 times the alphabets in lowercase
 *
 */
void print_alphabet_x10(void)
{
	char j;

	int i = 0;

	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}

		_putchar('\n');

		i++;
	}
}
