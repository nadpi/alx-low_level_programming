#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string2
 * Return: null or pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *ar;

	while (s1[i] != '\0' || s1[i] != NULL)
	{
		i++;
	}

	while (s2[j] != '\0' || s2[j] != NULL)
	{
		j++;
	}
	ar = malloc((i + j + 1) * sizeof(char));

	if (ar == NULL)
		return (NULL);

	while (s1[k] != '\0')
	{
		ar[k] = s1[k];
		k++;
	}
	while (s2[l] != '\0')
	{
		ar[k] = s2[l];
		k++;
		l++;
	}
	ar[k + 1] = '\0';
	return (ar);
}
