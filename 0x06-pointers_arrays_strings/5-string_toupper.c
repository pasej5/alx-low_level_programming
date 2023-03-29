#include "main.h"

/**
 * string_toupper -  lower case to upper case
 * @str: string to be changed
 * Return: A pointer to ther changed string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	str[i] -= 32;
	i++;
	}
	return (str);
}
