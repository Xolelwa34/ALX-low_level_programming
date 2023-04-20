#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - execute a function pointer on each element of an array
 * @array: array of integers
 * @size: size of array
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
