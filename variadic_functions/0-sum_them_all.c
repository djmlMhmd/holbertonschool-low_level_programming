#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: the number of parameters passed to the function.
 * ...: the variable number of parameters to be summed up.
 *
 * Return: the sum of all the parameters.
 * If n == 0, returns 0.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
int sum = 0;
unsigned int i;

if (n == 0)
return (0);


va_start(args, n);

for (i = 0; i < n; i++)
sum += va_arg(args, int);

va_end(args);

return (sum);
}
