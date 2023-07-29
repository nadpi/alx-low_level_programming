#ifndef __mainh__
#define __mainh__
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
ssize_t read_textfile(const char *filename, size_t letters);
void _putchar(char);
#endif
