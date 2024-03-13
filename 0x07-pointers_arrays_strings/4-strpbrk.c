#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: string
 * @accept: string
 * Return: a pointer to the byte in s that matches one
 * of the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int min = 0, i, j, len = 0, k = 0, flag = 0;

	while (s[k] != '\0')
	{
		len++;
		k++;
	}

	min = len;
	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == accept[i])
			{
				if (j <= min)
				{
					flag = 1;
					min = j;
					break;

				}
			}
		}
	}
	if (flag == 0)
		min = 0;
	return (s + min);
}
