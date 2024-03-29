#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * _strchr - a function that locates a character in a string.
 * @s: string
 * @c: the character
 * Return: a pointer to the first occurrence of the character c
 *  in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s++);
	return (NULL);
}
