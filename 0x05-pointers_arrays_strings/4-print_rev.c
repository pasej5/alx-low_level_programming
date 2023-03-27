#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: I've not got a reverse gear
 * Return: always 0 on success
 */

void print_rev(char *s)

{
	int m = 0;

	while (s[m] != '0')
	{
	m++;
	}
	for (m -= 1; m >= 0; m--)
	{
	_putchar(s[m]);
	}
	_putchar('\n');
}
