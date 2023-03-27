#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
 * Return: reveresed string
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char *p;

	while (s[i] != '\0')
	{
		*p++ = s[i];
		i++;
	}
	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (*p != '\0')
	{
		s[j] = *p--;
		j++;
	}

}
