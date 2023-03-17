#include <stdio.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low = 'a';
	int i;

	for (i = 0 ; i < 26 ; i++)
	{
		if (low == 'e' || low == 'q')
		{
			low++;
		}
		else
		{
			putchar(low);
			low++;
		}
	}
	putchar('\n');
	return (0);
}
