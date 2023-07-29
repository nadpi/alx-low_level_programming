#include "main.h"
/**
 * read_textfile - read txt file and print it
 * @filename: filename
 * @letters: num of letters to print
 * Return: 0 or num
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char *c = malloc(letters * sizeof(char));
	ssize_t i = 0;

	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == 0)
		return (0);

	i = read(fp, c, letters);
	c[i] = '\0';

	while (i > 0)
	{
		_putchar(*c);
		i--;
	}
	close(fp);
	return (i);
}
