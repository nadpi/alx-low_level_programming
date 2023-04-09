#include <stdio.h>
/**
 * main - entry point
 * @argc: args count
 * @argv: args vector
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
