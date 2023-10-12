#include <stdio.h>
#include <math.h>
#include "search_algos.h"

int jump_search(int *array, size_t size, int value)
{
	size_t step = (size_t)sqrt((double)size); /* Cast to double to avoid ISO C90 warning */
	size_t left = 0;
	size_t right = step;
	size_t i;

	if (array == NULL)
		return (-1);

	while (right < size && array[right] < value)
	{
		left = right;
		right += step;

		printf("Value checked array[%u] = [%d]\n", (unsigned int)right, array[right]); /* Cast to unsigned int to avoid ISO C90 warning */
	}

	printf("Value found between indexes [%u] and [%u]\n", (unsigned int)left, (unsigned int)right); /* Cast to unsigned int to avoid ISO C90 warning */

	for (i = left; i <= right && i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", (unsigned int)i, array[i]); /* Cast to unsigned int to avoid ISO C90 warning */
		if (array[i] == value)
			return (i);
	}

	return (-1);
}

