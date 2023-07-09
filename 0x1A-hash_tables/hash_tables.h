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
} hash_node_t;

/**
 * struct hash_tables_s - Hash table data structure
 * @size: The size of the array
 * @array: Pointer to an array of hash_node_t pointers
 *
 * Description: The hash_tables_s struct represents a hash table
 * data structure. It contains the size of the hash table and an
 * array of hash_node_t pointers to store the key-value pairs.
 */
typedef struct hash_tables_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
char *hash_table_get(const hash_table_t *ht, const char *key);
#endif /* HASH_TABLES_H */
