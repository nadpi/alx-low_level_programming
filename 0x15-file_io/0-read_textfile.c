#include "main.h"
/**
 * read_textfile -  reads a text file and prints to the POSIX standard output.
 * @filename: file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t i = 0, j;
	char *str;

	if (!filename)
		return (0);

	str = malloc(letters * sizeof(char));

	if (!str)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		free(str);
		return (0);
	}

	i = read(fp, str, letters);
	if (i == -1)
	{
		free(str);
		close(fp);
		return (0);
	}

	j = write(STDOUT_FILENO, str, i);
	if (j != i || j == -1)
	{
		return (0);
	}
	close(fp);
	return (j);

}
