#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to find substring in
 * @needle: substring to find match of
 * Return: pointer to the start of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int a;

	while (*haystack != '\0')
	{
		a = 0;
		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
			haystack++, needle++, a++;
		if (*needle == '\0')
			return (haystack - a);
		haystack -= (a - 1), needle -= a;
	}
	return ('\0');
}
