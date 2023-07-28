#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, decimal = 0, power = 1;

	if (b == NULL)
		return (0);
	
	while (b[i] != '\0')
		i++;

	i--;	
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		decimal += (b[i] - '0') * power;
		power = power * 2;
		i--;
	}
	return (decimal);
}
