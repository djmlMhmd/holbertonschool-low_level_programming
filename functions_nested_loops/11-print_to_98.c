#include "main.h"
#include <stdio.h>


/**
* print_to_98 - function who add two numbers
* @n: valeur
* Return: val1 + val2
*/

void print_to_98(int n)
{


if (n == 98)
{
printf("%d", 98);
}

else if (n < 98)
{
printf("%d,", n);
n++;
while (n != 98)
{
printf("%2d,", n);
n++;
}
printf("%2d", 98);
}
else if (n > 98)
{
printf("%d,", n);
n--;
while (n != 98)
{
printf("%2d,", n);
n++;
}
printf("%2d", 98);
}

}
