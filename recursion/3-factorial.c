/**
 * factorial - calculates the factorial of a number
 *
 * @n: the number whose factorial is to be calculated
 *
 * Return: the factorial of n, or -1 on error
 */



#include "main.h"

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
