#include <stdio.h>


/**
 * int_index - searches for an integer in an array
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: pointer to the comparison function
 *
 * Return: index of the first element for which cmp returns non-zero,
 *         or -1 if no element matches or size is <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);

	for (int i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}

	return (-1);
}
