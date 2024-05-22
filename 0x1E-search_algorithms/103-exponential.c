#include "search_algos.h"

/**
 * print_array - print an array
 * @array: pointer to array
 * @l: left index
 * @r: right index
 */
void print_array(int *array, int l, int r)
{
	int i;

	for (i = l; i <= r; i++)
	{
		printf("%d", array[i]);
		if (i < r)
			printf(", ");
	}
	printf("\n");
}

/**
* exponential_search -	function that searches for a value in
* an array of integers using the exponential search algorithm
* @array: pointer to an array
* @size: size of an array
* @value: value to search for in array
* Return: return the index of value, or -1 if not found
*/
int exponential_search(int *array, size_t size, int value)
{
	int index, prev;

	if (!array || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);
	for (index = 1; index <= (int) size; index = index * 2)
	{
		if (value <= array[index])
			break;
		prev = index;
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
	}
	if (index >= (int) size)
		index = (int) size - 1;
	printf("Value found between indexes [%d] and [%d]\n", prev, index);
	index = binary_search(array + prev, index - prev + 1, value);
	if (index < (int) size && index >= 0)
		return (index + prev);
	else
		return (-1);
}

/**
* binary_search - function that searches for a value in an array of integers
* @array: pointer to array
* @size: size of an array
* @value: value to search for in array
* Return: return the index of value, or -1 if not found
*/
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = (int) size - 1;

	while (left <= right)
	{
		int m = (left + right) / 2;

		printf("Searching in array: ");
		print_array(array, left, right);
		if (array[m] == value)
			return (m);
		if (value <= array[m])
			right = m - 1;
		else if (value > array[m])
			left = m + 1;
	}
	return (-1);
}
