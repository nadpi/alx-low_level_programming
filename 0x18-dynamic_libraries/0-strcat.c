/**
 * _strcat - concatenates two strings.
 * @src: string
 * @dest: string
 * Return: the full string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = dest[i] + src[j];
		i++;
		j++;
	}
	return (dest);

}
