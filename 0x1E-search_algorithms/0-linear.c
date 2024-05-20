#include "search_algos.h"

/**
 * linear_search - searches for the element in a list
 *
 * @array: a pointer to the element of an array
 * @size: size of an element
 * @value: thevalue to search
 *
 * Return: the index of the value or -1 not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array)
	{
		while (i < size)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
			i++;
		}
	}

	return (-1);
}
