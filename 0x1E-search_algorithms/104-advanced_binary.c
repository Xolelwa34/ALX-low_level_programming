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

int binary_recurtion(int *array, int left, int right, int value);

/**
* advanced_binary - searches for a value in an array of integers
* using the advanced binary search algorithm
* @array: pointer to an array
* @size: size of array
* @value: value that to search for in an array
* Return: return the index value, or -1 if not found
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	return (binary_recurtion(array, 0, (int) size - 1, value));
}

/**
* binary_recurtion - function that searches for a value in an array of integers
* @array: pointer to the array of integers
* @left: first array
* @right: second of array
* @value: value to search for in array
* Return: return the index of value, or -1 if not found
*/

int binary_recurtion(int *array, int left, int right, int value)
{
	int m = (left + right) / 2;

	printf("Searching in array: ");
	print_array(array, left, right);
	if (left >= right)
		return (-1);
	if (array[m] == value)
	{
		if (array[m - 1] != value)
			return (m);
		else
			return (binary_recurtion(array, left--, m, value));
	} else if (value < array[m])
		return (binary_recurtion(array, left, m - 1, value));
	else
		return (binary_recurtion(array, m + 1, right, value));
