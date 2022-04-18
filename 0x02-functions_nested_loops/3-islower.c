#include "main.h"
/**
 *_islower - function that checks for lowercase character
 *
 *@c: integer parameter for the function -islower
 *
 *Return:  returns 1 for lowercase ad 0 for uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
