#include "function_pointers.h"
/**
 * array_iterator - executes a function given
 *  as a parameter on each element of an array.
 *  @array: array passed
 *  @size: size of array
 *  @action: a pointer to the function you need to use
 *  Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!action || !array)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
