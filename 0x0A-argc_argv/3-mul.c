#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: args count
 * @argv: args vector
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int mul;
	int fnum = atoi(argv[1]);
	int snum = atoi(argv[2]);

	if (argc == 3)
	{
	mul = fnum * snum;
	printf("%d\n", mul);
	}
	else
		printf("Error\n");

	return (0);
}
