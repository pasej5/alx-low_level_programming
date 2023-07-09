#include "hash_tables.h"
#include <stdlib.h>

/**
 * key_index - Gives the index of a key in the hash table array
 * @key: The key
 * @size: The size of the array in the hash table
 *
 * Return: The index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	unsigned long int index;

	/* Calculate the hash value using the hash_djb2 function */
	hash_value = hash_djb2(key);

	/* Compute the index by taking the modulus of the hash value with the size of the array */
	index = hash_value % size;

	return (index);
}
