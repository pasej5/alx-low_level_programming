#include <stdio.h>

/**
 * main - Software is eating the World
 * description: all possible combinations
 * Return: always 0 on success
 */

int main(void)
{
	int j;
	int k;

		for (j = 0 ; j <= 99 ; j++)
		{
			for (k = 0 ; k <= 99 ; k++)
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			putchar(' ');
			putchar((k / 10) + '0');
			putchar((k % 10) + '0');
				if (j == 99 && k != 99)
				{
					putchar(',');
					putchar(' ');
				}
		}

	putchar('\n');
	return (0);
}
