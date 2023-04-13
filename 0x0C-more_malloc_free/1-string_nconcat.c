#include <stdlib.h>
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
	int i = 0, j = 0, k = 0, l = 0;

	while (s1[i] != '\0')
	{
		if (s1 == NULL)
		{
			i = 0;
			break;
		}
		i++;
	}
	while (s2[j] != '\0')
	{
		if (s2 == NULL)
		{
			j = 0;
			break;
		}
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
	while (s2[l] != '\0' && n != 0)
	{
		ar[k] = s2[l];
		l++;
		k++;
		n--;
	}
	return (ar);

}
