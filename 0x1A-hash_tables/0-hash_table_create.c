#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: size of the array
 *
 * Return: newly created table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned int i = 0;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
	{
		return (NULL);
	}

	new_table->array = malloc(sizeof(hash_table_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		new_table->array[i] = NULL;
	}

	new_table->size = size;

	return (new_table);
}
