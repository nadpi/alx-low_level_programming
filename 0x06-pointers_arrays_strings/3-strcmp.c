/**
 * _strcmp - compares two strings
 * @s1: string1
 * @s2: string2
 * Return: -1 , 0 , 1 (less than, equal, bigger than)
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, res = 0, k = 0, l = 0;

	while (s1[k] != '\0')
	{
		k++;
	}
	while (s2[l] != '\0')
	{
		l++;
	}
	if (k < l)
	{
	while (i < l)
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			res = s1[i] - s2[i];
			return (res);
		}
	}
	}
	else
	{
		while (i < k)
		{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			res = s1[i] - s2[i];
			return (res);
		}
		}
	}
	return (0);
}
