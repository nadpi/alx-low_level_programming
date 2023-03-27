#include "main.h"
/**
 * _puts - prints a string
 * @str: the sting
 * Return: the printed string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
