/**
* more_numbers - print numbers.
*
*
* Return: 0 (Success)
*/

#include "main.h"

void more_numbers(void)
{
int i, j, taille_tab = 10;
char nombre;
char chiffre[] = "1011121314";
for (i = 1; i <= 10; i++)
{
nombre = '0';
while (nombre <= '9')
{
_putchar(nombre);
nombre++;
}
for (j = 0; j < taille_tab; j++)
{
_putchar(chiffre[j]);
}
_putchar('\n');
}
}
