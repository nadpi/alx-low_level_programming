#include "main.h"
#include <ctype.h>
/**
 * _islower - Entry point
 * @c: type int
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	int flag = 0;

	if (islower(c))
	{
		flag = 1;
	}
	else
	{
		flag = 0;
	}
	return (flag);
}
