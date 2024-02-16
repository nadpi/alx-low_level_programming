#include "main.h"
/**
 * main - main
 * @ac: args count
 * @av: args
 * Return: 0
 */
int main(int ac, char **av)
{
	int fp, i, ft;
	char buffer[1024];
	ssize_t j;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit (97);
	}

	fp = open(av[1], O_RDONLY);
	if (fp == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	i = read(fp, buffer, 1024);
	if (i == -1)
	{
		dprintf(2, "Error: Can't read from %s\n", av[1]);
		close(fp);
		exit (98);
	}

	ft = open(av[2], O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (ft == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit (99);
	}

	j = write(ft, buffer, i);
	if (j == -1 || j != i)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	if (close(fp) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fp);
		exit(100);
	}
	if (close(ft) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", ft);
		exit(100);
	}
	return (0);
}
