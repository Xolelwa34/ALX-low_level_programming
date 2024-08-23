#include "hash_tables.h"

/**
 * key_index -Gets the index of a key or value
 * @key: the key to check index
 * @size: size of array 
 *
 * Description: find the index with key arg within array
 * Return: key of the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
