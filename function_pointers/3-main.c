#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"


/**
 * main - performs simple operations on two integers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful, exit with code 98, 99, 100 if error
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error: Wrong number of arguments\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op_func = get_op_func(argv[2]);


	if (op_func == NULL)
	{
		printf("Error: Operator not recognized\n");
		exit(99);
	}

if ((op_func == op_div || op_func == op_mod) && b == 0)
{
printf("Error: Cannot divide by zero\n");
exit(100);
}
	printf("%d\n", op_func(a, b));

	return (0);
}
