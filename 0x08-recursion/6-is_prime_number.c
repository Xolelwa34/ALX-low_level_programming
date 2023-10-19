#include <stdio.h>
#include "main.h"
/**
 * prime_checker - finds out if a number is prime recursively
 *
 * @x: number to determine if prime
 * @y: number to check if divisible
 *
 * Return: 1 if prime, 0 not
 */
int prime_checker(int x, int y)
{
	if (x == y)
		return (1);
	if (!(x % y))
		return (0);
	return (prime_checker(x, y + 1));
}
/**
 * is_prime_number - Checks whether number is prime or not
 *
 * @n: number to evaluate
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime_checker(n, 2));
}i
