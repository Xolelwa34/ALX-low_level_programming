#include "main.h"
/**
 * is_prime_number - To check whether a prime is a number or not
 * @n:Input
 * Return: 0 if n is not a prime, 1 if it is a prime.
 */
int is_prime_number(int n)
{
	return (Act_prime(n, 2, n / 2));
}

/**
 *  Act_prime - blank
 * @n: checker
 * @i:Iterator
 * Return: 0
 */

int Act_prime(int n, int i, int sum)
{
	if ((n % i == 0 && i <= sum) || n < 0 || n == 1)
		return (0);
	else if (n % i != 0 && i <= sum)
		return (Act_prime(n, i + 1, sum));
	else
		return (1);
}
