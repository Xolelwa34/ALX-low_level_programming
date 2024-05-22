#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * @array: pointer to first element of an array
 * @size: size of an array
 * @value: value to search for
 *
 * Return: first index containing value, 0r -1 if not found
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, m, high;

	low = 0;
	high = (int) size - 1;

	if (!array || size == 0)
		return (-1);
	while (array[low] != array[high] && value >= array[low] &&
	       value <= array[high])
	{
		m = low + (((double) (high - low) / (array[high] - array[low])) *
		             (value - array[low]));

		printf("Value checked array[%ld] = [%d]\n", m, array[m]);
		if (value > array[m])
			low = m + 1;
		else if (value < array[m])
			high = m - 1;
		else
			return (m);
	}
	m = low + (((double) (high - low) / (array[high] - array[low])) *
	             (value - array[low]));
	printf("Value checked array[%ld] is out of range\n", m);
	return (-1);
}
