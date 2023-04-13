#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: min value
 * @max: max value
 * Return: pointer or null
 */
int *array_range(int min, int max)
{
	int size, i, *ar;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ar = malloc(size * sizeof(int));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ar[i] = min;
		min++;
	}
	return (ar);
}
