#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str:  starting with the first character, followed by a new line.
 * Return: always 0 on success
 */

void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
	j++;
	}

	for (i = 0; i < j; i += 2)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
