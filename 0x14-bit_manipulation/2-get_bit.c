#include "main.h"
/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: number
 * @index: index
 * Return: the value at inded or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i, cnt = 0;
	unsigned long int num = n, mod;

	while (n > 0)
	{
		n = n >> 1;
		cnt++;
	}
	if (index > cnt)
		return (-1);

	for (i = 0; i <= index; i++)
	{
		mod = num % 2;
		num /= 2;
	}
	return ((int)mod);
}
