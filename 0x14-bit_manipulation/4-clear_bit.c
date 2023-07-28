#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: num
 * @index: index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask = 1;

	if (index > 64)
		return (-1);

	mask = ~(mask << index);
	*n = *n & mask;
	return (1);
}
