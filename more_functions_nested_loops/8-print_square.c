/**
 * print_square - print square
 * @size: size square
 * Return: 0
 */

#include "main.h"

void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}