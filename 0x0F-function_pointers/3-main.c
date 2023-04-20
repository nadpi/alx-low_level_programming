#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * main - entry point
 * @argc: arguments
 * @argv: args vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int (*ptr)(int a, int b), result;

	if (argc != 4)
	{
		exit(98);
	}
	ptr = get_op_func(argv[2]);
	if (ptr == NULL)
		exit(99);

	result = ptr(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);

	return (0);
}
