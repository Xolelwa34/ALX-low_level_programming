#include "main.h"

/**
 * get_endianness -Order by which bytes are stored in the system
 *
 * Return: 0 if big endian, 1 not
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);

	return (0);
}

