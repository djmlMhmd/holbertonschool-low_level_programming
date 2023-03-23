#include <stddef.h>
#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - selects the correct function to perform the
 *
 * @s: the operator passed as argument to the program
 *
 * Return: a pointer to the function that corresponds
 */


int (*get_op_func(char *s))(int, int)
{

op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

size_t i = 0;

while (ops[i].op != NULL)
{
if (strcmp(ops[i].op, s) == *s && *(s + 1) == '\0')
return (ops[i].f);
i++;
}
return (NULL);
}
