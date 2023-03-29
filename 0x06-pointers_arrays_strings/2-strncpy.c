/**
 * _strncpy - copies a string.
 * @dest: string
 * @src: string
 * @n: bytes
 * Return: the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0,  j = 0;

	while (src[j] != '\0')
	{
		j++;
	}
	if (j > n)
	{
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	}
	else
	{
		while (i < j)
		{
			dest[i] = src[i];
			i++;
		}
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
