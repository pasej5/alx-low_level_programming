#include <stdio.h>

/**
 * main - main function
 *
 * Return: always returns 0 on success
 */

int main(void)
{
	char i;
	char j;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
