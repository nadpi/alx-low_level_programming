#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: the string
 * Return: needed output
 */
void puts2(char *str)
{
	int i = 0, length = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[length]);
		 i++;
	}
	_putchar('\n');
}
