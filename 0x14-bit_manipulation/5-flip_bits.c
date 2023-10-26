#include "main.h"

/**
 * flip_bits - flip all the bit values
 * @n: starting
 * @m: target bit
 *
 * Return: the hamming distance
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0;
	unsigned long int bit;

	bit = n ^ m;

	while (bit)
	{
		flip += bit & 1;
		bit >>= 1;
	}

	return (flip);
}

