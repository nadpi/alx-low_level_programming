#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: num
 * @index: index
 * Return: o or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1, bit;

	mask = mask << index;
	bit = *n | mask;
	return (bit);
}
