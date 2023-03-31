/**
 * cap_string - capitalizes all words of a string.
 * @s: string
 * Return: the result
 */
char *cap_string(char *s)
{
	int i = 0;

	if (s[0] == 'a' || 'b' || 'c' || 'e' || 'd' || 'f' || 'g' || 'h' || 'i'
			|| 'j' || 'k' || 'l' || 'm' || 'n' || 'o' || 'p' || 'q' || 'r' || 's'
			|| 't' || 'u' || 'v' || 'w' || 'x' || 'y' || 'z')
		s[0] = s[0] - 32;
	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '"'
		|| s[i] == '(' || s[i] == '{' || s[i] == '\t' || s[i] == '.' ||
		s[i] == ',' || s[i] == ';' || s[i] == '!' ||
		s[i] == '?' || s[i] == ')' || s[i] == '}')
		{
			if (s[i + 1] >= 97)
			{
			s[i + 1] = s[i + 1] - 32;
			i++;
			}
			else
				i++;
		}
		else if ((s[i] == ',' && s[i + 1] == ' ') ||
			(s[i] == ';' && s[i + 1] == ' ') ||
			(s[i] == '.' && s[i + 1] == ' ') || (s[i] == '!' && s[i + 1] == ' ') ||
			(s[i] == '?' && s[i + 1] == ' ') || (s[i] == '"' && s[i + 1] == ' ') ||
			((s[i] == ')' || s[i] == '(') && s[i + 1] == ' ') ||
			((s[i] == '}' || s[i] == '{') && s[i + 1] == ' '))
			{i++; }
		else
			i++;
	}
	return (s);
}
