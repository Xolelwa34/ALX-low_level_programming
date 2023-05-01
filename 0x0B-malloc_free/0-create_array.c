#include "main.h"
#include <stdlib.h>

/**
 * create_array - entry point
 * @size: Size of an array
 * @c: character to assign
 * Description: creates an array size and assign character c
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = (char *)malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
