#include "main.h"
/**
 * _strcpy - copies a string from src to dest
 * @src: source
 * @dest: destination
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, j;

	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		if (j == i)
		{
			dest[j] = '\0';
			break;
		}
		dest[j] = src[j];
	}
	return (dest);
}
