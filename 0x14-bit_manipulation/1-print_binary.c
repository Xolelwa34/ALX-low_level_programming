#include <stdio.h>
/**
 * print_binary - prints int values
 * @n: long unsigned int
 */

void print_binary(unsigned long int n)
{
	signed long int value;
	char c;
	int digit;

	value = sizeof(n) * 8 - 1;

	if (n == 0)
	{
		printf("0");
		return;
	}

	if (n == 1)
	{
		printf("1");
		return;
	}

	digit = 0;

	while (value >= 0)
	{
		c = (n >> value) & 1;

		if (digit == 1)
			putchar(c + '0');
		else
		{
			if (c == 1)
			{
				putchar(c + '0');
				digit = 1;
			}
		}

		value -= 1;
	}
}
