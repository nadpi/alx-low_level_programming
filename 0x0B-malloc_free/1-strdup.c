#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: null or pointer
 */
char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *ar;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}
	i += 1;
	ar = malloc(i * sizeof(char));

	if (ar == NULL)
		return (NULL);

	while (str[j] != '\0')
	{
		ar[j] = str[j];
		j++;
	}
	ar[j + 1] = '\0';

	return (ar);

}
