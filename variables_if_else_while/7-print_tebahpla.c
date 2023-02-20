#include <stdio.h>

/**
* main - print the alphabet in lowercase alphabet in reverse
*
* Return: Always 0 (Success)
*/

int main(void)
{
char alphabet;

alphabet = 'z';

while (alphabet >= 'a')
{
putchar(alphabet);
alphabet--;
}
putchar('\n');
return (0);
}
