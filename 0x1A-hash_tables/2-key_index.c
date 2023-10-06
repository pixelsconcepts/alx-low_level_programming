#include "hash_tables.h"

/**
 * key_index - Gets the index for a given key using the djb2 hash function.
 * @key: The key string.
 * @size: The size of the array (hash table).
 *
 * Return: The calculated index for the key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

