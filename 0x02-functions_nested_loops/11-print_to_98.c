#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - func
 * @n: num
 * return: result
 */
void print_to_98(int n)
{
	int i;

	
	if (n < 98)
	{
	for (i = n; i < 99 ; i++)
	{
		printf("%d", i);
		if (i < 98)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	}
	else
	{
	for (i = n; i > 99 ; i--)
	{
		printf("%d", i);
		if (i < 98)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	}
}
