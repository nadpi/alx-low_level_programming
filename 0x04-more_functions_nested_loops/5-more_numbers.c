#include "main.h"
/**
 * more_numbers - prints the numbers 10 times
 * Return: the numbers
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j < 10)
				_putchar('0' + j);
			else if (j >= 10)
			{
				_putchar('1');
				_putchar('0' + (j % 10));
			}
		}
		_putchar('\n');
	}
}
