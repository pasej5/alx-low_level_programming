#include "main.h"

/**
 * _strncpy -  function that copies a string
 * @dest: destination strinbg
 * @src: source string
 * @n: number of characters in a string
 * Return: Return a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)

{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
