#include "main.h"
/**
 *main - execution and termination of program (check the code)
 *
 *Return: ends main function (always 0)
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char i;
			
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
