#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, binar = 1, hold;
	int i, k, cnt = 0, j = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		cnt++;
	}
	for (i = cnt - 1; i >= 0; i--)
	{
		if (b[j] != '0' && b[j] != '1')
		{
			return (0);
		}
		hold = b[j] - '0';
		binar = 1;
		for (k = 1; k <= i; k++)

		{
			binar *= 2;
		}
		num += hold * binar;
		j++;
	}
	return (num);
}
