#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width
 * @height: height
 * Return: pointer or null
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j;

	if (width == 0 || width < 0)
		return (NULL);
	if (height == 0 || height < 0)
		return (NULL);

	ar = malloc(width  * sizeof(int *));

	for (i = 0; i<  width; i++)
	{
		ar[i] = malloc(height * sizeof(int));
	}
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);
}
