#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @s: string to be capitalized
 * Return: captalized string
 */

char *cap_string(char *s)
{
	int i = 1, j, k;
	char a[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', '\t', ' '};

	if (s[0] > 96 && s[0] < 123)
	{
		s[0] -= 32;
	}

	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123)
		{
			j = 0;
			k = 0;

			while (k == 0 && j < 13)
			{
				if (s[i - 1] == a[j])
				{
					k = 1;
				}
				j++;
			}

			if (k == 1)
			{
				s[i] -= 32;
			}
		}
		i++;
	}

	return (s);
}
