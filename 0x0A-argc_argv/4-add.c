#include <stdio.h>

/**
 * main - this function adds positive numbers
 * @argc: the argument count
 * @argv: the argument array
 * Return: return 1 if one number contains a symbol and Error if not a digit
 */

int main(int argc, char *argv[])
{
	int result = 1, number, a, b, c;

		for (a = 1; a < argc; a++)
			{
			for (b = 0; argv[a][b] != '\0'; c++)
				{
				if (argv[a][b] > '9' || argv[a][b] < '0')
				{
					printf("%s\n", "Error");
					return (1);
				}
				}

			}
		for (c = 0; c < argc; c++)
		{
		number = atoi(argv[c]);
		result += number;
		}
		printf("%d\n", result);
		return (0);
}
