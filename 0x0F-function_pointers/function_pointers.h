#ifndef __mainh__
#define __mainh__
typedef struct size
{
	int size;
} size_t;
void _putchar(char);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
