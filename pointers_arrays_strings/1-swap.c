/**
* swap_int - function that swaps the values of two integers.
* @a: valeur 1
* @b: valeur 2
*/

#include "main.h"

void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
