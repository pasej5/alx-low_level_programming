#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - this function allocates memory using malloc
 * @b: the amount of memory we are going to allocate
 * Return: we return the poiter to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
