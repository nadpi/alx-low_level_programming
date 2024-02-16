#include "main.h"
/**
 * append_text_to_file -  appends text at the end of a file.
 * @filename: filename
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, i, j = 0;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (!filename)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND, mode);
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

	close(fp);
	return (1);
}
