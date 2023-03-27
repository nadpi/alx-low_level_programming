#include <stdio.h>
/**
 * swap_int - swaps the values of two ints
 * @a: first int
 * @b: second int
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp;
	int temp2;
	int temp3;

	temp = *a;
	temp2 = *b;
	temp3 = temp;
	temp = temp2;
	temp2 = temp3;
	*a = temp;
	*b = temp2;
}
