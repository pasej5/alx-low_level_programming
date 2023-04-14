#include <stdlib.h>

/**
 * array_range - this function creates an array of integers
 * @min: minimum values
 * @max: maximum values
 *
 * Return: points to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
	return (NULL);

	size = max - min + 1;

	arr = malloc(size * sizeof(int));

	if (arr == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	arr[i] = min + 1;
	return (arr);
}
