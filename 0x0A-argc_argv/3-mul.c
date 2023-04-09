#include <stdio.h>
#include <stdlib.h>

/**
 * main - this program multiplies 2 numbers
 * @argc: argument count
 * @argv: argument array of strings
 * Return: 0 on success always
 */

int main(int argc, char *argv[])
{
	int result_of_two_numbers, number1, number2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	number1 = atoi(argv[1]);
	number2 = atoi(argv[2]);
	result_of_two_numbers = number1 * number2;

	printf("%d\n", result_of_two_numbers);
	return (0);
}
