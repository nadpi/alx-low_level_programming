#include <ctype.h>
/**
 * _isdigit - checks for a digit
 * @c: digit
 * Return: 0/1 (Success)
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
