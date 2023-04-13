#include <stdlib.h>
/**
 * malloc_checked -  allocates memory using malloc.
 * @b: size
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	char *ar = malloc(b);

	if (ar == NULL)
	{
		exit(98);
	}
	return (ar);
}
