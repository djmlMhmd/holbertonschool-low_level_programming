/**
 * print_str - print string
 * @str: string print
 */


#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>

void print_str(char *str)
{
printf("%s\n", str);
}

/**
 * print_name - print name
 * @name: name print
 * @f: name variable contain address
 */

void print_name(char *name, void (*f)(char *))
{

f(name);
}
