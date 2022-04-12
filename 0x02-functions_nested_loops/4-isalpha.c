#include "main.h"
/**
 *_isalpha - function that checks for alphabetic character
 *
 *@c: integer parameter for the function -islower
 *
 *Return:  returns 1 for lowercase or uppercase character and 0 for any other character
 */
int _isalpha(int c)
{
	char a;
	char b;

	a = (c > 96 && c < 123);
	b = (c > 64 && c < 91);

	if (a || b)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
