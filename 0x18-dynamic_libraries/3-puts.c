#include "main.h"

/**
 * _puts -  I do not fear computers. I fear the lack of them
 * @str: function that prints a string, followed by a new line
 * Return: always 0
 */

void _puts(char *str)

{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
