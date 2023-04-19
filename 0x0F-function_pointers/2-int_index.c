#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - integer index
 * @array: array pointer
 * @size: array size
 * @cmp: compare fumction
 *
 * Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	return (-1);

	while (i < size)
	{
	if ((*cmp)(array[i]) != 0)
		return (i);
	i++;
	}

	return (-1);
}
