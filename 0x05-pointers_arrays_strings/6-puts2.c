#include <stdio.h>
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
		i++;
	}
	while (length < i)
	{
		printf("%c", str[length]);
		length += 2;
	}
	printf("\n");
}