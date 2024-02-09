#include "main.h"
/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: number
 * @index: index
 * Return: the value at inded or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int cnt = 0;

	while (n > 0)
	{
		if (index == cnt)
		{
			return (n & 1);
		}
		n = n >> 1;
		cnt++;
	}
	return (-1);
}
