#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet = 'a';
	int i;

	for (i = 0 ; i < 26 ; i++)
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
