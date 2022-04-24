#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: the string to be encode
 * Return: encoded string
 */

char *rot13(char *s)
{
	int a = 0, b = 0;
	char string_rot13[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
	char string_alpha[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";

	while (s[a] != '\0')
	{
		do {
			if (s[a] == string_alpha[b])
			{
				s[a] = string_rot13[b];
				break;
			}
			b++;
		}while (string_alpha[b] != '\0');
		b = 0;
		a++;
	}

	return (s);
}
