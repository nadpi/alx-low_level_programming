#include <stdlib.h>
/**
 * create_array - creats an array of chars
 * @size: size of array
 * @c: char
 * Return: null or pointer to array
 */
char *create_array(unsigned int size, char c)
{
	int s = size * sizeof(char), i;
	char *ar = malloc(size * sizeof(char));

	if (size == 0 || ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
