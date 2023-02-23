/**
* print_numbers - print numbers.
*
*
* Return: 0 (Success)
*/

#include "main.h"

void print_numbers(void)
{
int num = 0;
while (num <= 9)
{
_putchar('0' + num);
num++;
}
_putchar('\n');
}
