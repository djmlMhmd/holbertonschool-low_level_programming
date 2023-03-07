/**
 * _sqrt_recursion - Calcule la racine carrée entière d'un nombre
 * @n: Le nombre à calculer
 * @racine: The integer to increment and check against n.
 * Return: La racine carrée entière de n, ou -1 s'il n'en a pas
 */

#include "main.h"

int sqrt_helper(int n, int racine);
int _sqrt_recursion(int n)
{
int racine = 1;
if (n < 0)
return (-1);
return (sqrt_helper(n, racine));
}

/**
 * sqrt_helper - Finds the natural square root of a number.
 * @n: The number to find the square root of.
 * @racine: The integer to increment and check against n.
 *
 * Return: If n has a natural square root - the square root of n.
 *         If n does not have a natural square root - -1.
 */
int sqrt_helper(int n, int racine)
{
if (racine * racine == n)
return (racine);
else if (racine * racine > n)
return (-1);
else
return (sqrt_helper(n, racine + 1));
}
