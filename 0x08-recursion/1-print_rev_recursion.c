#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - reverse string
 * @s: string to be reversed
 * Return: always 0 0n succes
*/

void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(s[0]);
	}
}

