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

	a = (c >= 'a' && c <= 'z');
	b = (c >= 'A' && c <= 'Z');

	if (a || b)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
