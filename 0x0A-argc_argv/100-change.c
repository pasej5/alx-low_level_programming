#include <stdio.h>
#include <stdlib.h>

/**
 * main - this program prints the minimum number of coins to make change
 * @argc: argument count of coins
 * @argv: argument array of coins in different amounts
 * Return: return 1 if the number of argument passed is not 1
 */

int main(int argc, char *argv[])
{
	int result = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int i, miniNumber;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	miniNumber = atoi(argv[1]);
	if  (miniNumber < 0)
	{
	printf("0\n");
	return (0);
	}
	for (i = 0; i < 5 && miniNumber >= 0; i++)
	{
		while (miniNumber >= coins[i])
		{
			miniNumber = miniNumber - coins[i];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
