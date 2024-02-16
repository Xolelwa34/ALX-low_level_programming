#include "hash_tables.h"

/**
 * hash_table_delete - deletes the table
 * @ht: pointer to  hash table
 *
 * Description: frees the hash table
 * Return: none
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *num = NULL, * count = NULL;

	while (tmp < ht->size)
	{
	num = ht->array[tmp];
		while (num)
		{
			count = num->next;
			free(num->value);
			free(num->key);
			free(num);
			num = count;
		}
		tmp++;
	}
	free(ht->array);
	free(ht);
}

