#include "main.h"

/**
 * print_chessboard -  function that prints the chessboard
 * @a: board
 * Return: always 0 on success
 */

void print_chessboard(char (*a)[8])

{
	int length, width;

	for (length = 0; length < 8; length++)
	{
		for (width = 0; width < 8; width++)
		{
			_putchar(*a[length][width]);
		}
	_putchar('\n');
	}
}
