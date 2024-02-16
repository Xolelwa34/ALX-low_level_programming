#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: size of an array
 *
 * Return: a pointer to the table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hasht;
	unsigned long int idx = 0;

	if (size <= 0)
		return (NULL);

	hasht = malloc(sizeof(hash_table_t));
	if (!hasht)
		return (NULL);
        hasht->size = size;
	hasht->array = malloc(sizeof(hash_node_t *) * size);
	if (hasht->array == NULL)
	{
		free(hasht);
		return (NULL);
	}

	while (idx < size)
	i	hasht->array[idx++] = NULL;
	return (hasht);
}

