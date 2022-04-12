#include "main.h"
/**
 *print_sign - function that checks for alphabetic character
 *
 *@n: integer parameter for the function
 *
 *Return:  returns the sign and number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		putchar(45);
		return (1);
	}
	else
	{
		putchar(48);
		return (n);
	}
}
