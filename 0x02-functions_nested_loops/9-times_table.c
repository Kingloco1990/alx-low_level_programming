#include "main.h"
/**
 *times_table - prints the 9 times table, starting with 0
 *
 *
 *Return:  no return value
 *
 */
void times_table(void)
{
	int line, column, mult, tens, ones;

	for (line = 0; line <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			mult = line * column;
			tens = mult / 10;
			ones = mult % 10;

			if (column == 0)
			{
				_putchar('0');
			}
			else if (mult < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
		}
		_putchar('\n');
	}
}
