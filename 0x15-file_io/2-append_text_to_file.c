#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: filename
 * @text_content: text content
 * Return: 1 / -1;
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);

	if (fp == -1)
		return (-1);

	write(fp, text_content, sizeof(text_content) - 1);

	close(fp);
	return (1);
}
