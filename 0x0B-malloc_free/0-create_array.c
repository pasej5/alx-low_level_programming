#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - this function creats an arrays of chars
 * @size: size of a given array
 * @c: this will be the argument char
 * Return:Returns NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	if (size == 0)
	return (NULL);

	array = (char *) malloc(sizeof(char) * size);

	if (array == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	array[i] = c;

	return (array);
}
