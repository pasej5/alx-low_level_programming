#include <stdio.h>
#include "main.h"


/**
 * set_bit - this function sets the value of a bitto 1
 * @n: A pointer to the the input integer
 * @index: index where index is starting
 * Return: 1 if the operation succeessfull
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		/* Index out of range */
		return (-1);
	}

	*n |= (1 << index);

	return (1);
}

