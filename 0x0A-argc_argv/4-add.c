#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: args count
 * @argv: args vector
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
		if (isalpha(argv[i][j]))
		{
			printf("Error\n");
			return (1);
		}
			sum += atoi(argv[i]);
	}
	}
	printf("%d\n", sum);
	}
	return (0);
}
