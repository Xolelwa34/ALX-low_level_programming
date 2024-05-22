#include "search_algos.h"

/**
 * binary_search - searches for an element's position in a sorted array
 * @array: an array to search
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index containing value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, m, i;

	if (!array)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		m = (left + right) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
			printf("%i%s", array[i], i == right ? "\n" : ", ");
		if (array[m] < value)
			left = m + 1;
		else if (array[m] > value)
			right = m - 1;
		else
			return ((int)m);
	}

	return (-1);
}
