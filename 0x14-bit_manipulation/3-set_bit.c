#include "main.h"
/**
 * set_bit - sets the value to 1 at given index
 * @n: num
 * @index: index
 * Return: 1 of worked or -1
 */
#include <stdio.h>
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 64)
		return (-1);
	mask = mask << index;
	*n = *n | mask;
	return (1);
}
