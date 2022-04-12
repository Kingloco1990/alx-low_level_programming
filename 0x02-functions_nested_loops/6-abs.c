#include "main.h"
/**
 *_abs - function that computes the absolute value of an integer
 *
 *@n: integer parameter for the function
 *
 *Return:  returns absolute number
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
