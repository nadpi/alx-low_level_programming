#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: string
 * @accept: string
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, cnt = 0, occur = 0, j = 0;

	while (_ischar(s[i]))
	{
		cnt++;
		i++;
	}
	for (j = 0; accept[j] != '\0'; j++)
	{
		for (i = 0; i < cnt; i++)
		{
			if (s[i] == accept[j])
				occur++;
		}
	}
	return (occur);
}
/**
 * _ischar - is char?
 * @c: char
 * Return: 0 or 1
 */
int _ischar(char c)
{
	int val = c;
	if ((val > 96 && val < 124) || (val > 64 && val < 90))
		return (1);
	return (0);
}
