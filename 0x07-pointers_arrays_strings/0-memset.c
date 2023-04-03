#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _memset - filling memory with a constant byte
 * @s: memory area of the string
 * @b: constant value of named b
 * @n: the first value of the memory allocated
 * Return: pointer to the memory area of the sring
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
		n++;
	}
	return (s);

}
