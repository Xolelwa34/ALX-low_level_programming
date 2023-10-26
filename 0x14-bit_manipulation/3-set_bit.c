#include "main.h"

/**
 * set_bit - set bits in a binary number represented by 1
 * @n: unsigned long int
 * @index: index to set bit
 *
 * Return: Always 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	bit = 1 << index;
	*n = *n | bit;
	return (1);
}
