 #include "main.h"

/**
 * string_toupper - converts lowercase string to uppercase
 * @s: string
 * Return: uppercase string
 */

char *string_toupper(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] > 96 && s[a] < 123)
		{
			s[a] -= 32;
		}
		a++;
	}

	return (s);
}
