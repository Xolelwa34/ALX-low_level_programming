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
	unsigned int a = 0;
	hash_node_t *num = NULL, * count = NULL;

	while (a < ht->size)
	{
	num = ht->array[a];
		while (num)
		{
			count = num->next;
			free(num->value);
			free(num->key);
			free(num);
			num = count;
		}
		a++;
	}
	free(ht->array);
	free(ht);
}

