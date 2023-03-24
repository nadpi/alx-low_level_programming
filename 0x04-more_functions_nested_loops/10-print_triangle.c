#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size
 * Return: triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = size-1 ; j > i; j--)
		{
			_putchar(' ');

		}
		for (k = i; k >= 0; k--)
		{
		_putchar('#');
		}
		_putchar('\n');
	}
}
