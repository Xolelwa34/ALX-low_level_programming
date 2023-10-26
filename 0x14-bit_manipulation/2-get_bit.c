#include"main.h"

/**
 * get_bit - returns the value of a bit within a number
 * @n: unsigned long int
 * @index: index
 *
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int digit, value;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	digit = 1 << index;
	value = n & digit;
	if (value == digit)
		return (1);
	return (0);
}
