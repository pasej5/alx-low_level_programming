#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument array
 * Return: always 0 on success
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 2);
	return (0);
}
