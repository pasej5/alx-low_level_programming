#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Search for a value in a sorted array using Jump Search
 * @array: Pointer to the first element of the sorted array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where 'value' is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t left = 0;
	size_t right = 0;
	size_t i;

	if (array == NULL)
		return (-1);

	while (right < size && array[right] < value)
	{
		left = right;
		right += step;

		printf("Value checked array[%lu] = [%d]\n", right, array[right]);

		if (right < size)
		{
			printf("Value checked array[%lu] = [%d]\n", right, array[right]);
		}

		if (array[right] >= value) // Check if the value is within the current block
		{
			break;
		}
	}

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	for (i = left; i <= right && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
