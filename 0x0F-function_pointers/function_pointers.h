#ifndef __mainh__
#define __mainh__
#include <stddef.h>
void _putchar(char);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
