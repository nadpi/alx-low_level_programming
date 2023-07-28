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

	if (index > 64)
		return (-1);

	bit = (n >> index) & 1;
	return (bit);
}
