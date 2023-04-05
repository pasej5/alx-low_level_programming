#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts_recursion - a function that prints a string,
 * @s: pointer to the string parameter
 * Return: alway 0 on succes
 */

void _puts_recursion(char *s)
{
{
	if (s[0] != '\0')
	{
		putchar(s[0]);
		_puts_recursion((s + 1));
	}
	else
		putchar('\n');
}
