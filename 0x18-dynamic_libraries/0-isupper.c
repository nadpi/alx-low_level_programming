#include <stdio.h>
#include <ctype.h>
/**
 * _isupper -if char is uppercase
 * @c: type int
 * Return: Always 0,1 (Success)
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
