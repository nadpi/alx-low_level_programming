#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowalphabet = 'a';
	char upalphabet = 'A';
        int i;
	int j;

	for (i = 0 ; i < 26 ; i++)
        {
                putchar(lowalphabet);
                lowalphabet++;
        }

        for (j = 0; j < 26 ; j++)
	{
		putchar(upalphabet);
		upalphabet++;
	}

	putchar('\n');
	return (0);
}
