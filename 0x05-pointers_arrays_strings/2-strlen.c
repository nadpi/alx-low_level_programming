#include <string.h>
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: the length
 */
int _strlen(char *s)
{
	int length, i;
	char str[50];

	for (i = 0; i < 50; i++)
	{
		str[i] = *(s + i);
		if (!s)
			break;
	}

	length = strlen(str);
	return (length);
}
