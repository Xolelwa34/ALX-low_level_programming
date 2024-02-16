#include "hash_tables.h"

/**
 * hash_table_print - prints the out the hash table
 * @ht: pointer to hash table key
 *
 * Description: prints the elements of hash table
 * Return: none
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr = NULL;
	unsigned int index = 0, tmp = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (index < ht->size)
	{
		if (ht->array[index] == NULL)
		{
			index++;
			continue;
		}
		if (tmp == 1)
			printf(", ");
		tmp = 1;
		num = ht->array[index];
		while (num)
		{
			printf("'%s': '%s'", num->key, num->value);
			if (num->next != NULL)
				printf(", ");
			num = num->next;
		}
		index++;
	}
	printf("}\n");
}
