#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _realloc - This function reallocates memory using malloc and free
 * @ptr: ptr is a pointer to the memory previously allocated
 * @old_size: old size of the allocated space in bytes
 * @new_size: New size of the allocated space
 * Return: Pointer to the newly allocated memory space
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0)
	{
	free(ptr);
	return (NULL);
	}

	if (ptr == NULL)
	{
	return (malloc(new_size));
	}

	if (new_size == old_size)
	{
	return (ptr);
	}

	void *new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
	return (NULL);
	}

	unsigned int min_size = (old_size < new_size) ? old_size : new_size;

	memcpy(new_ptr, ptr, min_size);
	free(ptr);

	return (new_ptr);
}
