#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: size of an array
 *
 * Return: a pointer to the table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int a = 0;

	if (size <= 0)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);
        ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	while (a < size)
	ht->array[a++] = NULL;
	return (ht);
}

