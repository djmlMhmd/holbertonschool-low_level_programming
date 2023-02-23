/**
 * print_triangle - print triangle
 * @size: size triangle
 * Return: 0
 */

#include "main.h"


void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, nb_espace, nb_diese;
for (i = 1; i <= size; i++)
{
for (nb_espace = 0; nb_espace < (size - i); nb_espace++)
{
_putchar(' ');
}
for (nb_diese = 1; nb_diese <= i ; nb_diese++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
