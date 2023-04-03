#include "main.h"
#include <string.h>

/**
 * _memcpy - This function copies memory area
 * @dest: memory destination
 * @src: memory souce
 * @n: size of string
 * Return: returns a pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
		dest[m] = src[m];
	return (dest);

}
