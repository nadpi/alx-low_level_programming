#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;
	char alphabet = 'a';

	for (i = 0; i < 26; i++)
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
