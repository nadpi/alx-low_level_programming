#include <stdlib.h>
/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes each
 * @nmemb: bytes
 * @size: size
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ar = malloc(nmemb * size);

	if (ar == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		ar[i] = 0;

	return (ar);
}
