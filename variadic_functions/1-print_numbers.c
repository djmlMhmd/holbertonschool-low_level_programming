#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n: the number of integers passed to the function.
 * ...: the variable number of integers to be printed.
 *
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));

if (i != n - 1 && separator != NULL)
printf("%s", separator);
}

va_end(args);

printf("\n");
}
