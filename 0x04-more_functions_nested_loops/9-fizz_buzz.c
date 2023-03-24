#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			if (i < 100)
			{
			putchar(' ');
			}
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			if (i < 100)
			{
				putchar(' ');
			}
		}
		else if (i % 5 == 0)
		{
				printf("Buzz");
			if (i < 100)
			{
				putchar(' ');
			}
		}
		else
		{
			printf("%d", i);
			if (i < 100)
			{
			putchar(' ');
			}
		}
	}
	printf("\n");
	return (0);
}
