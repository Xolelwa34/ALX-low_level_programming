#include "hash_tables.h"

/**
 * hash_table_set - value key to set the hash table
 * @ht: pointer to a key
 * @key: key value
 * @value: value of ke to be sorted
 *
 * Description: add value key to the hash table
 * Return: 1 on success or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *num = NULL, *node = NULL;
	unsigned long int index;

	if (!ht || !key || !*key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	num = ht->array[index];

	while (num)
	{
		if (strcmp(num->key, key) == 0)
		{
			free(num->value);
			num->value = strdup(value);
			return (1);
		}
		num = num->next;
	}


	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(node);
		return (0);
	}

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
