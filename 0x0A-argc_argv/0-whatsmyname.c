#include <stdio.h>
#include "main.h"

/**
 * main - program that prints its name
 * @argc: argument count
 * @argv: argument array
 * Return: always return 0 on succes
 */

int main(int __attribute__((unused))argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
