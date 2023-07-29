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
	ssize_t i = 0, readd;

	if (c == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	i = read(fp, c, letters);

	if (i <= 0)
	{
		free(c);
		return (0);
	}

	readd = write(STDOUT_FILENO, c, i);

	if (readd != i)
		return (0);

	close(fp);
	return (readd);
}
