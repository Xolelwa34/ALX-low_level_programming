#include "hash_tables.h"

/**
 * hash_table_get - get value of the key
 * @ht: pointer to hash tabl
 * @key: key tofind
 *
 * Description: find key from the hash table
 * Return: value at the key location or NULL if not
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *num = NULL;
	unsigned int index;

	if (ht && key)
	{
		index = key_index((unsigned char *)key, ht->size);
		num = ht->array[index];
		if (num == NULL)
			return (NULL);
		while (strcmp(num->key, key) != 0)
			num = num->next;
		return (num->value);
	}
	return (NULL);
}
