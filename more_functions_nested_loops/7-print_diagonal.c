/**
 * print_diagonal - print diag
 * @n: print slash
 * Return: 0
 */

#include "main.h"

void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i, nb_espace;
for (i = 1; i <= n; i++)
{
for (nb_espace = 0; nb_espace < i - 1; nb_espace++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
_putchar('\n');
}
}
