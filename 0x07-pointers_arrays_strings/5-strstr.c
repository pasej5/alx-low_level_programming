#include "main.h"

/**
 * _strstr - function finds the first occurrence of the substring
 * @haystack: main string
 * @needle: the substring
 * Return: Returns a pointer to the beginning of the located substring
 */


char *_strstr(char *haystack, char *needle)
{
	char *s1 = haystack, *s2 = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (s1);
		}
		needle = s2;
		s1++;
		haystack = s1;
	}
	return (0);
}
