#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str:  starting with the first character, followed by a new line.
 * Return: always 0 on success
 */

void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\n' ; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
