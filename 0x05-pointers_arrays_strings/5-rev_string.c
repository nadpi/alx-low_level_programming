#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
 * Return: reveresed string
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char p[100];

	while (s[i] != '\0')
	{
		p[i] = s[i];
		i++;
	}
	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (p[i] != '\0')
	{
		s[j] = p[i];
		i--;
		j++;
	}

}
