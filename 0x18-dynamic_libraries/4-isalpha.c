#include "main.h"
#include <ctype.h>
/**
 * _isalpha - check character is alpha.
 *
 * @c: type int
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	int flag = 0;

	if (isalpha(c))
	{
		flag = 1;
	}
	else
	{
		flag = 0;
	}
	return (flag);
}
