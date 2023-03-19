#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always 0 success
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
