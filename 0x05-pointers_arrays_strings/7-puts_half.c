#include <stdio.h>
/**
 * puts_half - prints half of a string
 * @str: string
 * Return:half string
 */
void puts_half(char *str)
{
	int i = 0, half, j;

	while (str[i] != '\0')
	{
		i++;
	}
	half = i / 2;
	half = i - half;

	if (i % 2 == 0)
	{
	for (j = half; j < i; j++)
	{
		printf("%c", str[j]);
	}
	printf("\n");
	}
	else
	{
		int n = (i - 1) / 2;

		for (j = n; j < i; j++)
		{
			printf("%c", str[j]);
		}
		printf("\n");
	}
}
