#include "main.h"
/**
 * create_file - create a file
 * @filename: filename
 * @text_content: string
 * Return: 1 / -1
 */
int create_file(const char *filename, char *text_content)
{
	mode_t mode = S_IRUSR | S_IWUSR;
	int fp;
	ssize_t letters;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, mode);

	if (fp == -1)
		return (-1);

	letters = write(fp, text_content, _strlen(text_content));

	if (letters == -1)
		return (0);

	close(fp);
	return (letters);
}
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: the length
 */
int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
		i++;
	return (i);
}
