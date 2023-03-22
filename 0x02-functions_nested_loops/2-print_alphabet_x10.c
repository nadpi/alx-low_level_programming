#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i, j;
	char alphabet;

	for (i = 0; i < 10; i++)
	{
		alphabet = 'a';
		for (j = 0; j < 26 ; j++)
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
	}
}
