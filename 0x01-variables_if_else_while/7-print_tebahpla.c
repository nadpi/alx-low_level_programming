#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet = 'z';
	int i;

	for (i = 26 ; i > 0 ; i--)
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
