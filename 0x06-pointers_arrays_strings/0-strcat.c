#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: string 1
 * @src: string 2
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int destinationLen = 0;
	int sourceLen = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destinationLen++;
	for (i = 0 ; src[i] != '\0' ; i++)
		sourceLen++;
	for (i = 0 ; i <= sourceLen ; i++)
		dest[destinationLen + i] = src[i];
	return (dest);
}
