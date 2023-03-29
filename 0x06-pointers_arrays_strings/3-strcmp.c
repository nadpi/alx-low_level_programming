/**
 * _strcmp - compares two strings
 * @s1: string1
 * @s2: string2
 * Return: -1 , 0 , 1 (less than, equal, bigger than)
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			j = s1[i] - s2[j];
			return (j);
		}
	}
	return (0);
}
