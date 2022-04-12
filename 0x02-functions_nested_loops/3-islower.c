#include "main.h"
/**
 *_islower - function that checks for lowercase character
 *
 */
int _islower(int c)
{
	if (c > 97 && c < 123)
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
