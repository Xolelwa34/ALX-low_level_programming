#include <main.h>

/**
 * sqrt - Returns the square root
 * @i: same to n
 * @c: number that iterates from 1 to n
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int sqrt(int i, int c)
{
	if (c * c == i)
		return (c);
	else if (c * c > i)
		return (-1);
	return (sqrt(i, c + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}
