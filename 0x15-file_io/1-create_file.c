#include "main.h"
/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content:  a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fp, i, j = 0;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (!filename)
		return (-1);

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fp == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[j] != '\0')
			j++;
		i = write(fp, text_content, j);
		if (i == -1)
			return (-1);

	}
	else
	{
		i = write(fp, "", 0);
	}

	close(fp);
	return (1);

}
