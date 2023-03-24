#include "main.h"

/**
 * is_prime_number - Write a function that returns 1 if the input integer
 * @n: integer input
 * @i: integer input
 * Return: 1 if prime, 0 if not
*/


int is_prime(int n, int i);

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_prime(n, 2));
}


/**
 * is_prime - checks if a number is prime
 * @n: integer input
 * @i: integer input
 *
 * Return: 1 if prime, 0 if not
 */


int is_prime(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i > n / 2)
		return (1);
	return (is_prime(n, i + 1));
}
