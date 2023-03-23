#include "main.h"
/** 
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times
 * Return: line
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (j = 0 ; j < n; j++){
		for (i = 0; i < j ; i++)
		{
			if (n > 0)
				_putchar(' ');
			else
				_putchar('\n');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
