#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array to iterate over.
 * @size: The size of the array.
 * @action: A pointer to the function to be executed.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
	}
}
