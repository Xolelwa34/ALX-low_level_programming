#include <main.h>
/**
 * _sqrt-recursion - Returns the square root result.
 * @n: number to calculate the square root
 * @base: value number
 * Return: Square root result
 */
int s(int n, int value)
{
	if (n * n == value)
		return (n);
	if (n * n > value)
		return (-1);
	return (s(n + 1, value));
}
/**
 *Act _sqrt_recursion - return the natural square root of a number n.
 * @n: number to check for square roots.
 * Return: the natural square root of number n
 */
int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
