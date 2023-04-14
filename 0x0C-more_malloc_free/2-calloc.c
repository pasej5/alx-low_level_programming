#include <stdlib.h>
#include "main.h"

/**
 * _calloc - this function allocates memory using malloc
 * @nmemb: number of elements to be captured
 * @size: the size of each array
 * Return: returns pointer to allocated memory and NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	void *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(nmemb * size);

	if (pointer == NULL)
		return (NULL);

	for (a = 0; a < nmemb * size; a++)
		*((char *)pointer + a) = 0;

	return (pointer);
}

