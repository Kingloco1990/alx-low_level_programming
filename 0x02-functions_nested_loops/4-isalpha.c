#include "main.h"
/**
 *_isalpha - function that checks for alphabetic character
 *
 *@c: integer parameter for the function -islower
 *
 *Return:  returns 1 for alphabetic character and 0 for any other character
 */
int _isalpha(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
