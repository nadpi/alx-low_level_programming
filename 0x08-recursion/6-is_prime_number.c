#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: no.
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (prime(n, 2, 0));
}
/**
 * prime - checks if prime
 * @n : no.
 * @c: no.
 * @g: check
 * Return: 0 or 1
 */
int prime(int n, int c, int g)
{
	g = n % c;
	if (g == 0)
	{
		if (c != n)
			return (0);
		else
			return (1);
	}
	if (c > n)
		return (0);
	return (prime(n, c + 1, g));
}
