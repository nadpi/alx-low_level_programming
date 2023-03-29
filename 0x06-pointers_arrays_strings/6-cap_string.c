/**
 * cap_string - capitalizes all words of a string.
 * @s: string
 * Return: the result
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '"' ||
		s[i] == '(' || s[i] == '{' ||
		s[i] == '\t' || s[i] == '.' ||
		s[i] == ',' || s[i] == ';' ||
		s[i] == '!' || s[i] == '?' || s[i] == ')' || s[i] == '}')
		{
			if (s[i + 1] >= 97)
			{
			s[i + 1] = s[i + 1] - 32;
			i++;
			}
			else
				i++;
		}
		else if ((s[i] == ',' || s[i] == ';' ||
		s[i] == '.' || s[i] == '!' ||
		s[i] == '?' || s[i] == '"' ||
		s[i] == ')' || s[i] == '(' ||
		s[i] == '}' || s[i] == '{' ||
		s[i] == ' ' || s[i] == '\t' ||
		s[i] == '\n') && s[i + 1] == ' ')
			{
				i++;
			}
		else
			i++;
	}
	return (s);
}
