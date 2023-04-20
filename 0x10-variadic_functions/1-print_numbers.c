#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		if (separator)
		{
			printf("%d", num);
			if (i < n - 1)
			{
				printf("%c ", *separator);
			}
		}
		else
		{
			printf("%d", num);
			if (i < n - 1)
				printf(" ");
		}
	}
	printf("\n");
}