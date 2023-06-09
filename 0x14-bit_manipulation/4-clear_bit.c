#include <stdio.h>
#include "main.h"


/**
 * clear_bit - Set the value of a bit to 0 at a given index
 *
 * @n: pointer to the unsigned long int that represents the bit sequence
 * @index: the index of the bit to be set to 0, starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	mask = 1UL << index;

	mask = ~mask;

	*n &= mask;

	return (1);
}

