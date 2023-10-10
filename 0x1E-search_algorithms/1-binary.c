#include <stdio.h>
#include "search_algos.h"


/**
 * binary_search - Search for the value in a sorted arrayusing binary serch
 * @array: Pointer to the first element in a sorted array
 * @size: Number of the elements in an array
 * @value: Value to search for
 * Return: Index where the value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;
	size_t i;

	if (!array)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
			printf("%d", array[i]);
			else
			printf("%d, ", array[i]);
		}
		printf("\n");

		if (array[mid]  == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
