#include <stdlib.h>
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
/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: bytes
 * Return: null or pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL)
		_strcpy(s1, "");
	if (s2 == NULL)
		_strcpy(s2, "");
	while (s1[i] != '\0' && s1 != NULL)
		i++;
	while (s2[j] != '\0' && s2 != NULL)
		j++;
	if (n >= j)
	{
		ar = malloc((i + j + 1) * sizeof(char));
	}
	else
		ar = malloc((i + n + 1) * sizeof(char));

	if (ar == NULL)
	{
		return (NULL);
	}
	while (s1[k] != '\0')
	{
		ar[k] = s1[k];
		k++;
	}
	while (s2[l] != '\0' && n != 0)
	{
		k++;
		ar[k] = s2[l];
		l++;
		n--;
	}
	s[k] = '\0';
	return (ar);
}
