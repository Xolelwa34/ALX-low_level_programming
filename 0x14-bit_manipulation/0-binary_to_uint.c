#include "main.h"

/**
 * binary_to_uint - converts binary number to decimal
 * @b: binary
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int digit;
	unsigned int i;

	for (digit = 0, i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			digit = (digit << 1) | 1;
		else if (b[i] == '0')
			digit <<= 1;
		else if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	return (digit);
}
