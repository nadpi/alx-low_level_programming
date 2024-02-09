#include "main.h"
/**
 * flip_bits -  returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: number given
 * @m: number needed
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int cnt = 0;

	while (n > 0 || m > 0)
	{
		if ((n & 1) != (m & 1))
			cnt++;		
		n = n >> 1;
		m = m >> 1;
	}
	return (cnt);
}
