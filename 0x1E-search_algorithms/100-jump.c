#include <stdio.h>
#include <math.h>
#include "search_algos.h"

int jump_search(int *array, size_t size, int value)
{
    size_t step;
    size_t left, right, i;

    if (array == NULL)
        return (-1);

    step = (size_t)sqrt((double)size); /* Cast to double to avoid ISO C90 warning */
    left = 0;
    right = step;

    while (right < size)
    {
        if (array[right] >= value)
            break;

        left = right;
        right += step;

        printf("Value checked array[%lu] = [%d]\n", (unsigned long)right, array[right]);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", (unsigned long)left, (unsigned long)right);

    for (i = left; i <= right && i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}
