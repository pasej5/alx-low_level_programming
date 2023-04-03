#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: main string named s
 * @c: character c
 * Return: Returns a pointer to the first occurrence of c
 */

char *_strchr(char *s, char c)
{
	int m = 0;

	while (s[m] >= '0')

	{
		if (s[m] == c)
		m++;
		return (&s[m]);
	}
	return (0);
}
