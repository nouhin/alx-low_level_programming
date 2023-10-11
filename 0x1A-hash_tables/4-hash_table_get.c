#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table to look into
 * @key: the key to look for
 * Return: the value associated with the element
 * 	   NULL if key couldn't be found
 * Description: retrieves a value associated with a key
 *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *temp_node;

	if (ht == NULL || ht->array == NULL || ht->size == 0 || key == NULL
		|| strlen(key) == 0)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	temp_node = ht->array[idx];
	while (temp_node != NULL)
	{
		if (strcmp(temp_node->key, key) == 0)
			return (temp_node->value);
		temp_node = temp_node->next;
	}
	return (NULL);
}
