#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: main string named s
 * @c: character c
 * Return: Returns a pointer to the first occurrence of c
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
} 
