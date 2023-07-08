#ifndef HASH_TABLES_H
#define HASH_TABLES_H


#include <stdlib.h>

/**
 * struct hash_node_s - Hash table Node
 * @key: the key, string
 * @value: The value corresponding to the key
 * @next: A pointer to the next node of the list
 */

typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
}hash_node_t;

/**
 * hash_table_s - hash table data structure
 * @size: The size of the array
 * @array: pointer to an an array
 */

typedef struct hash_tables_s
{
	unsigned long int size;
	hash_node_t **array;
}hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);

#endif /* HASH_TABLES_H */
