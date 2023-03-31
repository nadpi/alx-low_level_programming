/**
 * leet - encodes string to 1337
 * @s: string
 * Return: encoded string
 */
char *leet(char *s)
{
	char alph[] = {'a', 'e', 'o', 't', 'l'};
	char capalph[] = {'A', 'E', 'O', 'T', 'L'};
	char leet[] = {'4', '3', '0', '7, '1'};

	int i = 0;

	while (s[i] != '\0')
	{
		int j = 0;

		while (j < 5)
		{
			if (s[i] == alph[j] || s[i] == capalph[j])
				{
					s[i] = leet[j];
					j++;
				}
			else
				j++;
		}
		i++;
	}
	return (s);
}
