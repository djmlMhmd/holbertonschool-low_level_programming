#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>


/**
 * print_name - print name
 * @name: name print
 * @f: A pointer to a function
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}


#endif
