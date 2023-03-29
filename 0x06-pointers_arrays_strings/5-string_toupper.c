#include <stdio.h>
/**
 * string_toupper - changes lowercase letter of a string
 * to uppercase
 * @s: string
 * Return: uppercase string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97)
		{
			s[i] = s[i] - 32;
			i++;
		}
		else
			i++;
	}
	return (s);
}
