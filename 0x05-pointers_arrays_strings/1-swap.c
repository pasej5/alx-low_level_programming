#include "main.h"

/**
 * swap_int -  function that swaps the values of two integers
 * @a: integer 1
 * @b: integer 2
 * Return: alway 0 on success
 */

void swap_int(int *a, int *b)
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}
