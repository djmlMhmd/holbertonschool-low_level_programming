
#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name
 * @name: name print
 * @f: name variable contain address
 */

void print_name(char *name, void (*f)(char *))
{

f(name);
}
