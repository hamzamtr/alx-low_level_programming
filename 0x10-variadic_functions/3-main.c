#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int a, b, result;
	char *op;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	op_func = get_op_func(op);

	if (op_func == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((*op == '/' || *op == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = op_func(a, b);
	printf("%d\n", result);

	return (0);
}
