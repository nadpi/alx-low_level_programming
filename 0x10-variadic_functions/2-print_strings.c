#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @n: num of args
 * @separator: string between the strings
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *s;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);

		if (separator)
		{
			if (s == NULL)
				s = "nil";
			printf("%s", s);
			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
		else
		{
			if (s == NULL)
				s = "nil";
			printf("%s", s);
		}
	}

	printf("\n");
	va_end(args);
}
