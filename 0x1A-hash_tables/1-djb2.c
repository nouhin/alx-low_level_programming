#include "hash_tables.h"

/**
 * hash_djb2 - hash function implementing the djb2 algorithm
 * @str: string to hash
 * Return: hash value
 * Description: hash function implementing the djb2 algorithm
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_value;
	int character;

	hash_value = 5381;
	while ((character = *str++))
	{
		hash_value = ((hash_value << 5) + hash_value) + character;
	}
	return (hash_value);
}
