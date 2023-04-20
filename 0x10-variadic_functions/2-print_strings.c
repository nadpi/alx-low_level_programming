#include <stdarg.h>
/**
 * print_strings - prints strings
 * @n: num of args
 * @separartor: string between the strings
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int j = 0;

		char *s = va_args(args, char);
		while (s[j] != '\0')
		{
			if(s)
				printf("%c", *s);
			else
				s[j] == "(nil)";
		}
		if (separator)
		{
			if (i < n - 1)
			{
				printf("%c ", *separator);
			}
		}

	}
}
