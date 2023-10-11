#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @input_key: key to find index of
 * @table_size: size of the hash table
 * Return: index of the key
 * Description: gives the index of a key
 */
unsigned long int
key_index(const unsigned char *input_key, unsigned long int table_size)
{
	return (hash_djb2(input_key) % table_size);
}
