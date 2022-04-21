#include "main.h"

/**
 * _atoi - convert string into an integer
 *
 * @str: a string
 *
 * Retrun: Nil
 *
 */

int _atoi(char *str)
{
	int vibe = 1, i = 0;
	unsigned int tr = 0;

	while (!(str[i] <= '9' && str[i] >= '0') && str[i] != '\0')
	{
		if (str[i] == '-')
		{
			vibe *= -1;
		}

		i++;
	}
	while (str[i] <= '9' && (str[i] >= '0' && str[i] != '\0'))
	{
		tr = (tr * 10) + (str[i] - '0');
		i++;
	}

	tr *= vibe;
	return (tr);
}
