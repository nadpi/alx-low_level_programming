#include "main.h"
/**
 * times_table - func
 * Return: 0
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int res = i * j;

			if (res > 9)
			{
				_putchar('0' + res / 10);
				_putchar('0' + res % 10);
				if (j < 9)
				{
				_putchar(',');
				_putchar(' ');
				}
			}
			else
			{
				_putchar('0' + res);
				if (j < 9)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
