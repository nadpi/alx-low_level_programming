#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - checks if character is uppercase
 * @c: character wanted to be checked
 * return: upper or not
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
