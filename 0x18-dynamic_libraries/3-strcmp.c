#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: pointer to the first string to be compared
 * @s2: pointer to the second string to be compared
 * Return: if str1 is less than str2 -
 * If Str1 == Str2, 0 on success
 * If str2 > Str2 positive difference
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
