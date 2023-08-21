/**
 * _strncat - concatenates two strings.
 * @dest: string
 * @src: string
 * @n: bytes
 * Return: the string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		if (j < n)
		{
		dest[i] = dest[i] + src[j];
		i++;
		j++;
		}
		else
			break;
	}
	return (dest);
}
