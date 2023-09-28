#include "main.h"

/**
 * factorial - gets the  factorial of a number
 * @n: integer
 *
 * Return: Always success
 * On error, -1 is returned, and errno is set appropriately.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
