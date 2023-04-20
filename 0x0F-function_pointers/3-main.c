#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
	int (*ptr)(int a, int b), result;

	if (argc > 4)
	{
		printf("too short.");
		return (0);
	}
	ptr = get_op_func(argv[2]);
	result = ptr(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);

	return (0);
}
