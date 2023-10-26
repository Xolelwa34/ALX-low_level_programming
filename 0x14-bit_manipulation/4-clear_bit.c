#include "main.h"

/**
 * clear_bit - Sets the value of a bit
 * @n: input number
 * @index: index
 *
 * Return: 1 if successful, or -1 if unsuccessful
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	if ((*n >> index) & 1)
	{
		*n -= 1 << index;
		return (1);
	}
	return (1);
}

