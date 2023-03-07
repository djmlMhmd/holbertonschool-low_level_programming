/**
 * _print_rev_recursion - prints a string in reverse, recursively
 * @s: the string to be printed
 *
 * Return: none
 */




#include "main.h"
#include <stdio.h>

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
else
{
_print_rev_recursion(s + 1);
putchar(*s);
}
}
