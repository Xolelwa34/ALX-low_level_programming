#include "hash_tables.h"

/**
 * free_node - Sets the node free
 * @node: To free node
 *
 * Return: none.
 */
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * hash_table_set - Sets the key/value in the hash table.
 * @ht: the hash table
 * @key: pointer to key
 * @value: Value to be set in the hash table.
 *
 * Return: 1 on success, 0 if not.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *num;

	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup((char *)key);
	new_node->value = strdup((char *)value);
	new_node->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		num = ht->array[index];
		if (strcmp(num->key, key) == 0)
		{
			new_node->next = num->next;
			ht->array[index] = new_node;
			free_node(num);
			return (1);
		}
		while (num->next != NULL && strcmp(num->next->key, key) != 0)
		{ num = num->next;
		}
		if (strcmp(num->key, key) == 0)
		{
			new_node->next = num->next->next;
			free_node(num->next);
			num->next = new_node;
		}
		else
		{
			new_node->next = ht->array[index];
			ht->array[index] = new_node;
		}
	}
	return (1);
}
