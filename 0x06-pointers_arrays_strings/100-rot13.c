/**
 * rot13 - encodes string to rot13
 * @s: string
 * Return: encoded string
 */
char *rot13(char *s)
{
	char alph[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char rot13[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};
	int i = 0;

	while (s[i] != '\0')
	{
		int j = 0;

		while (j < 54)
		{
			if (s[i] == alph[j])
			{
				s[i] = rot13[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
