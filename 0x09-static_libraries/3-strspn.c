#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string where substring comes from
 * @accept: string
 * Return: Always 0 on success
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int number = 0;
	int acceptIndex;

	while (*s)
	{
		for (acceptIndex = 0; accept[acceptIndex]; acceptIndex++)
		{
			if (*s == accept[acceptIndex])
			{
				number++;
				break;
			}
			else if (accept[acceptIndex + 1] == '\0')
				return (number);
		}
		s++;
	}
	return (number);
}
