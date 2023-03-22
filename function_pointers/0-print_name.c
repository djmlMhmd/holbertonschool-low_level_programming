

#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H



#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/**
 * print_name - print name
 * @name: name print
 * @f: name variable contain address
 */

void print_name(char *name, void (*f)(char *))
{

f(name);
}


#endif
