#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: num of args
 * Return: the sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		sum += num;
	}
	return (sum);
}
