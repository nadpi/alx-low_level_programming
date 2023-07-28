#include "main.h"
/**
 * set_bit - sets bit at an index
 * @n: num
 * @index: index
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    unsigned long int mask = 1;

    mask = mask << index;
    *n = *n | mask;
    return (1);
}
