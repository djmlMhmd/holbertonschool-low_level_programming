/**
 * _sqrt_recursion - Calcule la racine carrée entière d'un nombre
 * @n: Le nombre à calculer
 *
 * Return: La racine carrée entière de n, ou -1 s'il n'en a pas
 */

#include "main.h"


int _sqrt_recursion(int n)
{
int racine = 1;
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);



while (racine * racine <= n)
racine++;

racine--;

if (racine *racine == n)
return (racine);

return (-1);
}
