/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: caract
 * @n: nbr caract
 *
 */

#include "main.h"

void reverse_array(int *a, int n)
{
int tmp;
int i;
for (i = 0; i < n / 2; i++)
{
tmp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = tmp;
}
}
