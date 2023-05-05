#include <stdio.h>
#include "main.h"



/**
 * binary_to_uint -this function converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one or more chars
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_value_of_binary = 0;

	if (b == NULL)
		return (0);


	for (; *b; ++b)
	{

		if (*b != '0' && *b != '1')
			return (0);

		decimal_value_of_binary = (decimal_value_of_binary << 1) + (*b - '0');
	}

	return (decimal_value_of_binary);
}
