#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: num
 * @index: index
 * Return: value or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit = 0;
	unsigned long int num = n, i = 0;

	while (n >> i)
	{
		i++;
	}
	if (index > i)
		return (-1);
	index = i - index;
	index = i - index ;
	bit = (num >> index) & 1;
	return (bit);
}
