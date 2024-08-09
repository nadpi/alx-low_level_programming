#include "main.h"
#include <stdlib.h>
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return: result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (odd(n, 1));
}
/**
 * odd - odd
 * @n: number
 * Return: odd
 */
int odd(int n, int oddn)
{
	if (oddn * oddn > n)
		return (-1);
	if (oddn * oddn == n)
		return (oddn);
	return (odd(n, oddn + 1));
}
