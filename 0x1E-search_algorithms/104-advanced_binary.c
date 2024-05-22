#include "search_algos.h"

/**
 * _advanced_binary - searches for value in array of integers
 * @array: pointer to array of integers
 * @size: size of an array
 * @value: value to search for
 *
 * Return: the index containing value, or -1 if not found 
 */
int *_advanced_binary(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!size || !array)
		return (NULL);
	for (printf("Searching in array: "); i < size; i++)
		printf("%d%s", array[i], i + 1 == size ? "\n" : ", ");

	i = (size - 1) / 2;
	if (array[i] == value)
	{
		if (i)
			return (_advanced_binary(array, i + 1, value));
		return (array + i);
	}
	else if (array[i] > value)
		return (_advanced_binary(array, i + 1, value));
	else
		return (_advanced_binary(array + i + 1, size - i - 1, value));
}

/**
 * advanced_binary - searches advanced binary value in array of integers
 * @array: arrayof integer
 * @size: size of array
 * @value: value to search for
 *
 * Return: the index containing value, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	int *a = _advanced_binary(array, size, value);

	if (!a)
		return (-1);
	else
		return (a - array);
}
