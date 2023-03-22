#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 *
 * @n: function parameter
 * Return: always 0 on success
 */

void print_to_98(int n)
{
	int m;

	if (n >= 0 && n <= 98)
	{
		for (m = n ; m <= 98 ; m++)
		{
			printf("%d,", m);
		}
		printf("\n");
	}
	else if (n < 0)
	{
	for (m = n ; m <= 98; m++)
	{
		printf("%d,", m);
	}
	printf("\n");
	}
	else if (n == 98)
		printf("%d,", n);
}
