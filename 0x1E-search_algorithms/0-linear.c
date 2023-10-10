#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Search for a value in an array using Linear
 * @array: Pointer to the first element in the array
 * @size: The number of elements in the array
 * @value: The value to search to search for
 * Return: Index of the first occurence of value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
