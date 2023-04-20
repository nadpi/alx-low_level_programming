#include <stdarg.h>
#include <stdio.h>
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
		char s = va_arg(args, char);
		/*while (s[j] != '\0')
		{
			if(s)
				printf("%c", *s);
			else
				s[j] == "(nil)";
		}*/

		printf("%c", s);
		if (separator)
		{
			if (i < n - 1)
			{
				printf("%c ", *separator);
			}
		}
		else
		{
			if (i < n - 1)
				printf(" ");
		}
	}
	printf("\n");
	va_end(args);
}
